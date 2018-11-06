/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     B_COMMENT = 258,
     COMMENT = 259,
     END = 260,
     SUB_SET = 261,
     NOT_SUB_SET = 262,
     SUP_SET = 263,
     NOT_SUP_SET = 264,
     QUOTE = 265,
     ASSIGN_OP = 266,
     AND = 267,
     TRUE = 268,
     FALSE = 269,
     RETURN = 270,
     BREAK = 271,
     CONTINUE = 272,
     COMMA = 273,
     CONSTANT = 274,
     COMPLEMENT = 275,
     CARTESIAN_PRODUCT = 276,
     IF = 277,
     ELSE = 278,
     EQUALS = 279,
     NOT_EQUALS = 280,
     FUNCTION_DECLERATION = 281,
     FUNCTION_CALL = 282,
     INTERSECTION = 283,
     LB = 284,
     RB = 285,
     LCB = 286,
     RCB = 287,
     NOT = 288,
     OR = 289,
     WHILE = 290,
     SCANNER = 291,
     SUBSTRACTION = 292,
     PRINT = 293,
     IDENTIFIER = 294,
     SEMICOLON = 295,
     UNION = 296,
     INTEGER = 297,
     VARIABLE_DECLERATION = 298,
     VARIABLE = 299,
     CHAR = 300,
     DIGIT = 301,
     SET = 302,
     LIST = 303,
     ARRAY_DEC = 304,
     ARRAY = 305,
     IFX = 306
   };
#endif
/* Tokens.  */
#define B_COMMENT 258
#define COMMENT 259
#define END 260
#define SUB_SET 261
#define NOT_SUB_SET 262
#define SUP_SET 263
#define NOT_SUP_SET 264
#define QUOTE 265
#define ASSIGN_OP 266
#define AND 267
#define TRUE 268
#define FALSE 269
#define RETURN 270
#define BREAK 271
#define CONTINUE 272
#define COMMA 273
#define CONSTANT 274
#define COMPLEMENT 275
#define CARTESIAN_PRODUCT 276
#define IF 277
#define ELSE 278
#define EQUALS 279
#define NOT_EQUALS 280
#define FUNCTION_DECLERATION 281
#define FUNCTION_CALL 282
#define INTERSECTION 283
#define LB 284
#define RB 285
#define LCB 286
#define RCB 287
#define NOT 288
#define OR 289
#define WHILE 290
#define SCANNER 291
#define SUBSTRACTION 292
#define PRINT 293
#define IDENTIFIER 294
#define SEMICOLON 295
#define UNION 296
#define INTEGER 297
#define VARIABLE_DECLERATION 298
#define VARIABLE 299
#define CHAR 300
#define DIGIT 301
#define SET 302
#define LIST 303
#define ARRAY_DEC 304
#define ARRAY 305
#define IFX 306



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
