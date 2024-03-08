/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_COMMENT = 258,               /* T_COMMENT  */
    T_PROGRAM = 259,               /* T_PROGRAM  */
    T_SUBROUTINE = 260,            /* T_SUBROUTINE  */
    T_END = 261,                   /* T_END  */
    T_ID = 262,                    /* T_ID  */
    T_EXIT = 263,                  /* T_EXIT  */
    T_CYCLE = 264,                 /* T_CYCLE  */
    T_REAL_DATA_TYPE = 265,        /* T_REAL_DATA_TYPE  */
    T_COMPLEX_DATA_TYPE = 266,     /* T_COMPLEX_DATA_TYPE  */
    T_INT_DATA_TYPE = 267,         /* T_INT_DATA_TYPE  */
    T_LOGICAL_DATA_TYPE = 268,     /* T_LOGICAL_DATA_TYPE  */
    T_DIMENSION = 269,             /* T_DIMENSION  */
    T_DYNAMIC = 270,               /* T_DYNAMIC  */
    T_LENGTH = 271,                /* T_LENGTH  */
    T_OPEN_PARANTHESIS = 272,      /* T_OPEN_PARANTHESIS  */
    T_CLOSE_PARANTHESIS = 273,     /* T_CLOSE_PARANTHESIS  */
    T_CHARACTER_DATA_TYPE = 274,   /* T_CHARACTER_DATA_TYPE  */
    T_COMMA = 275,                 /* T_COMMA  */
    T_DOUBLECOLON = 276,           /* T_DOUBLECOLON  */
    T_TYPE = 277,                  /* T_TYPE  */
    T_COLON = 278,                 /* T_COLON  */
    T_NEWLINE = 279,               /* T_NEWLINE  */
    T_INTENT = 280,                /* T_INTENT  */
    T_IN = 281,                    /* T_IN  */
    T_OUT = 282,                   /* T_OUT  */
    T_ASSIGNMENT = 283,            /* T_ASSIGNMENT  */
    T_REAL_VAL = 284,              /* T_REAL_VAL  */
    T_DOUBLE_VAL = 285,            /* T_DOUBLE_VAL  */
    T_COMPLEX_VAL = 286,           /* T_COMPLEX_VAL  */
    T_CHARACTER_VAL = 287,         /* T_CHARACTER_VAL  */
    T_LOGICAL_VAL = 288,           /* T_LOGICAL_VAL  */
    T_INTEGER_VAL = 289,           /* T_INTEGER_VAL  */
    T_DEC_SEP = 290,               /* T_DEC_SEP  */
    T_PRINT = 291,                 /* T_PRINT  */
    T_ASTERISK = 292,              /* T_ASTERISK  */
    T_PLUS = 293,                  /* T_PLUS  */
    T_MINUS = 294,                 /* T_MINUS  */
    T_PERCENTAGE = 295,            /* T_PERCENTAGE  */
    T_DIVISION = 296,              /* T_DIVISION  */
    T_NOTEQUAL = 297,              /* T_NOTEQUAL  */
    T_LESS_THAN = 298,             /* T_LESS_THAN  */
    T_GREATER_THAN = 299,          /* T_GREATER_THAN  */
    T_LESSEQUAL = 300,             /* T_LESSEQUAL  */
    T_GREATEQUAL = 301,            /* T_GREATEQUAL  */
    T_EQUAL = 302,                 /* T_EQUAL  */
    T_EXPONENT = 303,              /* T_EXPONENT  */
    T_CONTAINS = 304,              /* T_CONTAINS  */
    T_FUNCTION = 305,              /* T_FUNCTION  */
    T_RESULT = 306,                /* T_RESULT  */
    T_CALL = 307,                  /* T_CALL  */
    T_DO = 308,                    /* T_DO  */
    T_WHILE = 309,                 /* T_WHILE  */
    T_CASE = 310,                  /* T_CASE  */
    T_SWITCH = 311,                /* T_SWITCH  */
    T_DEFAULT = 312,               /* T_DEFAULT  */
    T_SELECT = 313,                /* T_SELECT  */
    T_IF = 314,                    /* T_IF  */
    T_THEN = 315,                  /* T_THEN  */
    T_ELSEIF = 316,                /* T_ELSEIF  */
    T_ELSE = 317,                  /* T_ELSE  */
    T_AND = 318,                   /* T_AND  */
    T_OR = 319,                    /* T_OR  */
    T_XOR = 320,                   /* T_XOR  */
    T_NOT = 321,                   /* T_NOT  */
    T_BAND = 322,                  /* T_BAND  */
    T_BOR = 323,                   /* T_BOR  */
    T_BXOR = 324                   /* T_BXOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_COMMENT 258
#define T_PROGRAM 259
#define T_SUBROUTINE 260
#define T_END 261
#define T_ID 262
#define T_EXIT 263
#define T_CYCLE 264
#define T_REAL_DATA_TYPE 265
#define T_COMPLEX_DATA_TYPE 266
#define T_INT_DATA_TYPE 267
#define T_LOGICAL_DATA_TYPE 268
#define T_DIMENSION 269
#define T_DYNAMIC 270
#define T_LENGTH 271
#define T_OPEN_PARANTHESIS 272
#define T_CLOSE_PARANTHESIS 273
#define T_CHARACTER_DATA_TYPE 274
#define T_COMMA 275
#define T_DOUBLECOLON 276
#define T_TYPE 277
#define T_COLON 278
#define T_NEWLINE 279
#define T_INTENT 280
#define T_IN 281
#define T_OUT 282
#define T_ASSIGNMENT 283
#define T_REAL_VAL 284
#define T_DOUBLE_VAL 285
#define T_COMPLEX_VAL 286
#define T_CHARACTER_VAL 287
#define T_LOGICAL_VAL 288
#define T_INTEGER_VAL 289
#define T_DEC_SEP 290
#define T_PRINT 291
#define T_ASTERISK 292
#define T_PLUS 293
#define T_MINUS 294
#define T_PERCENTAGE 295
#define T_DIVISION 296
#define T_NOTEQUAL 297
#define T_LESS_THAN 298
#define T_GREATER_THAN 299
#define T_LESSEQUAL 300
#define T_GREATEQUAL 301
#define T_EQUAL 302
#define T_EXPONENT 303
#define T_CONTAINS 304
#define T_FUNCTION 305
#define T_RESULT 306
#define T_CALL 307
#define T_DO 308
#define T_WHILE 309
#define T_CASE 310
#define T_SWITCH 311
#define T_DEFAULT 312
#define T_SELECT 313
#define T_IF 314
#define T_THEN 315
#define T_ELSEIF 316
#define T_ELSE 317
#define T_AND 318
#define T_OR 319
#define T_XOR 320
#define T_NOT 321
#define T_BAND 322
#define T_BOR 323
#define T_BXOR 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
