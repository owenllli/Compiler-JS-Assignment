%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern int yylex(void);
extern void init_lexer(const char *input);
extern int yylineno;
extern int line_terminator_seen;
extern int lookahead_token; // 新增：从 lexer 获取下一个 token 类型

void yyerror(const char *s);
ASTNode *root = NULL;
extern int asi_triggered; // 声明这是一个在别处定义的外部变量

// ASI Helper: Check if semicolon should be inserted
int check_asi() {
    // ASI 触发条件:
    // 1. 前面有换行符
    // 2. 下一个 token 是 '}'
    // 3. 下一个 token 是文件结尾 (END)
    if (line_terminator_seen || lookahead_token == RBRACE || lookahead_token == END) {
        asi_triggered = 1; // 标记ASI被触发
        return 1;
    }
    return 0;
}

%}

%union {
    ASTNode *node;
    char *str;
}

// Tokens
%token <str> IDENTIFIER NUMBER STRING REGEX
%token <str> BREAK CASE CATCH CONTINUE DEFAULT DELETE DO ELSE FINALLY FOR FUNCTION
%token <str> IF IN INSTANCEOF NEW RETURN SWITCH THIS THROW TRY TYPEOF VAR VOID WHILE WITH
%token <str> TRUE FALSE NULL_LITERAL

%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET
%token DOT SEMICOLON COMMA
%token LT GT LE GE EQ NE STRICT_EQ STRICT_NE
%token PLUS MINUS MULTIPLY DIVIDE MOD
%token INCR DECR
%token LSHIFT RSHIFT URSHIFT
%token BITWISE_AND BITWISE_OR BITWISE_XOR BITWISE_NOT
%token NOT LOGICAL_AND LOGICAL_OR
%token QUESTION COLON
%token ASSIGN PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVIDE_ASSIGN MOD_ASSIGN
%token LSHIFT_ASSIGN RSHIFT_ASSIGN URSHIFT_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN
%token END

// Non-terminals
%type <node> Program SourceElements SourceElement Statement Block
%type <node> VariableStatement VariableDeclarationList VariableDeclaration
%type <node> EmptyStatement ExpressionStatement IfStatement IterationStatement
%type <node> ContinueStatement BreakStatement ReturnStatement WithStatement
%type <node> SwitchStatement ThrowStatement TryStatement
%type <node> FunctionDeclaration FunctionExpression
%type <node> FormalParameterList
%type <node> Expression ExpressionOpt AssignmentExpression ConditionalExpression
%type <node> LogicalORExpression LogicalANDExpression BitwiseORExpression
%type <node> BitwiseXORExpression BitwiseANDExpression EqualityExpression
%type <node> RelationalExpression ShiftExpression AdditiveExpression
%type <node> MultiplicativeExpression UnaryExpression PostfixExpression
%type <node> LeftHandSideExpression CallExpression NewExpression MemberExpression
%type <node> PrimaryExpression ArrayLiteral ObjectLiteral
%type <node> ElementList PropertyNameAndValueList Literal
%type <node> Arguments ArgumentList
%type <node> Elision ElisionOpt
%type <node> CaseBlock CaseClauses CaseClause DefaultClause
%type <node> Catch Finally

// Operator precedence and associativity
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%right ASSIGN PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVIDE_ASSIGN MOD_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN URSHIFT_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN
%right QUESTION COLON
%left LOGICAL_OR
%left LOGICAL_AND
%left BITWISE_OR
%left BITWISE_XOR
%left BITWISE_AND
%left EQ NE STRICT_EQ STRICT_NE
%left LT GT LE GE INSTANCEOF IN
%left LSHIFT RSHIFT URSHIFT
%left PLUS MINUS
%left MULTIPLY DIVIDE MOD
%right NOT BITWISE_NOT TYPEOF VOID DELETE
%right INCR DECR UNARY_PLUS UNARY_MINUS
%left DOT LBRACKET LPAREN
%left NEW

%%

Program:
    SourceElements { root = $1; YYACCEPT; }
    | /* empty */ { root = create_node(NODE_PROGRAM, NULL); YYACCEPT; }
    ;

