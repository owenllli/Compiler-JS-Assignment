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
     TRUE = 287,
     FALSE = 288,
     NULL_LITERAL = 289,
     LBRACE = 290,
     RBRACE = 291,
     LPAREN = 292,
     RPAREN = 293,
     LBRACKET = 294,
     RBRACKET = 295,
     DOT = 296,
     SEMICOLON = 297,
     COMMA = 298,
     LT = 299,
     GT = 300,
     LE = 301,
     GE = 302,
     EQ = 303,
     NE = 304,
     STRICT_EQ = 305,
     STRICT_NE = 306,
     PLUS = 307,
     MINUS = 308,
     MULTIPLY = 309,
     DIVIDE = 310,
     MOD = 311,
     INCR = 312,
     DECR = 313,
     LSHIFT = 314,
     RSHIFT = 315,
     URSHIFT = 316,
     BITWISE_AND = 317,
     BITWISE_OR = 318,
     BITWISE_XOR = 319,
     BITWISE_NOT = 320,
     NOT = 321,
     LOGICAL_AND = 322,
     LOGICAL_OR = 323,
     QUESTION = 324,
     COLON = 325,
     ASSIGN = 326,
     PLUS_ASSIGN = 327,
     MINUS_ASSIGN = 328,
     MULTIPLY_ASSIGN = 329,
     DIVIDE_ASSIGN = 330,
     MOD_ASSIGN = 331,
     LSHIFT_ASSIGN = 332,
     RSHIFT_ASSIGN = 333,
     URSHIFT_ASSIGN = 334,
     AND_ASSIGN = 335,
     OR_ASSIGN = 336,
     XOR_ASSIGN = 337,
     END = 338,
     LOWER_THAN_ELSE = 339,
     UNARY_MINUS = 340,
     UNARY_PLUS = 341
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
#define TRUE 287
#define FALSE 288
#define NULL_LITERAL 289
#define LBRACE 290
#define RBRACE 291
#define LPAREN 292
#define RPAREN 293
#define LBRACKET 294
#define RBRACKET 295
#define DOT 296
#define SEMICOLON 297
#define COMMA 298
#define LT 299
#define GT 300
#define LE 301
#define GE 302
#define EQ 303
#define NE 304
#define STRICT_EQ 305
#define STRICT_NE 306
#define PLUS 307
#define MINUS 308
#define MULTIPLY 309
#define DIVIDE 310
#define MOD 311
#define INCR 312
#define DECR 313
#define LSHIFT 314
#define RSHIFT 315
#define URSHIFT 316
#define BITWISE_AND 317
#define BITWISE_OR 318
#define BITWISE_XOR 319
#define BITWISE_NOT 320
#define NOT 321
#define LOGICAL_AND 322
#define LOGICAL_OR 323
#define QUESTION 324
#define COLON 325
#define ASSIGN 326
#define PLUS_ASSIGN 327
#define MINUS_ASSIGN 328
#define MULTIPLY_ASSIGN 329
#define DIVIDE_ASSIGN 330
#define MOD_ASSIGN 331
#define LSHIFT_ASSIGN 332
#define RSHIFT_ASSIGN 333
#define URSHIFT_ASSIGN 334
#define AND_ASSIGN 335
#define OR_ASSIGN 336
#define XOR_ASSIGN 337
#define END 338
#define LOWER_THAN_ELSE 339
#define UNARY_MINUS 340
#define UNARY_PLUS 341




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 32 "src/parser.y"
{
    ASTNode *node;
    char *str;
}
/* Line 1529 of yacc.c.  */
#line 226 "build/parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

