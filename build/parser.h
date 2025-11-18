/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     NUMBER = 259,
     STRING = 260,
     REGEX = 261,
     BREAK = 262,
     CASE = 263,
     CATCH = 264,
     CONTINUE = 265,
     DEFAULT = 266,
     DELETE = 267,
     DO = 268,
     ELSE = 269,
     FINALLY = 270,
     FOR = 271,
     FUNCTION = 272,
     IF = 273,
     IN = 274,
     INSTANCEOF = 275,
     NEW = 276,
     RETURN = 277,
     SWITCH = 278,
     THIS = 279,
     THROW = 280,
     TRY = 281,
     TYPEOF = 282,
     VAR = 283,
     VOID = 284,
     WHILE = 285,
     WITH = 286,
     CONST = 287,
     LET = 288,
     TRUE = 289,
     FALSE = 290,
     NULL_LITERAL = 291,
     LBRACE = 292,
     RBRACE = 293,
     LPAREN = 294,
     RPAREN = 295,
     LBRACKET = 296,
     RBRACKET = 297,
     DOT = 298,
     SEMICOLON = 299,
     COMMA = 300,
     ELLIPSIS = 301,
     ARROW = 302,
     LT = 303,
     GT = 304,
     LE = 305,
     GE = 306,
     EQ = 307,
     NE = 308,
     STRICT_EQ = 309,
     STRICT_NE = 310,
     PLUS = 311,
     MINUS = 312,
     MULTIPLY = 313,
     DIVIDE = 314,
     MOD = 315,
     INCR = 316,
     DECR = 317,
     LSHIFT = 318,
     RSHIFT = 319,
     URSHIFT = 320,
     BITWISE_AND = 321,
     BITWISE_OR = 322,
     BITWISE_XOR = 323,
     BITWISE_NOT = 324,
     NOT = 325,
     LOGICAL_AND = 326,
     LOGICAL_OR = 327,
     QUESTION = 328,
     COLON = 329,
     ASSIGN = 330,
     PLUS_ASSIGN = 331,
     MINUS_ASSIGN = 332,
     MULTIPLY_ASSIGN = 333,
     DIVIDE_ASSIGN = 334,
     MOD_ASSIGN = 335,
     LSHIFT_ASSIGN = 336,
     RSHIFT_ASSIGN = 337,
     URSHIFT_ASSIGN = 338,
     AND_ASSIGN = 339,
     OR_ASSIGN = 340,
     XOR_ASSIGN = 341,
     END = 342,
     LOWER_THAN_ELSE = 343,
     UNARY_MINUS = 344,
     UNARY_PLUS = 345
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define NUMBER 259
#define STRING 260
#define REGEX 261
#define BREAK 262
#define CASE 263
#define CATCH 264
#define CONTINUE 265
#define DEFAULT 266
#define DELETE 267
#define DO 268
#define ELSE 269
#define FINALLY 270
#define FOR 271
#define FUNCTION 272
#define IF 273
#define IN 274
#define INSTANCEOF 275
#define NEW 276
#define RETURN 277
#define SWITCH 278
#define THIS 279
#define THROW 280
#define TRY 281
#define TYPEOF 282
#define VAR 283
#define VOID 284
#define WHILE 285
#define WITH 286
#define CONST 287
#define LET 288
#define TRUE 289
#define FALSE 290
#define NULL_LITERAL 291
#define LBRACE 292
#define RBRACE 293
#define LPAREN 294
#define RPAREN 295
#define LBRACKET 296
#define RBRACKET 297
#define DOT 298
#define SEMICOLON 299
#define COMMA 300
#define ELLIPSIS 301
#define ARROW 302
#define LT 303
#define GT 304
#define LE 305
#define GE 306
#define EQ 307
#define NE 308
#define STRICT_EQ 309
#define STRICT_NE 310
#define PLUS 311
#define MINUS 312
#define MULTIPLY 313
#define DIVIDE 314
#define MOD 315
#define INCR 316
#define DECR 317
#define LSHIFT 318
#define RSHIFT 319
#define URSHIFT 320
#define BITWISE_AND 321
#define BITWISE_OR 322
#define BITWISE_XOR 323
#define BITWISE_NOT 324
#define NOT 325
#define LOGICAL_AND 326
#define LOGICAL_OR 327
#define QUESTION 328
#define COLON 329
#define ASSIGN 330
#define PLUS_ASSIGN 331
#define MINUS_ASSIGN 332
#define MULTIPLY_ASSIGN 333
#define DIVIDE_ASSIGN 334
#define MOD_ASSIGN 335
#define LSHIFT_ASSIGN 336
#define RSHIFT_ASSIGN 337
#define URSHIFT_ASSIGN 338
#define AND_ASSIGN 339
#define OR_ASSIGN 340
#define XOR_ASSIGN 341
#define END 342
#define LOWER_THAN_ELSE 343
#define UNARY_MINUS 344
#define UNARY_PLUS 345




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "src/parser.y"
{
    ASTNode *node;
    char *str;
}
/* Line 1529 of yacc.c.  */
#line 234 "build/parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

