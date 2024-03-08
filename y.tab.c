/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "fortran.y"
#include <stdio.h>
#include <math.h>
#include <signal.h>
#include <stdlib.h>
int yylex(void);
long long int power(int a,int b);
void yyerror(char *);

#line 80 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_COMMENT = 3,                  /* T_COMMENT  */
  YYSYMBOL_T_PROGRAM = 4,                  /* T_PROGRAM  */
  YYSYMBOL_T_SUBROUTINE = 5,               /* T_SUBROUTINE  */
  YYSYMBOL_T_END = 6,                      /* T_END  */
  YYSYMBOL_T_ID = 7,                       /* T_ID  */
  YYSYMBOL_T_EXIT = 8,                     /* T_EXIT  */
  YYSYMBOL_T_CYCLE = 9,                    /* T_CYCLE  */
  YYSYMBOL_T_REAL_DATA_TYPE = 10,          /* T_REAL_DATA_TYPE  */
  YYSYMBOL_T_COMPLEX_DATA_TYPE = 11,       /* T_COMPLEX_DATA_TYPE  */
  YYSYMBOL_T_INT_DATA_TYPE = 12,           /* T_INT_DATA_TYPE  */
  YYSYMBOL_T_LOGICAL_DATA_TYPE = 13,       /* T_LOGICAL_DATA_TYPE  */
  YYSYMBOL_T_DIMENSION = 14,               /* T_DIMENSION  */
  YYSYMBOL_T_DYNAMIC = 15,                 /* T_DYNAMIC  */
  YYSYMBOL_T_LENGTH = 16,                  /* T_LENGTH  */
  YYSYMBOL_T_OPEN_PARANTHESIS = 17,        /* T_OPEN_PARANTHESIS  */
  YYSYMBOL_T_CLOSE_PARANTHESIS = 18,       /* T_CLOSE_PARANTHESIS  */
  YYSYMBOL_T_CHARACTER_DATA_TYPE = 19,     /* T_CHARACTER_DATA_TYPE  */
  YYSYMBOL_T_COMMA = 20,                   /* T_COMMA  */
  YYSYMBOL_T_DOUBLECOLON = 21,             /* T_DOUBLECOLON  */
  YYSYMBOL_T_TYPE = 22,                    /* T_TYPE  */
  YYSYMBOL_T_COLON = 23,                   /* T_COLON  */
  YYSYMBOL_T_NEWLINE = 24,                 /* T_NEWLINE  */
  YYSYMBOL_T_INTENT = 25,                  /* T_INTENT  */
  YYSYMBOL_T_IN = 26,                      /* T_IN  */
  YYSYMBOL_T_OUT = 27,                     /* T_OUT  */
  YYSYMBOL_T_ASSIGNMENT = 28,              /* T_ASSIGNMENT  */
  YYSYMBOL_T_REAL_VAL = 29,                /* T_REAL_VAL  */
  YYSYMBOL_T_DOUBLE_VAL = 30,              /* T_DOUBLE_VAL  */
  YYSYMBOL_T_COMPLEX_VAL = 31,             /* T_COMPLEX_VAL  */
  YYSYMBOL_T_CHARACTER_VAL = 32,           /* T_CHARACTER_VAL  */
  YYSYMBOL_T_LOGICAL_VAL = 33,             /* T_LOGICAL_VAL  */
  YYSYMBOL_T_INTEGER_VAL = 34,             /* T_INTEGER_VAL  */
  YYSYMBOL_T_DEC_SEP = 35,                 /* T_DEC_SEP  */
  YYSYMBOL_T_PRINT = 36,                   /* T_PRINT  */
  YYSYMBOL_T_ASTERISK = 37,                /* T_ASTERISK  */
  YYSYMBOL_T_PLUS = 38,                    /* T_PLUS  */
  YYSYMBOL_T_MINUS = 39,                   /* T_MINUS  */
  YYSYMBOL_T_PERCENTAGE = 40,              /* T_PERCENTAGE  */
  YYSYMBOL_T_DIVISION = 41,                /* T_DIVISION  */
  YYSYMBOL_T_NOTEQUAL = 42,                /* T_NOTEQUAL  */
  YYSYMBOL_T_LESS_THAN = 43,               /* T_LESS_THAN  */
  YYSYMBOL_T_GREATER_THAN = 44,            /* T_GREATER_THAN  */
  YYSYMBOL_T_LESSEQUAL = 45,               /* T_LESSEQUAL  */
  YYSYMBOL_T_GREATEQUAL = 46,              /* T_GREATEQUAL  */
  YYSYMBOL_T_EQUAL = 47,                   /* T_EQUAL  */
  YYSYMBOL_T_EXPONENT = 48,                /* T_EXPONENT  */
  YYSYMBOL_T_CONTAINS = 49,                /* T_CONTAINS  */
  YYSYMBOL_T_FUNCTION = 50,                /* T_FUNCTION  */
  YYSYMBOL_T_RESULT = 51,                  /* T_RESULT  */
  YYSYMBOL_T_CALL = 52,                    /* T_CALL  */
  YYSYMBOL_T_DO = 53,                      /* T_DO  */
  YYSYMBOL_T_WHILE = 54,                   /* T_WHILE  */
  YYSYMBOL_T_CASE = 55,                    /* T_CASE  */
  YYSYMBOL_T_SWITCH = 56,                  /* T_SWITCH  */
  YYSYMBOL_T_DEFAULT = 57,                 /* T_DEFAULT  */
  YYSYMBOL_T_SELECT = 58,                  /* T_SELECT  */
  YYSYMBOL_T_IF = 59,                      /* T_IF  */
  YYSYMBOL_T_THEN = 60,                    /* T_THEN  */
  YYSYMBOL_T_ELSEIF = 61,                  /* T_ELSEIF  */
  YYSYMBOL_T_ELSE = 62,                    /* T_ELSE  */
  YYSYMBOL_T_AND = 63,                     /* T_AND  */
  YYSYMBOL_T_OR = 64,                      /* T_OR  */
  YYSYMBOL_T_XOR = 65,                     /* T_XOR  */
  YYSYMBOL_T_NOT = 66,                     /* T_NOT  */
  YYSYMBOL_T_BAND = 67,                    /* T_BAND  */
  YYSYMBOL_T_BOR = 68,                     /* T_BOR  */
  YYSYMBOL_T_BXOR = 69,                    /* T_BXOR  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_program = 71,                   /* program  */
  YYSYMBOL_subFuncdefinition = 72,         /* subFuncdefinition  */
  YYSYMBOL_subroutine_definition = 73,     /* subroutine_definition  */
  YYSYMBOL_subroutine_begin = 74,          /* subroutine_begin  */
  YYSYMBOL_arglist = 75,                   /* arglist  */
  YYSYMBOL_parameter_attribute = 76,       /* parameter_attribute  */
  YYSYMBOL_IO_type = 77,                   /* IO_type  */
  YYSYMBOL_subroutine_end = 78,            /* subroutine_end  */
  YYSYMBOL_function_definition = 79,       /* function_definition  */
  YYSYMBOL_function_begin = 80,            /* function_begin  */
  YYSYMBOL_function_end = 81,              /* function_end  */
  YYSYMBOL_statements = 82,                /* statements  */
  YYSYMBOL_statement = 83,                 /* statement  */
  YYSYMBOL_print_stmt = 84,                /* print_stmt  */
  YYSYMBOL_argument_list = 85,             /* argument_list  */
  YYSYMBOL_subFuncCall = 86,               /* subFuncCall  */
  YYSYMBOL_function_invoke = 87,           /* function_invoke  */
  YYSYMBOL_function_parameters = 88,       /* function_parameters  */
  YYSYMBOL_expression = 89,                /* expression  */
  YYSYMBOL_assignment = 90,                /* assignment  */
  YYSYMBOL_arithmatic_expression = 91,     /* arithmatic_expression  */
  YYSYMBOL_relational_expression = 92,     /* relational_expression  */
  YYSYMBOL_rel_op = 93,                    /* rel_op  */
  YYSYMBOL_literals = 94,                  /* literals  */
  YYSYMBOL_logical_expression = 95,        /* logical_expression  */
  YYSYMBOL_more = 96,                      /* more  */
  YYSYMBOL_logical_op = 97,                /* logical_op  */
  YYSYMBOL_if_else = 98,                   /* if_else  */
  YYSYMBOL_else_statement = 99,            /* else_statement  */
  YYSYMBOL_if_clause = 100,                /* if_clause  */
  YYSYMBOL_begin_label = 101,              /* begin_label  */
  YYSYMBOL_end_label = 102,                /* end_label  */
  YYSYMBOL_switch_statement = 103,         /* switch_statement  */
  YYSYMBOL_case_statement = 104,           /* case_statement  */
  YYSYMBOL_case_expr = 105,                /* case_expr  */
  YYSYMBOL_step = 106,                     /* step  */
  YYSYMBOL_loop_stmt = 107,                /* loop_stmt  */
  YYSYMBOL_do_while_stmt = 108,            /* do_while_stmt  */
  YYSYMBOL_named_loops = 109,              /* named_loops  */
  YYSYMBOL_loop = 110,                     /* loop  */
  YYSYMBOL_declaration = 111,              /* declaration  */
  YYSYMBOL_data_type_attribute = 112,      /* data_type_attribute  */
  YYSYMBOL_dec = 113,                      /* dec  */
  YYSYMBOL_data_type = 114,                /* data_type  */
  YYSYMBOL_derived_data_type_definition = 115, /* derived_data_type_definition  */
  YYSYMBOL_member_definitions = 116,       /* member_definitions  */
  YYSYMBOL_derived_data_type_declaration = 117, /* derived_data_type_declaration  */
  YYSYMBOL_assigning_derived_data_type = 118, /* assigning_derived_data_type  */
  YYSYMBOL_argumentlist = 119,             /* argumentlist  */
  YYSYMBOL_EOS = 120                       /* EOS  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   327

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  289

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    61,    61,    61,    61,    63,    64,    65,
      65,    65,    66,    66,    67,    67,    68,    71,    72,    73,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    79,    80,    80,
      80,    83,    84,    84,    85,    85,    85,    87,    87,    89,
      90,    90,    91,    91,    92,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    99,    99,   102,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   104,   104,
     108,   109,   109,   110,   110,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   121,   122,   122,   123,   123,
     126,   126,   127,   128,   129,   130,   130,   132,   133,   133,
     133,   134,   134,   134,   135,   135,   135,   135,   135,   138,
     139,   139,   140,   141,   142,   142,   143,   143
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_COMMENT",
  "T_PROGRAM", "T_SUBROUTINE", "T_END", "T_ID", "T_EXIT", "T_CYCLE",
  "T_REAL_DATA_TYPE", "T_COMPLEX_DATA_TYPE", "T_INT_DATA_TYPE",
  "T_LOGICAL_DATA_TYPE", "T_DIMENSION", "T_DYNAMIC", "T_LENGTH",
  "T_OPEN_PARANTHESIS", "T_CLOSE_PARANTHESIS", "T_CHARACTER_DATA_TYPE",
  "T_COMMA", "T_DOUBLECOLON", "T_TYPE", "T_COLON", "T_NEWLINE", "T_INTENT",
  "T_IN", "T_OUT", "T_ASSIGNMENT", "T_REAL_VAL", "T_DOUBLE_VAL",
  "T_COMPLEX_VAL", "T_CHARACTER_VAL", "T_LOGICAL_VAL", "T_INTEGER_VAL",
  "T_DEC_SEP", "T_PRINT", "T_ASTERISK", "T_PLUS", "T_MINUS",
  "T_PERCENTAGE", "T_DIVISION", "T_NOTEQUAL", "T_LESS_THAN",
  "T_GREATER_THAN", "T_LESSEQUAL", "T_GREATEQUAL", "T_EQUAL", "T_EXPONENT",
  "T_CONTAINS", "T_FUNCTION", "T_RESULT", "T_CALL", "T_DO", "T_WHILE",
  "T_CASE", "T_SWITCH", "T_DEFAULT", "T_SELECT", "T_IF", "T_THEN",
  "T_ELSEIF", "T_ELSE", "T_AND", "T_OR", "T_XOR", "T_NOT", "T_BAND",
  "T_BOR", "T_BXOR", "$accept", "program", "subFuncdefinition",
  "subroutine_definition", "subroutine_begin", "arglist",
  "parameter_attribute", "IO_type", "subroutine_end",
  "function_definition", "function_begin", "function_end", "statements",
  "statement", "print_stmt", "argument_list", "subFuncCall",
  "function_invoke", "function_parameters", "expression", "assignment",
  "arithmatic_expression", "relational_expression", "rel_op", "literals",
  "logical_expression", "more", "logical_op", "if_else", "else_statement",
  "if_clause", "begin_label", "end_label", "switch_statement",
  "case_statement", "case_expr", "step", "loop_stmt", "do_while_stmt",
  "named_loops", "loop", "declaration", "data_type_attribute", "dec",
  "data_type", "derived_data_type_definition", "member_definitions",
  "derived_data_type_declaration", "assigning_derived_data_type",
  "argumentlist", "EOS", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-146)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,  -146,    12,  -146,    14,    24,    26,     7,   165,     7,
     165,    11,    21,    31,  -146,    80,    11,     5,    82,    82,
    -146,  -146,  -146,  -146,    88,    59,    66,   101,     8,    62,
     104,     7,  -146,  -146,  -146,  -146,    60,  -146,  -146,  -146,
    -146,  -146,    94,  -146,  -146,  -146,    11,   119,  -146,    44,
      44,     7,  -146,    85,    10,   128,  -146,  -146,  -146,   138,
     140,   153,   141,     6,  -146,   135,   147,   148,   162,  -146,
      87,   152,   154,   159,  -146,   143,  -146,   163,   174,   177,
     199,   193,   165,  -146,  -146,   206,     6,    10,  -146,  -146,
    -146,  -146,  -146,  -146,   229,    51,    53,    57,  -146,  -146,
     236,    22,  -146,  -146,   187,   188,   201,     7,     2,  -146,
      10,  -146,    10,    10,    10,   213,  -146,    10,   204,   218,
     223,   225,    65,     7,    44,   182,   231,  -146,    83,  -146,
    -146,    10,  -146,    10,  -146,    10,  -146,    10,    10,    10,
      10,  -146,  -146,  -146,  -146,  -146,  -146,    10,    10,  -146,
    -146,  -146,    10,    10,   210,   226,   131,   141,   141,   228,
     232,   233,   236,   230,   237,  -146,   238,  -146,   247,    86,
      55,  -146,    44,  -146,  -146,   249,  -146,  -146,   251,   245,
    -146,   166,   190,   202,   221,   -19,   -19,   221,   221,   161,
    -146,  -146,   252,   264,     7,   266,  -146,  -146,  -146,    10,
      10,     7,     7,   227,   267,   268,   281,    10,  -146,  -146,
     269,    44,   282,    10,    10,    10,  -146,   271,   131,   270,
    -146,   273,   165,   239,   272,  -146,  -146,    55,    55,  -146,
     277,     7,    89,   118,   144,   290,  -146,  -146,   291,    10,
       7,   293,    -4,   294,    87,  -146,  -146,     7,  -146,  -146,
    -146,  -146,   271,  -146,  -146,   165,   248,    10,  -146,     7,
     244,    54,  -146,  -146,   297,  -146,   286,    87,  -146,   288,
     283,   300,   255,  -146,   239,    10,   165,   250,  -146,  -146,
     292,  -146,    82,   253,  -146,   287,    87,    54,  -146
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,   127,     0,   126,     0,     0,     0,     0,    22,     0,
      22,     3,     0,     0,     1,     0,     3,     0,    93,    93,
     115,   118,   114,   117,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    29,    25,    30,     0,    31,    32,    33,
      34,    23,   108,    26,    27,    28,     3,     0,     6,     9,
       9,     0,     4,    92,     0,     0,    94,    35,    36,     0,
       0,     0,    38,     0,    41,     0,     0,     0,     0,     7,
      20,     0,     0,     0,     5,     0,    17,    12,     0,     0,
       0,     0,    22,   105,   106,     0,    66,     0,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,    64,    49,
      47,    81,    65,    48,     0,     0,     0,     0,     0,    37,
      44,    43,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,   104,     0,    63,
      62,     0,    57,     0,    59,     0,    61,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,     0,     0,    83,
      84,    80,     0,     0,     0,     0,   120,    38,    38,     0,
      46,     0,     0,     0,     0,    16,    64,    90,     0,     0,
     111,    19,     9,    14,    15,     0,     8,    11,     0,     0,
      54,     0,     0,     0,    52,    50,    51,    53,    55,    67,
      82,   123,     0,     0,     0,     0,    40,    39,    42,    44,
       0,     0,     0,     0,     0,     0,     0,     0,   107,    10,
       0,     9,     0,     0,     0,     0,   116,   124,   120,     0,
      45,   100,    22,    96,     0,   109,   110,   111,   111,    13,
       0,     0,     0,     0,     0,     0,   122,   121,     0,     0,
       0,     0,     0,     0,    20,   113,   112,     0,     2,    56,
      58,    60,   124,   119,   101,    22,     0,     0,    99,     0,
       0,    86,    18,   125,     0,   103,     0,    20,    95,     0,
       0,     0,     0,    98,    96,     0,    22,     0,   102,    97,
       0,    88,    93,     0,    85,     0,    20,    86,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,     9,  -146,  -146,   -43,   235,  -146,  -146,  -146,
    -146,  -146,   -10,  -146,  -146,    -9,  -146,   -24,   115,   -49,
    -146,   -81,  -146,  -146,   222,  -105,  -146,  -146,  -146,    28,
      42,  -146,   -18,  -146,    45,  -146,  -146,   265,   274,  -146,
    -146,  -145,  -146,   -75,  -146,  -146,   102,  -146,  -146,    69,
      -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,     7,     8,    79,    80,   175,    69,     9,
      10,    76,    30,    31,    32,   109,    33,    98,   159,   160,
      34,   100,   101,   148,   102,   103,   151,   152,    35,   271,
     168,    36,    57,    37,   243,   259,   240,    38,    39,    40,
      85,    41,    73,   208,    42,    43,   195,    44,    45,   236,
      11
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    58,    16,    64,    46,    99,   128,    81,   163,   157,
       1,   194,   167,   257,     1,    65,     2,    86,   137,    12,
      48,    13,   140,   110,    14,    52,    70,    87,    53,   147,
      15,     3,   162,    54,   158,     3,   162,   111,    49,    88,
      89,    90,    91,    92,    93,    55,    82,   190,    50,    94,
     181,   -12,   182,   258,   183,    74,   184,   185,   186,   187,
     116,     4,    66,   161,    77,   164,   188,   189,   131,    78,
     133,   162,   126,   194,   135,   206,    60,    95,    96,    97,
      61,   177,   132,   207,   134,   149,   150,    51,   136,    56,
     -22,   173,   174,   166,    17,    18,    19,    20,    21,    22,
      23,   180,   156,    62,   191,    59,    24,   249,    63,    25,
      68,   -22,   204,   205,    72,   269,   270,    67,   176,    71,
     137,   138,   139,    26,   140,    75,   137,   138,   139,   209,
     140,   147,   232,   233,   234,   104,   250,   147,    28,    27,
      28,    20,    21,    22,    23,    29,   -91,   106,   196,   197,
      24,   221,   245,   246,   105,   137,   138,   139,   228,   140,
     107,   108,   251,   112,   113,   114,   147,   115,   230,   117,
     167,   -20,    17,    18,    19,    20,    21,    22,    23,   118,
     119,   137,   138,   139,    24,   140,   213,    25,    78,   218,
     254,   122,   147,   120,   162,   123,   222,   223,   137,   138,
     139,    26,   140,   137,   138,   139,   124,   140,   266,   147,
     214,   125,   241,   127,   147,   153,   154,    27,    28,   155,
     165,   169,   215,    29,   -91,   170,   248,   137,   138,   139,
     171,   140,   172,   178,   261,   255,   129,   179,   147,   137,
     138,   139,   262,   140,   192,   264,   198,   193,   201,   212,
     147,   166,   199,   200,   267,   202,   -89,   274,    88,    89,
      90,    91,    92,    93,   284,   203,   281,   210,   211,   147,
     216,   217,   219,   137,   138,   139,   287,   140,   141,   142,
     143,   144,   145,   146,   147,   225,   226,   224,   227,   231,
     229,   235,   238,   239,   242,   247,   244,   252,   253,   256,
     260,   265,   268,   272,   273,   275,   277,   276,   278,   282,
     283,   286,   121,   285,   220,   288,   130,   280,    83,   279,
     237,   263,     0,     0,     0,     0,     0,    84
};

static const yytype_int16 yycheck[] =
{
      10,    19,     7,    27,     9,    54,    87,    50,   113,     7,
       3,   156,   117,    17,     3,     7,     5,     7,    37,     7,
      11,     7,    41,    17,     0,    16,    31,    17,    23,    48,
       4,    24,   113,    28,    32,    24,   117,    31,    17,    29,
      30,    31,    32,    33,    34,    40,    51,   152,    17,    39,
     131,     7,   133,    57,   135,    46,   137,   138,   139,   140,
      70,    50,    54,   112,    20,   114,   147,   148,    17,    25,
      17,   152,    82,   218,    17,    20,    17,    67,    68,    69,
      21,   124,    31,    28,    31,    63,    64,     7,    31,     7,
       3,    26,    27,   117,     7,     8,     9,    10,    11,    12,
      13,    18,   107,    37,   153,    17,    19,    18,     7,    22,
       6,    24,    26,    27,    20,    61,    62,    55,   123,    59,
      37,    38,    39,    36,    41,     6,    37,    38,    39,   172,
      41,    48,   213,   214,   215,     7,    18,    48,    53,    52,
      53,    10,    11,    12,    13,    58,    59,     7,   157,   158,
      19,   200,   227,   228,    16,    37,    38,    39,   207,    41,
       7,    20,    18,    28,    17,    17,    48,     5,   211,    17,
     275,     6,     7,     8,     9,    10,    11,    12,    13,    25,
      21,    37,    38,    39,    19,    41,    20,    22,    25,   194,
     239,    17,    48,    50,   275,    18,   201,   202,    37,    38,
      39,    36,    41,    37,    38,    39,     7,    41,   257,    48,
      20,    18,   222,     7,    48,    28,    28,    52,    53,    18,
       7,    17,    20,    58,    59,     7,   231,    37,    38,    39,
       7,    41,     7,    51,   244,   240,     7,     6,    48,    37,
      38,    39,   247,    41,    34,   255,    18,    21,    18,     4,
      48,   275,    20,    20,   259,    18,    18,   267,    29,    30,
      31,    32,    33,    34,   282,    18,   276,    18,    17,    48,
      18,     7,     6,    37,    38,    39,   286,    41,    42,    43,
      44,    45,    46,    47,    48,    18,    18,    60,     7,     7,
      21,    20,    22,    20,    55,    18,    24,     7,     7,     6,
       6,    53,    58,     6,    18,    17,     6,    24,    53,    59,
      18,    24,    77,    60,   199,   287,    94,   275,    53,   274,
     218,   252,    -1,    -1,    -1,    -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,    24,    50,    71,    72,    73,    74,    79,
      80,   120,     7,     7,     0,     4,   120,     7,     8,     9,
      10,    11,    12,    13,    19,    22,    36,    52,    53,    58,
      82,    83,    84,    86,    90,    98,   101,   103,   107,   108,
     109,   111,   114,   115,   117,   118,   120,    82,    72,    17,
      17,     7,    72,    23,    28,    40,     7,   102,   102,    17,
      17,    21,    37,     7,    87,     7,    54,    55,     6,    78,
     120,    59,    20,   112,    72,     6,    81,    20,    25,    75,
      76,    75,   120,   107,   108,   110,     7,    17,    29,    30,
      31,    32,    33,    34,    39,    67,    68,    69,    87,    89,
      91,    92,    94,    95,     7,    16,     7,     7,    20,    85,
      17,    31,    28,    17,    17,     5,    82,    17,    25,    21,
      50,    76,    17,    18,     7,    18,    82,     7,    91,     7,
      94,    17,    31,    17,    31,    17,    31,    37,    38,    39,
      41,    42,    43,    44,    45,    46,    47,    48,    93,    63,
      64,    96,    97,    28,    28,    18,   120,     7,    32,    88,
      89,    89,    91,    95,    89,     7,    87,    95,   100,    17,
       7,     7,     7,    26,    27,    77,   120,    75,    51,     6,
      18,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      95,    89,    34,    21,   111,   116,    85,    85,    18,    20,
      20,    18,    18,    18,    26,    27,    20,    28,   113,    75,
      18,    17,     4,    20,    20,    20,    18,     7,   120,     6,
      88,    89,   120,   120,    60,    18,    18,     7,    89,    21,
      75,     7,    91,    91,    91,    20,   119,   116,    22,    20,
     106,    82,    55,   104,    24,   113,   113,    18,   120,    18,
      18,    18,     7,     7,    89,   120,     6,    17,    57,   105,
       6,    82,   120,   119,    82,    53,    89,   120,    58,    61,
      62,    99,     6,    18,    82,    17,    24,     6,    53,   104,
     100,    82,    59,    18,   102,    60,    24,    82,    99
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    72,    72,    72,    72,    73,    74,    75,
      75,    75,    76,    76,    77,    77,    78,    79,    80,    81,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    85,    85,
      85,    86,    87,    87,    88,    88,    88,    89,    89,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      95,    96,    96,    97,    97,    98,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   104,   104,   105,   105,
     106,   106,   107,   108,   109,   110,   110,   111,   112,   112,
     112,   113,   113,   113,   114,   114,   114,   114,   114,   115,
     116,   116,   117,   118,   119,   119,   120,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     9,     0,     3,     3,     2,     3,     6,     0,
       4,     3,     0,     5,     1,     1,     3,     3,    10,     3,
       0,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     0,     3,
       3,     2,     4,     2,     0,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     6,     2,     6,     2,
       6,     2,     2,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     1,     1,    12,     0,     8,     3,     1,
       1,     0,     2,     0,     1,     9,     0,     5,     3,     1,
       0,     2,    11,     9,     4,     1,     1,     5,     0,     5,
       5,     0,     3,     3,     1,     1,     6,     1,     1,     8,
       0,     3,     7,     5,     0,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: subFuncdefinition T_PROGRAM T_ID EOS statements T_END T_PROGRAM T_ID EOS  */