SourceElements:
    SourceElement { $$ = $1; }
    | SourceElements SourceElement {
        $$ = $1;
        if ($$) {
            ASTNode *temp = $$;
            while (temp->next) temp = temp->next;
            temp->next = $2;
        } else {
            $$ = $2;
        }
    }
    ;

SourceElement:
    Statement { $$ = $1; }
    | FunctionDeclaration { $$ = $1; }
    ;

Statement:
    Block { $$ = $1; }
    | VariableStatement { $$ = $1; }
    | EmptyStatement { $$ = $1; }
    | ExpressionStatement { $$ = $1; }
    | IfStatement { $$ = $1; }
    | IterationStatement { $$ = $1; }
    | ContinueStatement { $$ = $1; }
    | BreakStatement { $$ = $1; }
    | ReturnStatement { $$ = $1; }
    | WithStatement { $$ = $1; }
    | SwitchStatement { $$ = $1; }
    | ThrowStatement { $$ = $1; }
    | TryStatement { $$ = $1; }
    ;

Block:
    LBRACE RBRACE { $$ = create_node(NODE_BLOCK_STMT, NULL); }
    | LBRACE SourceElements RBRACE {
        $$ = create_node(NODE_BLOCK_STMT, NULL);
        $$->left = $2;
    }
    ;

VariableStatement:
    VAR VariableDeclarationList SEMICOLON { $$ = $2; }
    | VAR VariableDeclarationList {
        if (check_asi()) {
            $$ = $2;
            yyerrok;
        } else {
            yyerror("Missing semicolon in variable statement");
            YYABORT;
        }
    }
    ;

VariableDeclarationList:
    VariableDeclaration { $$ = $1; }
    | VariableDeclarationList COMMA VariableDeclaration {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = $3;
    }
    ;

VariableDeclaration:
    IDENTIFIER {
        $$ = create_node(NODE_VAR_DECL, $1);
        free($1);
    }
    | IDENTIFIER ASSIGN AssignmentExpression {
        $$ = create_node(NODE_VAR_DECL, $1);
        $$->left = $3;
        free($1);
    }
    ;

EmptyStatement:
    SEMICOLON { $$ = create_node(NODE_EMPTY_STMT, NULL); }
    ;

ExpressionStatement:
    Expression SEMICOLON {
        $$ = create_node(NODE_EXPR_STMT, NULL);
        $$->left = $1;
    }
    | Expression {
        if (check_asi()) {
            $$ = create_node(NODE_EXPR_STMT, NULL);
            $$->left = $1;
            yyerrok;
        } else {
            yyerror("Missing semicolon in expression statement");
            YYABORT;
        }
    }
    ;

IfStatement:
    IF LPAREN Expression RPAREN Statement %prec LOWER_THAN_ELSE {
        $$ = create_node(NODE_IF_STMT, NULL);
        $$->left = $3;
        $$->right = $5;
    }
    | IF LPAREN Expression RPAREN Statement ELSE Statement {
        $$ = create_node(NODE_IF_STMT, NULL);
        $$->left = $3;
        $$->right = $5;
        $$->extra = $7;
    }
    ;

IterationStatement:
    WHILE LPAREN Expression RPAREN Statement {
        $$ = create_node(NODE_WHILE_STMT, NULL);
        $$->left = $3;
        $$->right = $5;
    }
    | DO Statement WHILE LPAREN Expression RPAREN SEMICOLON {
        $$ = create_node(NODE_WHILE_STMT, "do-while");
        $$->left = $5;
        $$->right = $2;
    }
    | DO Statement WHILE LPAREN Expression RPAREN {
        if (check_asi()) {
            $$ = create_node(NODE_WHILE_STMT, "do-while");
            $$->left = $5;
            $$->right = $2;
            yyerrok;
        } else {
            yyerror("Missing semicolon in do-while statement");
            YYABORT;
        }
    }
    | FOR LPAREN ExpressionOpt SEMICOLON ExpressionOpt SEMICOLON ExpressionOpt RPAREN Statement {
        $$ = create_node(NODE_FOR_STMT, NULL);
        $$->left = $3;
        $$->right = $5;
        $$->extra = create_binary_node(NODE_SEQUENCE_EXPR, $7, $9);
    }
    | FOR LPAREN VAR VariableDeclarationList SEMICOLON ExpressionOpt SEMICOLON ExpressionOpt RPAREN Statement {
        $$ = create_node(NODE_FOR_STMT, NULL);
        $$->left = $4;
        $$->right = $6;
        $$->extra = create_binary_node(NODE_SEQUENCE_EXPR, $8, $10);
    }
    | FOR LPAREN LeftHandSideExpression IN Expression RPAREN Statement {
        $$ = create_node(NODE_FOR_STMT, "for-in");
        $$->left = $3;
        $$->right = $5;
        $$->extra = $7;
    }
    | FOR LPAREN VAR VariableDeclaration IN Expression RPAREN Statement {
        $$ = create_node(NODE_FOR_STMT, "for-in-var");
        $$->left = $4;
        $$->right = $6;
        $$->extra = $8;
    }
    ;

