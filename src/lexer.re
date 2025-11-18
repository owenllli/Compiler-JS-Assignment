#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "parser.h"

int yylineno = 1;
int yycolno = 1;
int line_terminator_seen = 0;
int lookahead_token = 0;

// 1 = 下一个 '/' 是正则 (如: a = /.../)
// 0 = 下一个 '/' 是除法 (如: a / b)
int allow_regex = 1; 

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
    allow_regex = 1;
}

// 辅助宏
#define SET_REGEX_ALLOWED(val) allow_regex = val
#define RETURN_TOKEN(t) do { lookahead_token = t; return t; } while(0)

int yylex(void) {
    int yyleng;

    // --- 修复点：必须在这里定义 re2c 用于操作指针的宏 ---
    #define YYCTYPE char
    #define YYCURSOR cursor
    #define YYLIMIT limit
    #define YYMARKER marker
    #define YYFILL(n)
    // ------------------------------------------------

start:
    token = cursor;

    /*!re2c
        re2c:yyfill:enable = 0;
        re2c:define:YYCTYPE = char;
        re2c:sentinel = 0;
        
        // End of input
        "\x00"                      { RETURN_TOKEN(END); }
        
        // Whitespace
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
        "break"                     { SET_REGEX_ALLOWED(1); RETURN_TOKEN(BREAK); }
        "case"                      { SET_REGEX_ALLOWED(1); RETURN_TOKEN(CASE); }
        "catch"                     { SET_REGEX_ALLOWED(1); RETURN_TOKEN(CATCH); }
        "class"                     { SET_REGEX_ALLOWED(1); RETURN_TOKEN(CLASS); }    // 新增
        "const"                     { SET_REGEX_ALLOWED(1); RETURN_TOKEN(CONST); }
        "continue"                  { SET_REGEX_ALLOWED(1); RETURN_TOKEN(CONTINUE); }
        "default"                   { SET_REGEX_ALLOWED(1); RETURN_TOKEN(DEFAULT); }
        "delete"                    { SET_REGEX_ALLOWED(1); RETURN_TOKEN(DELETE); }
        "do"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(DO); }
        "else"                      { SET_REGEX_ALLOWED(1); RETURN_TOKEN(ELSE); }
        "export"                    { SET_REGEX_ALLOWED(1); RETURN_TOKEN(EXPORT); }   // 新增
        "extends"                   { SET_REGEX_ALLOWED(1); RETURN_TOKEN(EXTENDS); }  // 新增
        "finally"                   { SET_REGEX_ALLOWED(1); RETURN_TOKEN(FINALLY); }
        "for"                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(FOR); }
        "function"                  { SET_REGEX_ALLOWED(1); RETURN_TOKEN(FUNCTION); }
        "if"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(IF); }
        "import"                    { SET_REGEX_ALLOWED(1); RETURN_TOKEN(IMPORT); }   // 新增
        "in"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(IN); }
        "instanceof"                { SET_REGEX_ALLOWED(1); RETURN_TOKEN(INSTANCEOF); }
        "let"                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(LET); }
        "new"                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(NEW); }
        "of"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(OF); }
        "return"                    { SET_REGEX_ALLOWED(1); RETURN_TOKEN(RETURN); }
        "static"                    { SET_REGEX_ALLOWED(1); RETURN_TOKEN(STATIC); }   // 新增
        "super"                     { SET_REGEX_ALLOWED(0); RETURN_TOKEN(SUPER); }    // 新增
        "switch"                    { SET_REGEX_ALLOWED(1); RETURN_TOKEN(SWITCH); }
        "this"                      { SET_REGEX_ALLOWED(0); RETURN_TOKEN(THIS); }
        "throw"                     { SET_REGEX_ALLOWED(1); RETURN_TOKEN(THROW); }
        "try"                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(TRY); }
        "typeof"                    { SET_REGEX_ALLOWED(1); RETURN_TOKEN(TYPEOF); }
        "var"                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(VAR); }
        "void"                      { SET_REGEX_ALLOWED(1); RETURN_TOKEN(VOID); }
        "while"                     { SET_REGEX_ALLOWED(1); RETURN_TOKEN(WHILE); }
        "with"                      { SET_REGEX_ALLOWED(1); RETURN_TOKEN(WITH); }

        // Literals
        "true"                      { yylval.str = strdup("true"); SET_REGEX_ALLOWED(0); RETURN_TOKEN(TRUE); }
        "false"                     { yylval.str = strdup("false"); SET_REGEX_ALLOWED(0); RETURN_TOKEN(FALSE); }
        "null"                      { yylval.str = strdup("null"); SET_REGEX_ALLOWED(0); RETURN_TOKEN(NULL_LITERAL); }
        
        // Numeric Literals
        [0-9]+("."[0-9]+)?([eE][+-]?[0-9]+)? { 
            yyleng = cursor - token; yylval.str = strndup(token, yyleng); 
            SET_REGEX_ALLOWED(0); 
            RETURN_TOKEN(NUMBER); 
        }
        "0x"[0-9a-fA-F]+ { 
            yyleng = cursor - token; yylval.str = strndup(token, yyleng); 
            SET_REGEX_ALLOWED(0); 
            RETURN_TOKEN(NUMBER); 
        }

        // String Literals
        ["] ([^"\\\n\x00] | "\\" [^\x00])* ["] { 
            yyleng = cursor - token; yylval.str = strndup(token, yyleng); 
            SET_REGEX_ALLOWED(0); 
            RETURN_TOKEN(STRING); 
        }
        ['] ([^'\\\n\x00] | "\\" [^\x00])* ['] { 
            yyleng = cursor - token; yylval.str = strndup(token, yyleng); 
            SET_REGEX_ALLOWED(0); 
            RETURN_TOKEN(STRING); 
        }

        // Identifier
        [a-zA-Z_$][a-zA-Z0-9_$]* { 
            yyleng = cursor - token; yylval.str = strndup(token, yyleng); 
            SET_REGEX_ALLOWED(0);
            RETURN_TOKEN(IDENTIFIER); 
        }

        // Regex vs Division Handling
        "/" {
            if (allow_regex) {
                cursor = token; // Rewind to include the first slash
                goto regex_state;
            } else {
                SET_REGEX_ALLOWED(1);
                RETURN_TOKEN(DIVIDE);
            }
        }

        // Operators
        "=>"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(ARROW); }
        "..."                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(ELLIPSIS); }

        ">>>="                      { SET_REGEX_ALLOWED(1); RETURN_TOKEN(URSHIFT_ASSIGN); }
        ">>>"                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(URSHIFT); }
        "==="                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(STRICT_EQ); }
        "!=="                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(STRICT_NE); }
        "<<="                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(LSHIFT_ASSIGN); }
        ">>="                       { SET_REGEX_ALLOWED(1); RETURN_TOKEN(RSHIFT_ASSIGN); }
        "<<"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(LSHIFT); }
        ">>"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(RSHIFT); }
        "<="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(LE); }
        ">="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(GE); }
        "=="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(EQ); }
        "!="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(NE); }
        "++"                        { SET_REGEX_ALLOWED(0); RETURN_TOKEN(INCR); }
        "--"                        { SET_REGEX_ALLOWED(0); RETURN_TOKEN(DECR); }
        "&&"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(LOGICAL_AND); }
        "||"                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(LOGICAL_OR); }
        "+="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(PLUS_ASSIGN); }
        "-="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(MINUS_ASSIGN); }
        "*="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(MULTIPLY_ASSIGN); }
        "/="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(DIVIDE_ASSIGN); }
        "%="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(MOD_ASSIGN); }
        "&="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(AND_ASSIGN); }
        "|="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(OR_ASSIGN); }
        "^="                        { SET_REGEX_ALLOWED(1); RETURN_TOKEN(XOR_ASSIGN); }
        
        "{"                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(1); RETURN_TOKEN(LBRACE); }
        "}"                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(0); RETURN_TOKEN(RBRACE); }
        "("                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(1); RETURN_TOKEN(LPAREN); }
        ")"                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(0); RETURN_TOKEN(RPAREN); }
        "["                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(1); RETURN_TOKEN(LBRACKET); }
        "]"                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(0); RETURN_TOKEN(RBRACKET); }
        "."                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(1); RETURN_TOKEN(DOT); }
        ";"                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(1); RETURN_TOKEN(SEMICOLON); }
        ","                         { line_terminator_seen = 0; SET_REGEX_ALLOWED(1); RETURN_TOKEN(COMMA); }
        
        "<"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(LT); }
        ">"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(GT); }
        "+"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(PLUS); }
        "-"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(MINUS); }
        "*"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(MULTIPLY); }
        "%"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(MOD); }
        "&"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(BITWISE_AND); }
        "|"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(BITWISE_OR); }
        "^"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(BITWISE_XOR); }
        "!"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(NOT); }
        "~"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(BITWISE_NOT); }
        "?"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(QUESTION); }
        ":"                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(COLON); }
        "="                         { SET_REGEX_ALLOWED(1); RETURN_TOKEN(ASSIGN); }
        
        .                           { 
            fprintf(stderr, "Unexpected character: %c at line %d\n", *token, yylineno);
            goto start;
        }
    */

regex_state:
    /*!re2c
        // Regex Literal
        "/" ([^/\\\n\x00] | "\\" [^\x00] | "[" ([^\]\\\n\x00] | "\\" [^\x00])* "]")* "/" [gimuy]* {
            yyleng = cursor - token;
            yylval.str = strndup(token, yyleng);
            SET_REGEX_ALLOWED(0);
            RETURN_TOKEN(REGEX);
        }
        
        // 修复点：使用 * 匹配任意字符（包括换行符）作为回退
        // 这处理了 "尝试解析为正则但失败" 的情况（例如遇到换行）
        * { 
            cursor = token; // 倒带
            SET_REGEX_ALLOWED(1); // 假定为除法，后续期待表达式
            RETURN_TOKEN(DIVIDE); 
        }
    */
}