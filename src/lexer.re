#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "parser.h"

int yylineno = 1;
int yycolno = 1;
int line_terminator_seen = 0;
int lookahead_token = 0;

extern YYSTYPE yylval;

const char *cursor;
const char *limit;
const char *marker;
const char *token;

void init_lexer(const char *input) {
    cursor = input;
    limit = input + strlen(input);
    token = cursor;
    yylineno = 1;
    yycolno = 1;
    line_terminator_seen = 0;
    lookahead_token = 0;
}

#define YYCTYPE char
#define YYCURSOR cursor
#define YYLIMIT limit
#define YYMARKER marker
#define YYFILL(n)

int yylex(void) {
    int yyleng;
start:
    token = cursor;
    // 不在每次开始时重置 line_terminator_seen
    // 它应该只在换行符处被设置，在解析器需要时被消耗

    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;
        re2c:sentinel = 0;
        
        // End of input
        "\x00"                      { lookahead_token = END; return END; }
        
        // Whitespace (not line terminators)
        [ \t\r]+                    { goto start; }
        
        // Line terminators
        "\n"                        { yylineno++; yycolno = 1; line_terminator_seen = 1; goto start; }
        
        // Comments
        "//" [^\n\x00]*             { goto start; }
        "/*" ([^*\x00] | ("*" [^/\x00]))* "*/" {
            for (const char *p = token; p < cursor; p++) {
                if (*p == '\n') {
                    yylineno++;
                    line_terminator_seen = 1;
                }
            }
            goto start;
        }

        // Keywords
        "break"                     { lookahead_token = BREAK; return BREAK; }
        "case"                      { lookahead_token = CASE; return CASE; }
        "catch"                     { lookahead_token = CATCH; return CATCH; }
        "continue"                  { lookahead_token = CONTINUE; return CONTINUE; }
        "default"                   { lookahead_token = DEFAULT; return DEFAULT; }
        "delete"                    { lookahead_token = DELETE; return DELETE; }
        "do"                        { lookahead_token = DO; return DO; }
        "else"                      { lookahead_token = ELSE; return ELSE; }
        "finally"                   { lookahead_token = FINALLY; return FINALLY; }
        "for"                       { lookahead_token = FOR; return FOR; }
        "function"                  { lookahead_token = FUNCTION; return FUNCTION; }
        "if"                        { lookahead_token = IF; return IF; }
        "in"                        { lookahead_token = IN; return IN; }
        "instanceof"                { lookahead_token = INSTANCEOF; return INSTANCEOF; }
        "new"                       { lookahead_token = NEW; return NEW; }
        "return"                    { lookahead_token = RETURN; return RETURN; }
        "switch"                    { lookahead_token = SWITCH; return SWITCH; }
        "this"                      { lookahead_token = THIS; return THIS; }
        "throw"                     { lookahead_token = THROW; return THROW; }
        "try"                       { lookahead_token = TRY; return TRY; }
        "typeof"                    { lookahead_token = TYPEOF; return TYPEOF; }
        "var"                       { lookahead_token = VAR; return VAR; }
        "void"                      { lookahead_token = VOID; return VOID; }
        "while"                     { lookahead_token = WHILE; return WHILE; }
        "with"                      { lookahead_token = WITH; return WITH; }
        
        // Literals
        "true"                      { yylval.str = strdup("true"); lookahead_token = TRUE; return TRUE; }
        "false"                     { yylval.str = strdup("false"); lookahead_token = FALSE; return FALSE; }
        "null"                      { yylval.str = strdup("null"); lookahead_token = NULL_LITERAL; return NULL_LITERAL; }
        [0-9]+("."[0-9]+)?([eE][+-]?[0-9]+)? { yyleng = cursor - token; yylval.str = strndup(token, yyleng); lookahead_token = NUMBER; return NUMBER; }
        "0x"[0-9a-fA-F]+            { yyleng = cursor - token; yylval.str = strndup(token, yyleng); lookahead_token = NUMBER; return NUMBER; }
        ["] ([^"\\\n\x00] | "\\" [^\x00])* ["] { yyleng = cursor - token; yylval.str = strndup(token, yyleng); lookahead_token = STRING; return STRING; }
        ['] ([^'\\\n\x00] | "\\" [^\x00])* ['] { yyleng = cursor - token; yylval.str = strndup(token, yyleng); lookahead_token = STRING; return STRING; }
        
        // Identifier
        [a-zA-Z_$][a-zA-Z0-9_$]*    { yyleng = cursor - token; yylval.str = strndup(token, yyleng); lookahead_token = IDENTIFIER; return IDENTIFIER; }
        
        // Regex literal (simplified)
        "/" ([^/\\\n\x00*] | "\\" [^\x00] | "[" ([^\]\\\n\x00] | "\\" [^\x00])* "]") ([^/\\\n\x00] | "\\" [^\x00] | "[" ([^\]\\\n\x00] | "\\" [^\x00])* "]")* "/" [gimuy]* {
            yyleng = cursor - token; yylval.str = strndup(token, yyleng); lookahead_token = REGEX; return REGEX;
        }
        
        // Operators and punctuation
        ">>>="                      { lookahead_token = URSHIFT_ASSIGN; return URSHIFT_ASSIGN; }
        ">>>"                       { lookahead_token = URSHIFT; return URSHIFT; }
        "==="                       { lookahead_token = STRICT_EQ; return STRICT_EQ; }
        "!=="                       { lookahead_token = STRICT_NE; return STRICT_NE; }
        "<<="                       { lookahead_token = LSHIFT_ASSIGN; return LSHIFT_ASSIGN; }
        ">>="                       { lookahead_token = RSHIFT_ASSIGN; return RSHIFT_ASSIGN; }
        "<<"                        { lookahead_token = LSHIFT; return LSHIFT; }
        ">>"                        { lookahead_token = RSHIFT; return RSHIFT; }
        "<="                        { lookahead_token = LE; return LE; }
        ">="                        { lookahead_token = GE; return GE; }
        "=="                        { lookahead_token = EQ; return EQ; }
        "!="                        { lookahead_token = NE; return NE; }
        "++"                        { lookahead_token = INCR; return INCR; }
        "--"                        { lookahead_token = DECR; return DECR; }
        "&&"                        { lookahead_token = LOGICAL_AND; return LOGICAL_AND; }
        "||"                        { lookahead_token = LOGICAL_OR; return LOGICAL_OR; }
        "+="                        { lookahead_token = PLUS_ASSIGN; return PLUS_ASSIGN; }
        "-="                        { lookahead_token = MINUS_ASSIGN; return MINUS_ASSIGN; }
        "*="                        { lookahead_token = MULTIPLY_ASSIGN; return MULTIPLY_ASSIGN; }
        "/="                        { lookahead_token = DIVIDE_ASSIGN; return DIVIDE_ASSIGN; }
        "%="                        { lookahead_token = MOD_ASSIGN; return MOD_ASSIGN; }
        "&="                        { lookahead_token = AND_ASSIGN; return AND_ASSIGN; }
        "|="                        { lookahead_token = OR_ASSIGN; return OR_ASSIGN; }
        "^="                        { lookahead_token = XOR_ASSIGN; return XOR_ASSIGN; }
        "{"                         { line_terminator_seen = 0; lookahead_token = LBRACE; return LBRACE; } // Reset before token
        "}"                         { line_terminator_seen = 0; lookahead_token = RBRACE; return RBRACE; }
        "("                         { line_terminator_seen = 0; lookahead_token = LPAREN; return LPAREN; }
        ")"                         { line_terminator_seen = 0; lookahead_token = RPAREN; return RPAREN; }
        "["                         { line_terminator_seen = 0; lookahead_token = LBRACKET; return LBRACKET; }
        "]"                         { line_terminator_seen = 0; lookahead_token = RBRACKET; return RBRACKET; }
        "."                         { line_terminator_seen = 0; lookahead_token = DOT; return DOT; }
        ";"                         { line_terminator_seen = 0; lookahead_token = SEMICOLON; return SEMICOLON; }
        ","                         { line_terminator_seen = 0; lookahead_token = COMMA; return COMMA; }
        "<"                         { lookahead_token = LT; return LT; }
        ">"                         { lookahead_token = GT; return GT; }
        "+"                         { lookahead_token = PLUS; return PLUS; }
        "-"                         { lookahead_token = MINUS; return MINUS; }
        "*"                         { lookahead_token = MULTIPLY; return MULTIPLY; }
        "%"                         { lookahead_token = MOD; return MOD; }
        "&"                         { lookahead_token = BITWISE_AND; return BITWISE_AND; }
        "|"                         { lookahead_token = BITWISE_OR; return BITWISE_OR; }
        "^"                         { lookahead_token = BITWISE_XOR; return BITWISE_XOR; }
        "!"                         { lookahead_token = NOT; return NOT; }
        "~"                         { lookahead_token = BITWISE_NOT; return BITWISE_NOT; }
        "?"                         { lookahead_token = QUESTION; return QUESTION; }
        ":"                         { lookahead_token = COLON; return COLON; }
        "="                         { lookahead_token = ASSIGN; return ASSIGN; }
        "/"                         { lookahead_token = DIVIDE; return DIVIDE; }
        
        // Any other character
        .                           { 
            fprintf(stderr, "Unexpected character: %c at line %d\n", *token, yylineno);
            goto start;
        }
    */
}