ExpressionOpt:
    { $$ = NULL; }
    | Expression { $$ = $1; }
    ;

ContinueStatement:
    CONTINUE SEMICOLON { $$ = create_node(NODE_EXPR_STMT, "continue"); }
    | CONTINUE IDENTIFIER SEMICOLON {
        $$ = create_node(NODE_EXPR_STMT, "continue");
        $$->left = create_node(NODE_IDENTIFIER, $2);
        free($2);
    }
    | CONTINUE {
        if (check_asi()) {
            $$ = create_node(NODE_EXPR_STMT, "continue");
            yyerrok;
        } else {
            yyerror("Missing semicolon after continue");
            YYABORT;
        }
    }
    ;

BreakStatement:
    BREAK SEMICOLON { $$ = create_node(NODE_EXPR_STMT, "break"); }
    | BREAK IDENTIFIER SEMICOLON {
        $$ = create_node(NODE_EXPR_STMT, "break");
        $$->left = create_node(NODE_IDENTIFIER, $2);
        free($2);
    }
    | BREAK {
        if (check_asi()) {
            $$ = create_node(NODE_EXPR_STMT, "break");
            yyerrok;
        } else {
            yyerror("Missing semicolon after break");
            YYABORT;
        }
    }
    ;

ReturnStatement:
    RETURN SEMICOLON { $$ = create_node(NODE_RETURN_STMT, NULL); }
    | RETURN Expression SEMICOLON {
        $$ = create_node(NODE_RETURN_STMT, NULL);
        $$->left = $2;
    }
    | RETURN {
        if (check_asi()) {
            $$ = create_node(NODE_RETURN_STMT, NULL);
            yyerrok;
        } else {
            // Note: This case might be tricky. A return without a value followed by
            // a newline is valid ASI. A return followed by an expression on the same line
            // without a semicolon is a syntax error. The current 'error' token logic
            // might not distinguish this perfectly without more context.
            // But for most cases, this is a reasonable approximation.
            yyerror("Missing semicolon or value after return");
            YYABORT;
        }
    }
    | RETURN Expression {
        if (check_asi()) {
            $$ = create_node(NODE_RETURN_STMT, NULL);
            $$->left = $2;
            yyerrok;
        } else {
            yyerror("Missing semicolon after return value");
            YYABORT;
        }
    }
    ;
    
WithStatement:
    WITH LPAREN Expression RPAREN Statement {
        $$ = create_node(NODE_EXPR_STMT, "with");
        $$->left = $3;
        $$->right = $5;
    }
    ;

SwitchStatement:
    SWITCH LPAREN Expression RPAREN CaseBlock {
        $$ = create_node(NODE_EXPR_STMT, "switch");
        $$->left = $3;
        $$->right = $5;
    }
    ;

CaseBlock:
    LBRACE RBRACE { $$ = create_node(NODE_BLOCK_STMT, NULL); }
    | LBRACE CaseClauses RBRACE { $$ = $2; }
    ;

CaseClauses:
    CaseClause { $$ = $1; }
    | CaseClauses CaseClause {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = $2;
    }
    ;

CaseClause:
    CASE Expression COLON {
        $$ = create_node(NODE_EXPR_STMT, "case");
        $$->left = $2;
    }
    | CASE Expression COLON SourceElements {
        $$ = create_node(NODE_EXPR_STMT, "case");
        $$->left = $2;
        $$->right = $4;
    }
    | DefaultClause { $$ = $1; }
    ;

