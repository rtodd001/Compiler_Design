/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    SEMICOLON = 266,
    COMMA = 267,
    COLON = 268,
    L_SQUARE_BRACKET = 269,
    R_SQUARE_BRACKET = 270,
    ARRAY = 271,
    OF = 272,
    ASSIGN = 273,
    IF = 274,
    THEN = 275,
    ELSE = 276,
    ENDIF = 277,
    WHILE = 278,
    BEGINLOOP = 279,
    ENDLOOP = 280,
    READ = 281,
    WRITE = 282,
    CONTINUE = 283,
    RETURN = 284,
    DO = 285,
    FOR = 286,
    OR = 287,
    AND = 288,
    NOT = 289,
    TRUE = 290,
    FALSE = 291,
    L_PAREN = 292,
    R_PAREN = 293,
    IDENT = 294,
    NUMBER = 295,
    ADD = 296,
    SUB = 297,
    MULT = 298,
    DIV = 299,
    MOD = 300,
    LTE = 301,
    GT = 302,
    LT = 303,
    GTE = 304,
    EQ = 305,
    NEQ = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 170 "mini_l.y" /* yacc.c:1909  */

  int ival;
  char* sval;
  struct program_struct *program_val;
  struct function_struct *function_val;
  struct statement_struct *statement_val;
  struct stathelp_struct *stathelp_val;
  struct statline_struct *statline_val;
  struct declaration_struct *declaration_val;
  struct declarationparam_struct *declarationparam_val;
  struct decline_struct *decline_val;
  struct declparam_struct *declparam_val;
  struct boolexp_struct *boolexp_val;
  struct relationandexpr_struct *relationandexpr_val;
  struct relationexpr_struct *relationexpr_val;
  struct relationhelper_struct *relationhelper_val;
  struct comp_struct *comp_val;
  struct term_struct *term_val;
  struct term1_struct *term1_val;
  struct expression_struct *expression_val;
  struct expresscomm_struct *expresscomm_val;
  struct multiplicativeexp_struct *multiplicativeexp_val;
  struct var_struct *var_val;
  struct varline_struct *varline_val;
  struct identifier_struct *identifier_val;
  struct number_struct *number_val;

#line 134 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