#line 58 "fortran.y"
                                                                                {printf("Ok\n");exit(1);}
#line 1578 "y.tab.c"
    break;

  case 50: /* arithmatic_expression: arithmatic_expression T_PLUS arithmatic_expression  */
#line 90 "fortran.y"
                                                                            {yyval=yyvsp[-2]+yyvsp[0];}
#line 1584 "y.tab.c"
    break;

  case 51: /* arithmatic_expression: arithmatic_expression T_MINUS arithmatic_expression  */
#line 90 "fortran.y"
                                                                                                                                             {yyval=yyvsp[-2]-yyvsp[0];}
#line 1590 "y.tab.c"
    break;

  case 52: /* arithmatic_expression: arithmatic_expression T_ASTERISK arithmatic_expression  */
#line 91 "fortran.y"
                                                                                {yyval=yyvsp[-2]*yyvsp[0];}
#line 1596 "y.tab.c"
    break;

  case 53: /* arithmatic_expression: arithmatic_expression T_DIVISION arithmatic_expression  */
#line 91 "fortran.y"
                                                                                                                                                    {yyval=yyvsp[-2]/yyvsp[0];}
#line 1602 "y.tab.c"
    break;

  case 54: /* arithmatic_expression: T_OPEN_PARANTHESIS arithmatic_expression T_CLOSE_PARANTHESIS  */