DefaultClause:
    DEFAULT COLON {
        $$ = create_node(NODE_EXPR_STMT, "default");
    }
    | DEFAULT COLON SourceElements {
        $$ = create_node(NODE_EXPR_STMT, "default");
        $$->left = $3;
    }
    ;

ThrowStatement:
    THROW Expression SEMICOLON {
        $$ = create_node(NODE_EXPR_STMT, "throw");
        $$->left = $2;
    }
    | THROW Expression {
        if (check_asi()) {
            $$ = create_node(NODE_EXPR_STMT, "throw");
            $$->left = $2;
            yyerrok;
        } else {
            yyerror("Missing semicolon after throw");
            YYABORT;
        }
    }
    ;

TryStatement:
    TRY Block Catch { 
        $$ = create_node(NODE_EXPR_STMT, "try");
        $$->left = $2;
        $$->right = $3;
    }
    | TRY Block Finally {
        $$ = create_node(NODE_EXPR_STMT, "try");
        $$->left = $2;
        $$->right = $3;
    }
    | TRY Block Catch Finally {
        $$ = create_node(NODE_EXPR_STMT, "try");
        $$->left = $2;
        $$->right = $3;
        $$->extra = $4;
    }
    ;

Catch:
    CATCH LPAREN IDENTIFIER RPAREN Block {
        $$ = create_node(NODE_EXPR_STMT, "catch");
        $$->left = create_node(NODE_IDENTIFIER, $3);
        $$->right = $5;
        free($3);
    }
    ;

Finally:
    FINALLY Block {
        $$ = create_node(NODE_EXPR_STMT, "finally");
        $$->left = $2;
    }
    ;

FunctionDeclaration:
    FUNCTION IDENTIFIER LPAREN RPAREN Block {
        $$ = create_node(NODE_FUNCTION_DECL, $2);
        $$->left = $5;
        free($2);
    }
    | FUNCTION IDENTIFIER LPAREN FormalParameterList RPAREN Block {
        $$ = create_node(NODE_FUNCTION_DECL, $2);
        $$->left = $4;
        $$->right = $6;
        free($2);
    }
    ;

FunctionExpression:
    FUNCTION LPAREN RPAREN Block {
        $$ = create_node(NODE_FUNCTION_DECL, NULL);
        $$->left = $4;
    }
    | FUNCTION LPAREN FormalParameterList RPAREN Block {
        $$ = create_node(NODE_FUNCTION_DECL, NULL);
        $$->left = $3;
        $$->right = $5;
    }
    | FUNCTION IDENTIFIER LPAREN RPAREN Block {
        $$ = create_node(NODE_FUNCTION_DECL, $2);
        $$->left = $5;
        free($2);
    }
    | FUNCTION IDENTIFIER LPAREN FormalParameterList RPAREN Block {
        $$ = create_node(NODE_FUNCTION_DECL, $2);
        $$->left = $4;
        $$->right = $6;
        free($2);
    }
    ;

FormalParameterList:
    IDENTIFIER {
        $$ = create_node(NODE_IDENTIFIER, $1);
        free($1);
    }
    | FormalParameterList COMMA IDENTIFIER {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_IDENTIFIER, $3);
        free($3);
    }
    ;

Expression:
    AssignmentExpression { $$ = $1; }
    | Expression COMMA AssignmentExpression {
        $$ = create_binary_node(NODE_SEQUENCE_EXPR, $1, $3);
    }
    ;

AssignmentExpression:
    ConditionalExpression { $$ = $1; }
    | LeftHandSideExpression ASSIGN AssignmentExpression {
        $$ = create_binary_node(NODE_ASSIGNMENT, $1, $3);
    }
    | LeftHandSideExpression PLUS_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "+=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression MINUS_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "-=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression MULTIPLY_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "*=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression DIVIDE_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "/=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression MOD_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "%=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression LSHIFT_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "<<=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression RSHIFT_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, ">>=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression URSHIFT_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, ">>>=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression AND_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "&=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression OR_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "|=");
        $$->left = $1;
        $$->right = $3;
    }
    | LeftHandSideExpression XOR_ASSIGN AssignmentExpression {
        $$ = create_node(NODE_ASSIGNMENT, "^=");
        $$->left = $1;
        $$->right = $3;
    }
    ;

