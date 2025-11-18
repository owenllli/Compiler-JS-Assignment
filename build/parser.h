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
     CLASS = 289,
     EXTENDS = 290,
     SUPER = 291,
     STATIC = 292,
     EXPORT = 293,
     IMPORT = 294,
     OF = 295,
     TRUE = 296,
     FALSE = 297,
     NULL_LITERAL = 298,
     LBRACE = 299,
     RBRACE = 300,
     LPAREN = 301,
     RPAREN = 302,
     LBRACKET = 303,
     RBRACKET = 304,
     DOT = 305,
     SEMICOLON = 306,
     COMMA = 307,
     ELLIPSIS = 308,
     ARROW = 309,
     LT = 310,
     GT = 311,
     LE = 312,
     GE = 313,
     EQ = 314,
     NE = 315,
     STRICT_EQ = 316,
     STRICT_NE = 317,
     PLUS = 318,
     MINUS = 319,
     MULTIPLY = 320,
     DIVIDE = 321,
     MOD = 322,
     INCR = 323,
     DECR = 324,
     LSHIFT = 325,
     RSHIFT = 326,
     URSHIFT = 327,
     BITWISE_AND = 328,
     BITWISE_OR = 329,
     BITWISE_XOR = 330,
     BITWISE_NOT = 331,
     NOT = 332,
     LOGICAL_AND = 333,
     LOGICAL_OR = 334,
     QUESTION = 335,
     COLON = 336,
     ASSIGN = 337,
     PLUS_ASSIGN = 338,
     MINUS_ASSIGN = 339,
     MULTIPLY_ASSIGN = 340,
     DIVIDE_ASSIGN = 341,
     MOD_ASSIGN = 342,
     LSHIFT_ASSIGN = 343,
     RSHIFT_ASSIGN = 344,
     URSHIFT_ASSIGN = 345,
     AND_ASSIGN = 346,
     OR_ASSIGN = 347,
     XOR_ASSIGN = 348,
     END = 349,
     LOWER_THAN_ELSE = 350,
     UNARY_MINUS = 351,
     UNARY_PLUS = 352
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
#define CLASS 289
#define EXTENDS 290
#define SUPER 291
#define STATIC 292
#define EXPORT 293
#define IMPORT 294
#define OF 295
#define TRUE 296
#define FALSE 297
#define NULL_LITERAL 298
#define LBRACE 299
#define RBRACE 300
#define LPAREN 301
#define RPAREN 302
#define LBRACKET 303
#define RBRACKET 304
#define DOT 305
#define SEMICOLON 306
#define COMMA 307
#define ELLIPSIS 308
#define ARROW 309
#define LT 310
#define GT 311
#define LE 312
#define GE 313
#define EQ 314
#define NE 315
#define STRICT_EQ 316
#define STRICT_NE 317
#define PLUS 318
#define MINUS 319
#define MULTIPLY 320
#define DIVIDE 321
#define MOD 322
#define INCR 323
#define DECR 324
#define LSHIFT 325
#define RSHIFT 326
#define URSHIFT 327
#define BITWISE_AND 328
#define BITWISE_OR 329
#define BITWISE_XOR 330
#define BITWISE_NOT 331
#define NOT 332
#define LOGICAL_AND 333
#define LOGICAL_OR 334
#define QUESTION 335
#define COLON 336
#define ASSIGN 337
#define PLUS_ASSIGN 338
#define MINUS_ASSIGN 339
#define MULTIPLY_ASSIGN 340
#define DIVIDE_ASSIGN 341
#define MOD_ASSIGN 342
#define LSHIFT_ASSIGN 343
#define RSHIFT_ASSIGN 344
#define URSHIFT_ASSIGN 345
#define AND_ASSIGN 346
#define OR_ASSIGN 347
#define XOR_ASSIGN 348
#define END 349
#define LOWER_THAN_ELSE 350
#define UNARY_MINUS 351
#define UNARY_PLUS 352




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "src/parser.y"
{
    ASTNode *node;
    char *str;
}
/* Line 1529 of yacc.c.  */
#line 248 "build/parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