#line 92 "fortran.y"
                                                                                     {yyval=yyvsp[-1];}
#line 1608 "y.tab.c"
    break;

  case 55: /* arithmatic_expression: arithmatic_expression T_EXPONENT arithmatic_expression  */
#line 93 "fortran.y"
                                                                                {yyval=power(yyvsp[-2],yyvsp[0]);}
#line 1614 "y.tab.c"
    break;

  case 56: /* arithmatic_expression: T_BAND T_OPEN_PARANTHESIS arithmatic_expression T_COMMA arithmatic_expression T_CLOSE_PARANTHESIS  */
#line 94 "fortran.y"
                                                                                                                           {yyval=yyvsp[-3] & yyvsp[-1];}
#line 1620 "y.tab.c"
    break;

  case 58: /* arithmatic_expression: T_BOR T_OPEN_PARANTHESIS arithmatic_expression T_COMMA arithmatic_expression T_CLOSE_PARANTHESIS  */
#line 95 "fortran.y"
                                                                                                                          {yyval=yyvsp[-3]|yyvsp[-1];}
#line 1626 "y.tab.c"
    break;

  case 60: /* arithmatic_expression: T_BXOR T_OPEN_PARANTHESIS arithmatic_expression T_COMMA arithmatic_expression T_CLOSE_PARANTHESIS  */
#line 96 "fortran.y"
                                                                                                                           {yyval=yyvsp[-3]^yyvsp[-1];}
#line 1632 "y.tab.c"
    break;

  case 62: /* arithmatic_expression: T_MINUS literals  */
#line 97 "fortran.y"
                                          {yyval=-yyvsp[0];}
#line 1638 "y.tab.c"
    break;

  case 63: /* arithmatic_expression: T_MINUS T_ID  */
#line 97 "fortran.y"
                                                                  {yyval=-yyvsp[0];}
#line 1644 "y.tab.c"
    break;

  case 65: /* arithmatic_expression: literals  */
#line 99 "fortran.y"
                                  {yyval=yyvsp[0];}
#line 1650 "y.tab.c"
    break;

  case 66: /* arithmatic_expression: T_ID  */
#line 99 "fortran.y"
                                                  {yyval=yyvsp[0];}
#line 1656 "y.tab.c"
    break;


#line 1660 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 146 "fortran.y"

void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
exit(1);
}
long long int power(int a,int b){
	long long int res=1;
	for (int i=1;i<=b;i++) res=res*a;
	return res;
}
int main(void) {
//signal(SIGINT, handle_sigint);
yyparse();
return 0;
}