ConditionalExpression:
    LogicalORExpression { $$ = $1; }
    | LogicalORExpression QUESTION AssignmentExpression COLON AssignmentExpression {
        $$ = create_node(NODE_CONDITIONAL_EXPR, NULL);
        $$->left = $1;
        $$->right = $3;
        $$->extra = $5;
    }
    ;

LogicalORExpression:
    LogicalANDExpression { $$ = $1; }
    | LogicalORExpression LOGICAL_OR LogicalANDExpression {
        $$ = create_node(NODE_BINARY_EXPR, "||");
        $$->left = $1;
        $$->right = $3;
    }
    ;

LogicalANDExpression:
    BitwiseORExpression { $$ = $1; }
    | LogicalANDExpression LOGICAL_AND BitwiseORExpression {
        $$ = create_node(NODE_BINARY_EXPR, "&&");
        $$->left = $1;
        $$->right = $3;
    }
    ;

BitwiseORExpression:
    BitwiseXORExpression { $$ = $1; }
    | BitwiseORExpression BITWISE_OR BitwiseXORExpression {
        $$ = create_node(NODE_BINARY_EXPR, "|");
        $$->left = $1;
        $$->right = $3;
    }
    ;

BitwiseXORExpression:
    BitwiseANDExpression { $$ = $1; }
    | BitwiseXORExpression BITWISE_XOR BitwiseANDExpression {
        $$ = create_node(NODE_BINARY_EXPR, "^");
        $$->left = $1;
        $$->right = $3;
    }
    ;

BitwiseANDExpression:
    EqualityExpression { $$ = $1; }
    | BitwiseANDExpression BITWISE_AND EqualityExpression {
        $$ = create_node(NODE_BINARY_EXPR, "&");
        $$->left = $1;
        $$->right = $3;
    }
    ;

EqualityExpression:
    RelationalExpression { $$ = $1; }
    | EqualityExpression EQ RelationalExpression {
        $$ = create_node(NODE_BINARY_EXPR, "==");
        $$->left = $1;
        $$->right = $3;
    }
    | EqualityExpression NE RelationalExpression {
        $$ = create_node(NODE_BINARY_EXPR, "!=");
        $$->left = $1;
        $$->right = $3;
    }
    | EqualityExpression STRICT_EQ RelationalExpression {
        $$ = create_node(NODE_BINARY_EXPR, "===");
        $$->left = $1;
        $$->right = $3;
    }
    | EqualityExpression STRICT_NE RelationalExpression {
        $$ = create_node(NODE_BINARY_EXPR, "!==");
        $$->left = $1;
        $$->right = $3;
    }
    ;

RelationalExpression:
    ShiftExpression { $$ = $1; }
    | RelationalExpression LT ShiftExpression {
        $$ = create_node(NODE_BINARY_EXPR, "<");
        $$->left = $1;
        $$->right = $3;
    }
    | RelationalExpression GT ShiftExpression {
        $$ = create_node(NODE_BINARY_EXPR, ">");
        $$->left = $1;
        $$->right = $3;
    }
    | RelationalExpression LE ShiftExpression {
        $$ = create_node(NODE_BINARY_EXPR, "<=");
        $$->left = $1;
        $$->right = $3;
    }
    | RelationalExpression GE ShiftExpression {
        $$ = create_node(NODE_BINARY_EXPR, ">=");
        $$->left = $1;
        $$->right = $3;
    }
    | RelationalExpression INSTANCEOF ShiftExpression {
        $$ = create_node(NODE_BINARY_EXPR, "instanceof");
        $$->left = $1;
        $$->right = $3;
    }
    | RelationalExpression IN ShiftExpression {
        $$ = create_node(NODE_BINARY_EXPR, "in");
        $$->left = $1;
        $$->right = $3;
    }
    ;

ShiftExpression:
    AdditiveExpression { $$ = $1; }
    | ShiftExpression LSHIFT AdditiveExpression {
        $$ = create_node(NODE_BINARY_EXPR, "<<");
        $$->left = $1;
        $$->right = $3;
    }
    | ShiftExpression RSHIFT AdditiveExpression {
        $$ = create_node(NODE_BINARY_EXPR, ">>");
        $$->left = $1;
        $$->right = $3;
    }
    | ShiftExpression URSHIFT AdditiveExpression {
        $$ = create_node(NODE_BINARY_EXPR, ">>>");
        $$->left = $1;
        $$->right = $3;
    }
    ;

