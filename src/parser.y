%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern int yylex(void);
extern void init_lexer(const char *input);
extern int yylineno;
extern int line_terminator_seen;
extern int lookahead_token;

void yyerror(const char *s);
ASTNode *root = NULL;
extern int asi_triggered;

// ASI Check
int check_asi() {
    if (line_terminator_seen || lookahead_token == RBRACE || lookahead_token == END) {
        asi_triggered = 1;
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
%token <str> CONST LET CLASS EXTENDS SUPER STATIC EXPORT IMPORT // ES6 Added
%token <str> OF
%token <str> TRUE FALSE NULL_LITERAL

%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET
%token DOT SEMICOLON COMMA ELLIPSIS ARROW
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
%type <node> VariableStatement VariableDeclarationList VariableDeclaration BindingIdentifierOrPattern
%type <node> LexicalDeclaration BindingList LexicalBinding
%type <node> EmptyStatement ExpressionStatement IfStatement IterationStatement
%type <node> ContinueStatement BreakStatement ReturnStatement WithStatement
%type <node> SwitchStatement ThrowStatement TryStatement
%type <node> FunctionDeclaration FunctionExpression ArrowFunction
%type <node> ClassDeclaration ClassExpression ClassTail ClassBody ClassElementList ClassElement // Class additions
%type <node> FormalParameterList ArrowFormalParameters
%type <node> Expression ExpressionOpt AssignmentExpression ConditionalExpression
%type <node> LogicalORExpression LogicalANDExpression BitwiseORExpression
%type <node> BitwiseXORExpression BitwiseANDExpression EqualityExpression
%type <node> RelationalExpression ShiftExpression AdditiveExpression
%type <node> MultiplicativeExpression UnaryExpression PostfixExpression
%type <node> LeftHandSideExpression CallExpression NewExpression MemberExpression
%type <node> PrimaryExpression ArrayLiteral ObjectLiteral
%type <node> ElementList PropertyNameAndValueList Literal
%type <node> PropertyName IdentifierName // Helper for "Keyword as ID"
%type <node> Arguments ArgumentList
%type <node> Elision ElisionOpt
%type <node> CaseBlock CaseClauses CaseClause DefaultClause
%type <node> Catch Finally

// Precedence
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%right ASSIGN PLUS_ASSIGN MINUS_ASSIGN MULTIPLY_ASSIGN DIVIDE_ASSIGN MOD_ASSIGN LSHIFT_ASSIGN RSHIFT_ASSIGN URSHIFT_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN ARROW
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

/* --- Helper: Keywords that can be Identifiers in property names --- */
IdentifierName:
    IDENTIFIER { $$ = create_node(NODE_IDENTIFIER, $1); free($1); }
    | DEFAULT { $$ = create_node(NODE_IDENTIFIER, "default"); }
    | DELETE { $$ = create_node(NODE_IDENTIFIER, "delete"); }
    | CLASS { $$ = create_node(NODE_IDENTIFIER, "class"); }
    | EXTENDS { $$ = create_node(NODE_IDENTIFIER, "extends"); }
    | SUPER { $$ = create_node(NODE_IDENTIFIER, "super"); }
    | STATIC { $$ = create_node(NODE_IDENTIFIER, "static"); }
    | EXPORT { $$ = create_node(NODE_IDENTIFIER, "export"); }
    | IMPORT { $$ = create_node(NODE_IDENTIFIER, "import"); }
    | VAR { $$ = create_node(NODE_IDENTIFIER, "var"); }
    | LET { $$ = create_node(NODE_IDENTIFIER, "let"); }
    | CONST { $$ = create_node(NODE_IDENTIFIER, "const"); }
    | IF { $$ = create_node(NODE_IDENTIFIER, "if"); }
    | ELSE { $$ = create_node(NODE_IDENTIFIER, "else"); }
    | DO { $$ = create_node(NODE_IDENTIFIER, "do"); }
    | WHILE { $$ = create_node(NODE_IDENTIFIER, "while"); }
    | FOR { $$ = create_node(NODE_IDENTIFIER, "for"); }
    | IN { $$ = create_node(NODE_IDENTIFIER, "in"); }
    | OF { $$ = create_node(NODE_IDENTIFIER, "of"); }
    | CONTINUE { $$ = create_node(NODE_IDENTIFIER, "continue"); }
    | BREAK { $$ = create_node(NODE_IDENTIFIER, "break"); }
    | RETURN { $$ = create_node(NODE_IDENTIFIER, "return"); }
    | WITH { $$ = create_node(NODE_IDENTIFIER, "with"); }
    | SWITCH { $$ = create_node(NODE_IDENTIFIER, "switch"); }
    | THROW { $$ = create_node(NODE_IDENTIFIER, "throw"); }
    | TRY { $$ = create_node(NODE_IDENTIFIER, "try"); }
    | CATCH { $$ = create_node(NODE_IDENTIFIER, "catch"); }
    | FINALLY { $$ = create_node(NODE_IDENTIFIER, "finally"); }
    | NULL_LITERAL { $$ = create_node(NODE_IDENTIFIER, "null"); }
    | TRUE { $$ = create_node(NODE_IDENTIFIER, "true"); }
    | FALSE { $$ = create_node(NODE_IDENTIFIER, "false"); }
    | NEW { $$ = create_node(NODE_IDENTIFIER, "new"); }
    | THIS { $$ = create_node(NODE_IDENTIFIER, "this"); }
    | TYPEOF { $$ = create_node(NODE_IDENTIFIER, "typeof"); }
    | VOID { $$ = create_node(NODE_IDENTIFIER, "void"); }
    | INSTANCEOF { $$ = create_node(NODE_IDENTIFIER, "instanceof"); }
    | FUNCTION { $$ = create_node(NODE_IDENTIFIER, "function"); }
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
    | ClassDeclaration { $$ = $1; }
    ;

Statement:
    Block { $$ = $1; }
    | VariableStatement { $$ = $1; }
    | LexicalDeclaration { $$ = $1; }
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

/* ES5 Var */
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

/* 新增非终结符，用于统一标识符和解构模式 */
BindingIdentifierOrPattern:
    IDENTIFIER { 
        $$ = create_node(NODE_IDENTIFIER, $1); 
        free($1); 
    }
    | ArrayLiteral { $$ = $1; }   /* Destructuring [a,b] */
    | ObjectLiteral { $$ = $1; }  /* Destructuring {a,b} */
    ;

VariableDeclaration:
    BindingIdentifierOrPattern {
        /* 变量声明不带初始化: var a; */
        $$ = create_node(NODE_VAR_DECL, NULL);
        $$->left = $1; 
    }
    | BindingIdentifierOrPattern ASSIGN AssignmentExpression {
        /* 变量声明带初始化: var a = 1; var [a] = [1]; */
        $$ = create_node(NODE_VAR_DECL, NULL);
        $$->left = $1;
        $$->right = $3;
    }
    ;

/* Lexical Declarations (Let/Const) - 修复点：补回 LexicalDeclaration */
LexicalDeclaration:
    LET BindingList SEMICOLON { $$ = $2; }
    | LET BindingList {
         if (check_asi()) { $$ = $2; yyerrok; } else { yyerror("Missing semicolon in let"); YYABORT; }
    }
    | CONST BindingList SEMICOLON { $$ = $2; }
    | CONST BindingList {
         if (check_asi()) { $$ = $2; yyerrok; } else { yyerror("Missing semicolon in const"); YYABORT; }
    }
    ;

BindingList:
    LexicalBinding { $$ = $1; }
    | BindingList COMMA LexicalBinding {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = $3;
    }
    ;

/* 修复点：移除重复的旧定义，保留这个支持解构的新定义 */
LexicalBinding:
    BindingIdentifierOrPattern {
        $$ = create_node(NODE_LET_DECL, NULL);
        $$->left = $1;
    }
    | BindingIdentifierOrPattern ASSIGN AssignmentExpression {
        $$ = create_node(NODE_LET_DECL, NULL);
        $$->left = $1;
        $$->right = $3;
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
    | FOR LPAREN LexicalDeclaration ExpressionOpt SEMICOLON ExpressionOpt RPAREN Statement {
         /* Simplified ES6 for structure */
         $$ = create_node(NODE_FOR_STMT, "for-let");
         $$->left = $3;
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
        /* Handle Return ASI: if newline seen, it's return undefined */
        if (line_terminator_seen || check_asi()) {
            $$ = create_node(NODE_RETURN_STMT, NULL);
            yyerrok;
        } else {
            /* This path is actually unreachable if lookahead validly starts an expression
               because Bison shifts. Ideally we need GLR or precedence hacks.
               But for this project, check_asi covers the "end of block" case.
            */
            yyerror("Missing semicolon or value after return");
            YYABORT;
        }
    }
    | RETURN Expression {
        /* Ambiguity: return \n a; -> parsed as return a; by default in Bison LALR(1) 
           unless we check line_terminator_seen explicitly inside actions, but that's late.
           For this project, we assume standard shifting unless explicit ASI trigger. */
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

/* Class Syntax (ES6) */
ClassDeclaration:
    CLASS IDENTIFIER ClassTail {
        $$ = create_node(NODE_CLASS_DECL, $2);
        $$->left = $3;
        free($2);
    }
    ;

ClassExpression:
    CLASS ClassTail {
        $$ = create_node(NODE_CLASS_EXPR, NULL);
        $$->left = $2;
    }
    | CLASS IDENTIFIER ClassTail {
        $$ = create_node(NODE_CLASS_EXPR, $2);
        $$->left = $3;
        free($2);
    }
    ;

ClassTail:
    LBRACE ClassBody RBRACE {
        $$ = $2;
    }
    | EXTENDS LeftHandSideExpression LBRACE ClassBody RBRACE {
        $$ = $4;
        $$->extra = $2; /* Store extended class in extra */
    }
    ;

ClassBody:
    /* Empty */ { $$ = NULL; }
    | ClassElementList { $$ = $1; }
    ;

ClassElementList:
    ClassElement { $$ = $1; }
    | ClassElementList ClassElement {
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

ClassElement:
    IdentifierName LPAREN FormalParameterList RPAREN Block {
        /* Method Definition */
        $$ = create_node(NODE_METHOD_DEF, NULL);
        $$->left = $1; /* Name */
        $$->right = $5; /* Body */
        /* Params implicitly in $5 context or we need structure. Simplified here */
    }
    | IdentifierName LPAREN RPAREN Block {
        $$ = create_node(NODE_METHOD_DEF, NULL);
        $$->left = $1;
        $$->right = $4;
    }
    | STATIC IdentifierName LPAREN RPAREN Block {
        $$ = create_node(NODE_METHOD_DEF, "static");
        $$->left = $2;
        $$->right = $5;
    }
    | SEMICOLON { $$ = NULL; }
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

/* Arrow Functions (Simplified Grammar to reduce conflicts) */
ArrowFunction:
    IDENTIFIER ARROW Block {
         $$ = create_node(NODE_ARROW_FUNCTION, "=>");
         $$->left = create_node(NODE_IDENTIFIER, $1);
         $$->right = $3;
         free($1);
    }
    | IDENTIFIER ARROW AssignmentExpression {
         $$ = create_node(NODE_ARROW_FUNCTION, "=>");
         $$->left = create_node(NODE_IDENTIFIER, $1);
         $$->right = $3;
         free($1);
    }
    | LPAREN ArrowFormalParameters RPAREN ARROW Block {
         $$ = create_node(NODE_ARROW_FUNCTION, "=>");
         $$->left = $2;
         $$->right = $5;
    }
    | LPAREN ArrowFormalParameters RPAREN ARROW AssignmentExpression {
         $$ = create_node(NODE_ARROW_FUNCTION, "=>");
         $$->left = $2;
         $$->right = $5;
    }
    ;

ArrowFormalParameters:
    { $$ = NULL; }
    | FormalParameterList { $$ = $1; }
    ;

Expression:
    AssignmentExpression { $$ = $1; }
    | Expression COMMA AssignmentExpression {
        $$ = create_binary_node(NODE_SEQUENCE_EXPR, $1, $3);
    }
    ;

AssignmentExpression:
    ConditionalExpression { $$ = $1; }
    | ArrowFunction { $$ = $1; } /* ES6 */
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
    /* Fix for IdentifierName (e.g., call.default()) */
    | CallExpression DOT IdentifierName {
        $$ = create_node(NODE_MEMBER_EXPR, ".");
        $$->left = $1;
        $$->right = $3;
    }
    ;

MemberExpression:
    PrimaryExpression { $$ = $1; }
    | FunctionExpression { $$ = $1; }
    | ClassExpression { $$ = $1; } /* Added ClassExpression here */
    | MemberExpression LBRACKET Expression RBRACKET {
        $$ = create_node(NODE_MEMBER_EXPR, "[]");
        $$->left = $1;
        $$->right = $3;
    }
    /* Fix for IdentifierName (e.g., obj.default) */
    | MemberExpression DOT IdentifierName {
        $$ = create_node(NODE_MEMBER_EXPR, ".");
        $$->left = $1;
        $$->right = $3;
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
        if ($1) $$->next = $1;
    }
    | ElisionOpt ELLIPSIS AssignmentExpression { /* [ ...spread ] */
        $$ = create_unary_node(NODE_UNARY_EXPR, $3);
        $$->value = strdup("...");
        if ($1) $$->next = $1;
    }
    | ElementList COMMA ElisionOpt AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = $4;
        if ($3) $4->next = $3;
    }
    | ElementList COMMA ElisionOpt ELLIPSIS AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        ASTNode *spread = create_unary_node(NODE_UNARY_EXPR, $5);
        spread->value = strdup("...");
        temp->next = spread;
        if ($3) spread->next = $3;
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

PropertyName:
    IdentifierName { $$ = $1; }
    | STRING { $$ = create_node(NODE_LITERAL, $1); free($1); }
    | NUMBER { $$ = create_node(NODE_LITERAL, $1); free($1); }
    ;

PropertyNameAndValueList:
    PropertyName COLON AssignmentExpression {
        $$ = create_node(NODE_PROPERTY, NULL);
        $$->left = $1; /* Key */
        $$->right = $3; /* Value */
    }
    | PropertyNameAndValueList COMMA PropertyName COLON AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = create_node(NODE_PROPERTY, NULL);
        temp->next->left = $3;
        temp->next->right = $5;
    }
    ;

Arguments:
    LPAREN RPAREN { $$ = NULL; }
    | LPAREN ArgumentList RPAREN { $$ = $2; }
    ;

ArgumentList:
    AssignmentExpression { $$ = $1; }
    | ELLIPSIS AssignmentExpression { /* call(...arg) */
        $$ = create_unary_node(NODE_UNARY_EXPR, $2);
        $$->value = strdup("...");
    }
    | ArgumentList COMMA AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        temp->next = $3;
    }
    | ArgumentList COMMA ELLIPSIS AssignmentExpression {
        $$ = $1;
        ASTNode *temp = $$;
        while (temp->next) temp = temp->next;
        ASTNode *spread = create_unary_node(NODE_UNARY_EXPR, $4);
        spread->value = strdup("...");
        temp->next = spread;
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