AdditiveExpression:
    MultiplicativeExpression { $$ = $1; }
    | AdditiveExpression PLUS MultiplicativeExpression {
        $$ = create_node(NODE_BINARY_EXPR, "+");
        $$->left = $1;
        $$->right = $3;
    }
    | AdditiveExpression MINUS MultiplicativeExpression {
        $$ = create_node(NODE_BINARY_EXPR, "-");
        $$->left = $1;
        $$->right = $3;
    }
    ;

MultiplicativeExpression:
    UnaryExpression { $$ = $1; }
    | MultiplicativeExpression MULTIPLY UnaryExpression {
        $$ = create_node(NODE_BINARY_EXPR, "*");
        $$->left = $1;
        $$->right = $3;
    }
    | MultiplicativeExpression DIVIDE UnaryExpression {
        $$ = create_node(NODE_BINARY_EXPR, "/");
        $$->left = $1;
        $$->right = $3;
    }
    | MultiplicativeExpression MOD UnaryExpression {
        $$ = create_node(NODE_BINARY_EXPR, "%");
        $$->left = $1;
        $$->right = $3;
    }
    ;

UnaryExpression:
    PostfixExpression { $$ = $1; }
    | DELETE UnaryExpression {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("delete");
    }
    | VOID UnaryExpression {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("void");
    }
    | TYPEOF UnaryExpression {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("typeof");
    }
    | INCR UnaryExpression {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("++pre");
    }
    | DECR UnaryExpression {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("--pre");
    }
    | PLUS UnaryExpression %prec UNARY_PLUS {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("+");
    }
    | MINUS UnaryExpression %prec UNARY_MINUS {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("-");
    }
    | BITWISE_NOT UnaryExpression {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("~");
    }
    | NOT UnaryExpression {
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("!");
    }
    ;

PostfixExpression:
    LeftHandSideExpression { $$ = $1; }
    | LeftHandSideExpression INCR {
        if (line_terminator_seen) {
            $$ = $1;
            asi_triggered = 1;
        } else {
            $$ = create_unary_node(NODE_UNARY_EXPR, $1);
            $$->value = strdup("++post");
        }
    }
    | LeftHandSideExpression DECR {
        if (line_terminator_seen) {
            $$ = $1;
            asi_triggered = 1;
        } else {
            $$ = create_unary_node(NODE_UNARY_EXPR, $1);
            $$->value = strdup("--post");
        }
    }
    ;

LeftHandSideExpression:
    NewExpression { $$ = $1; }
    | CallExpression { $$ = $1; }
    ;

NewExpression:
    MemberExpression { $$ = $1; }
    | NEW NewExpression {
        $$ = create_node(NODE_NEW_EXPR, NULL);
        $$->left = $2;
    }
    ;

CallExpression:
    MemberExpression Arguments {
        $$ = create_node(NODE_CALL_EXPR, NULL);
        $$->left = $1;
        $$->right = $2;
    }
    | CallExpression Arguments {
        $$ = create_node(NODE_CALL_EXPR, NULL);
        $$->left = $1;
        $$->right = $2;
    }
    | CallExpression LBRACKET Expression RBRACKET {
        $$ = create_node(NODE_MEMBER_EXPR, "[]");
        $$->left = $1;
        $$->right = $3;
    }
    | CallExpression DOT IDENTIFIER {
        $$ = create_node(NODE_MEMBER_EXPR, ".");
        $$->left = $1;
        $$->right = create_node(NODE_IDENTIFIER, $3);
        free($3);
    }
    ;

MemberExpression:
    PrimaryExpression { $$ = $1; }
    | FunctionExpression { $$ = $1; }
    | MemberExpression LBRACKET Expression RBRACKET {
        $$ = create_node(NODE_MEMBER_EXPR, "[]");
        $$->left = $1;
        $$->right = $3;
    }
    | MemberExpression DOT IDENTIFIER {
        $$ = create_node(NODE_MEMBER_EXPR, ".");
        $$->left = $1;
        $$->right = create_node(NODE_IDENTIFIER, $3);
        free($3);
    }
    | NEW MemberExpression Arguments {
        $$ = create_node(NODE_NEW_EXPR, NULL);
        $$->left = $2;
        $$->right = $3;
    }
    ;

PrimaryExpression:
    THIS {
        $$ = create_node(NODE_THIS_EXPR, NULL);
    }
    | IDENTIFIER {
        $$ = create_node(NODE_IDENTIFIER, $1);
        free($1);
    }
    | Literal { $$ = $1; }
    | ArrayLiteral { $$ = $1; }
    | ObjectLiteral { $$ = $1; }
    | LPAREN Expression RPAREN { $$ = $2; }
    ;

Literal:
    NULL_LITERAL { $$ = create_node(NODE_LITERAL, "null"); }
    | TRUE { $$ = create_node(NODE_LITERAL, "true"); }
    | FALSE { $$ = create_node(NODE_LITERAL, "false"); }
    | NUMBER {
        $$ = create_node(NODE_LITERAL, $1);
        free($1);
    }
    | STRING {
        $$ = create_node(NODE_LITERAL, $1);
        free($1);
    }
    | REGEX {
        $$ = create_node(NODE_LITERAL, $1);
        free($1);
    }
    ;

ArrayLiteral:
    LBRACKET ElisionOpt RBRACKET {
        $$ = create_node(NODE_ARRAY_LITERAL, NULL);
        $$->left = $2;
    }
    | LBRACKET ElementList RBRACKET {
        $$ = create_node(NODE_ARRAY_LITERAL, NULL);
        $$->left = $2;
    }
    | LBRACKET ElementList COMMA ElisionOpt RBRACKET {
        $$ = create_node(NODE_ARRAY_LITERAL, NULL);
        $$->left = $2;
        $$->right = $4;
    }
    ;

ElementList:
    ElisionOpt AssignmentExpression {
        $$ = $2;
        if ($1) {
            $$->next = $1;
        }
    }
    | ElementList COMMA ElisionOpt AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = $4;
        if ($3) {
            $4->next = $3;
        }
    }
    ;

ElisionOpt:
    { $$ = NULL; }
    | Elision { $$ = $1; }
    ;

Elision:
    COMMA { $$ = create_node(NODE_EMPTY_STMT, NULL); }
    | Elision COMMA {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_EMPTY_STMT, NULL);
    }
    ;

ObjectLiteral:
    LBRACE RBRACE { $$ = create_node(NODE_OBJECT_LITERAL, NULL); }
    | LBRACE PropertyNameAndValueList RBRACE {
        $$ = create_node(NODE_OBJECT_LITERAL, NULL);
        $$->left = $2;
    }
    | LBRACE PropertyNameAndValueList COMMA RBRACE {
        $$ = create_node(NODE_OBJECT_LITERAL, NULL);
        $$->left = $2;
    }
    ;

PropertyNameAndValueList:
    IDENTIFIER COLON AssignmentExpression {
        $$ = create_node(NODE_PROPERTY, $1);
        $$->left = $3;
        free($1);
    }
    | STRING COLON AssignmentExpression {
        $$ = create_node(NODE_PROPERTY, $1);
        $$->left = $3;
        free($1);
    }
    | NUMBER COLON AssignmentExpression {
        $$ = create_node(NODE_PROPERTY, $1);
        $$->left = $3;
        free($1);
    }
    | PropertyNameAndValueList COMMA IDENTIFIER COLON AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, $3);
        temp->next->left = $5;
        free($3);
    }
    | PropertyNameAndValueList COMMA STRING COLON AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, $3);
        temp->next->left = $5;
        free($3);
    }
    | PropertyNameAndValueList COMMA NUMBER COLON AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, $3);
        temp->next->left = $5;
        free($3);
    }
    ;

Arguments:
    LPAREN RPAREN { $$ = NULL; }
    | LPAREN ArgumentList RPAREN { $$ = $2; }
    ;

ArgumentList:
    AssignmentExpression { $$ = $1; }
    | ArgumentList COMMA AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = $3;
    }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Parse error at line %d: %s\n", yylineno, s);
}

int parse_javascript(const char *input) {
    init_lexer(input);
    int result = yyparse();
    return result;
}

ASTNode* get_ast_root() {
    return root;
}