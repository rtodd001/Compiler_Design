/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y" /* yacc.c:339  */

 #include <stdio.h>
 #include <stdlib.h>
 #include <vector>
 #include <iostream>
 #include <string>
 #include <queue>
 #include <sstream>
 using namespace std;
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 struct program_struct {
   string code;
 };
 struct function_struct {
    string code;
    string resultID;
 };
 struct statement_struct {
    string code;
    string resultID;
    string name;
 };
 struct stathelp_struct {
    string code;
 };
 struct statline_struct {
    string code;
    string resultID;
    string name;
 };
 struct declaration_struct {
    string code;
    string type;
    string resultID;
 };
 struct declarationparam_struct {
    string code;
    string type;
    string resultID;
 };
 struct decline_struct {
    string code;
    string type;
 };
 struct declparam_struct {
    string code;
    string type;
 };
 struct boolexp_struct {
    string code;
    string resultID;
 };
 struct relationandexpr_struct {
    string code;
    string resultID;
 };
 struct relationexpr_struct {
    string code;
    string resultID;
 };
 struct relationhelper_struct {
    string code;
    string resultID;
 };
 struct comp_struct {
    string code;
    string resultID;
 };
 struct term_struct {
    string code;
    string resultID;
    string type;
    string name;
    string index;
 };
 struct term1_struct {
    string code;
    string resultID;
    string type;
    string name;
    string index;
 };
 struct expression_struct {
    string code;
    string resultID;
    string type;
    string name;
    string index;
 };
 struct exprhelper_struct{
    string code;
    string resultID;
    string operand;
    string op;
    string index;
 };
 struct expresscomm_struct {
    string code;
    string resultID;
    string type;
    string name;
    string index;
 };
 struct multiplicativeexp_struct {
    string code;
    string resultID;
    string name;
    string type;
    string index;
 };
 struct multiphelper_struct{
    string code;
    string resultID;
    string operand;
    string type;
    string op;
    string name;
    string index;
 };
 struct var_struct {
    string code;
    string name;
    string resultID;
    string type;
    string index;
 };
 struct varline_struct {
    string code;
    string resultID;
    string type;
    string index;
    string index2;
    string name;
 };
 struct number_struct {
    string code;
    string resultID;
 };
 struct identifier_struct {
    string code;
    string resultID;
 };
 extern FILE * yyin;
 int yylex();
 int tempCounter = 0;
 int labelCounter = 0;
 int continueCounter = 0;
 string createTemp(){
    ostringstream os;
    os << "__temp__" << tempCounter++;
    return os.str();
 }
 string createLabel(){
    ostringstream os;
    os << "__label__" << labelCounter++;
    return os.str();
 }
 string createContinue(int counter){
    ostringstream os;
    os << "__continue__" << continueCounter;
    continueCounter += counter;
    return os.str();
 }
 vector<vector<string>> varBuffer;


#line 235 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 170 "mini_l.y" /* yacc.c:355  */

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

#line 355 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 372 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   233,   233,   234,   244,   258,   273,   281,   293,   302,
     305,   315,   318,   329,   344,   353,   365,   374,   389,   409,
     434,   461,   502,   530,   558,   566,   576,   577,   586,   605,
     634,   637,   650,   656,   669,   675,   687,   698,   706,   720,
     724,   728,   736,   740,   744,   748,   752,   756,   762,   775,
     789,   806,   820,   836,   851,   868,   882,   893,   909,   918,
     924,   935,   950,   974,   983
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "SEMICOLON", "COMMA", "COLON", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "ARRAY", "OF", "ASSIGN", "IF", "THEN", "ELSE", "ENDIF", "WHILE",
  "BEGINLOOP", "ENDLOOP", "READ", "WRITE", "CONTINUE", "RETURN", "DO",
  "FOR", "OR", "AND", "NOT", "TRUE", "FALSE", "L_PAREN", "R_PAREN",
  "IDENT", "NUMBER", "ADD", "SUB", "MULT", "DIV", "MOD", "LTE", "GT", "LT",
  "GTE", "EQ", "NEQ", "$accept", "program", "function", "declaration",
  "number", "decline", "declparam", "declarationparam", "identifier",
  "statement", "stathelp", "varline", "statline", "boolexp",
  "relationandexpr", "relationexpr", "relationhelper", "comp",
  "expression", "multiplicativeexp", "term", "term1", "var", "expresscomm", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -47

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-47)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -47,    28,   -47,   -30,   -47,   -47,    12,    43,   -30,    13,
      39,    -9,    56,   -30,   -30,    -4,   -30,   -47,   -47,   -47,
      51,    68,    80,    26,    57,   -30,    97,   -30,    44,   -47,
     100,   -47,    65,   -47,   -47,    98,   101,   117,   117,   -30,
     -30,   -47,   121,    92,   -30,   105,   109,   115,   107,    57,
     119,    32,   -47,   -47,   117,    41,   -47,     7,   110,   106,
     104,   -47,    99,    14,   -47,   -47,   -47,   118,   -47,   132,
     -47,   121,    67,    65,   137,   121,    65,   -47,   121,   147,
     -47,   -47,   126,    85,   -47,   121,    65,   117,   117,   121,
     121,   -47,   -47,   -47,   -47,   -47,   -47,   121,   121,   121,
     121,    65,   -30,    48,   140,    57,    -7,   -47,    67,   149,
     -47,   -47,     4,   129,   148,   -47,   -47,    14,    14,    67,
     -47,   -47,   -47,   143,   -47,   150,   159,   -47,   161,   121,
     -47,    65,   152,   -47,   117,   117,   -47,   -47,   -47,   -47,
     -47,   164,   -30,   154,   121,     1,    65,   151,   -47
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,    16,     0,     0,    11,     0,
       0,     0,     0,    11,     0,     0,     9,    12,    13,    14,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     8,
       0,    10,    30,     5,     6,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,    61,     0,     0,     0,     0,
       0,     0,    39,    40,     0,     0,    59,    61,     0,    32,
      34,    37,     0,    48,    51,    55,    58,     0,    22,    28,
      23,     0,    25,    30,     0,     0,    30,     4,     0,     0,
      15,    36,     0,     0,    56,     0,    30,     0,     0,     0,
       0,    46,    45,    44,    47,    42,    43,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,    31,    17,     0,
      41,    60,    63,     0,    26,    33,    35,    49,    50,    38,
      52,    53,    54,     0,    29,     0,     0,    62,     0,     0,
      57,    30,     0,    19,     0,     0,     7,    64,    27,    18,
      20,     0,     0,     0,     0,     0,    30,     0,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -47,   -47,   -47,   153,   -23,   156,   165,   163,    -3,   -47,
     -47,   -38,   -46,   -21,    91,   -47,   131,   -47,   -22,    21,
       3,   128,   -25,    55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     4,    21,    56,    22,     9,    10,    57,    46,
     132,    68,    47,    58,    59,    60,    61,    97,    62,    63,
      64,    65,    66,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,    30,    70,    14,    15,    11,    19,    48,   127,     5,
      11,    11,    20,    23,    69,    69,   129,    67,    12,    74,
      72,    75,    23,     7,    23,   146,    79,   104,     2,    45,
     107,     3,    83,    82,    89,    90,    45,    45,    27,    28,
     114,    45,    89,    90,    85,    89,    90,     8,    48,   103,
      13,    48,    45,   106,    34,   123,   108,    98,    99,   100,
      35,    48,    16,   112,   124,    24,   115,    52,    53,    54,
      45,     5,    29,    45,    55,   119,    48,    69,    71,    25,
       5,    29,   126,    45,    37,   138,   111,    26,    38,    89,
      90,    39,    40,    41,    42,    43,    44,    29,    45,    45,
     147,   120,   121,   122,     5,    32,    48,   112,    89,    90,
     117,   118,    49,   140,   141,    36,    73,   143,    50,    75,
      76,    48,   145,   111,    77,    78,    89,    90,    45,    80,
      86,    91,    92,    93,    94,    95,    96,    88,    87,    45,
      89,    90,   101,    45,   102,    91,    92,    93,    94,    95,
      96,    51,    52,    53,    54,   105,     5,    29,    71,    55,
       5,    29,   109,    55,   110,   125,   128,   130,   133,   131,
     135,   136,   144,   134,   139,   142,   148,    18,    17,   116,
      33,    31,    81,    84,   137
};

static const yytype_uint8 yycheck[] =
{
       3,    24,    40,    12,    13,     8,    10,    32,    15,    39,
      13,    14,    16,    16,    39,    40,    12,    38,     5,    44,
      42,    14,    25,    11,    27,    24,    49,    73,     0,    32,
      76,     3,    54,    54,    41,    42,    39,    40,    12,    13,
      86,    44,    41,    42,    37,    41,    42,     4,    73,    71,
      11,    76,    55,    75,    10,   101,    78,    43,    44,    45,
      16,    86,     6,    85,   102,    14,    87,    35,    36,    37,
      73,    39,    40,    76,    42,    97,   101,   102,    37,    11,
      39,    40,   105,    86,    19,   131,    38,     7,    23,    41,
      42,    26,    27,    28,    29,    30,    31,    40,   101,   102,
     146,    98,    99,   100,    39,     8,   131,   129,    41,    42,
      89,    90,    14,   134,   135,    15,    24,   142,    17,    14,
      11,   146,   144,    38,     9,    18,    41,    42,   131,    10,
      20,    46,    47,    48,    49,    50,    51,    33,    32,   142,
      41,    42,    24,   146,    12,    46,    47,    48,    49,    50,
      51,    34,    35,    36,    37,    18,    39,    40,    37,    42,
      39,    40,    15,    42,    38,    25,    17,    38,    25,    21,
      11,    10,    18,    23,    22,    11,    25,    14,    13,    88,
      27,    25,    51,    55,   129
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,     0,     3,    54,    39,    60,    11,     4,    58,
      59,    60,     5,    11,    12,    13,     6,    58,    59,    10,
      16,    55,    57,    60,    14,    11,     7,    12,    13,    40,
      56,    57,     8,    55,    10,    16,    15,    19,    23,    26,
      27,    28,    29,    30,    31,    60,    61,    64,    74,    14,
      17,    34,    35,    36,    37,    42,    56,    60,    65,    66,
      67,    68,    70,    71,    72,    73,    74,    65,    63,    74,
      63,    37,    70,    24,    74,    14,    11,     9,    18,    56,
      10,    68,    65,    70,    73,    37,    20,    32,    33,    41,
      42,    46,    47,    48,    49,    50,    51,    69,    43,    44,
      45,    24,    12,    70,    64,    18,    70,    64,    70,    15,
      38,    38,    70,    75,    64,    65,    66,    71,    71,    70,
      72,    72,    72,    64,    63,    25,    56,    15,    17,    12,
      38,    21,    62,    25,    23,    11,    10,    75,    64,    22,
      65,    65,    11,    74,    18,    70,    24,    64,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    55,    55,    55,    56,    57,
      57,    58,    58,    59,    59,    59,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    73,    73,
      73,    74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     3,     3,     8,     1,     0,
       3,     0,     3,     3,     3,     8,     1,     3,     6,     5,
       6,    13,     2,     2,     1,     2,     0,     2,     1,     3,
       0,     3,     1,     3,     1,     3,     2,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     4,     1,     1,
       3,     1,     4,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 233 "mini_l.y" /* yacc.c:1646  */
    {(yyval.program_val) = new program_struct();}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 234 "mini_l.y" /* yacc.c:1646  */
    {
            (yyval.program_val) = new program_struct(); 
            ostringstream os;
            os << (yyvsp[0].function_val)->code;
            (yyval.program_val) ->code = os.str();
            cout << (yyval.program_val)->code;
            }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 244 "mini_l.y" /* yacc.c:1646  */
    {  
               ostringstream os;
               (yyval.function_val) = new function_struct();
               os << "func " << (yyvsp[-10].identifier_val)->resultID<<endl;
               os << (yyvsp[-7].declparam_val)->code << (yyvsp[-4].decline_val)->code;
               os << (yyvsp[-1].statline_val)->code << "endfunc\n";
               delete (yyvsp[-10].identifier_val);
               delete (yyvsp[-7].declparam_val);
               delete (yyvsp[-4].decline_val);
               delete (yyvsp[-1].statline_val);
               (yyval.function_val)->code = os.str();
            }
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 258 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.declaration_val) = new declaration_struct();
                     ostringstream os;
                     string tp = (yyvsp[0].declaration_val)->type;
                     (yyval.declaration_val)->type = tp;
                     (yyval.declaration_val)->resultID = (yyvsp[0].declaration_val)->resultID;
                     if(tp == "array"){
                        os << ".[] " << (yyvsp[-2].identifier_val)->resultID << ", " << (yyvsp[0].declaration_val)->resultID << endl;
                     }
                     else if (tp == "ident"){
                        os << ". " << (yyvsp[-2].identifier_val)->resultID << endl;
                     }
                     os << (yyvsp[0].declaration_val)->code;
                     (yyval.declaration_val)->code = os.str();
                  }
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 273 "mini_l.y" /* yacc.c:1646  */
    {  
                  ostringstream os;
                  (yyval.declaration_val) = new declaration_struct();
                  os << ". " << (yyvsp[-2].identifier_val)->resultID << endl;
                  (yyval.declaration_val)->type = "ident";
                  delete (yyvsp[-2].identifier_val);
                  (yyval.declaration_val)->code = os.str();
               }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 281 "mini_l.y" /* yacc.c:1646  */
    {
                   (yyval.declaration_val) = new declaration_struct();
                   ostringstream os;
                   (yyval.declaration_val)->type = "array";
                   os << ".[] " << (yyvsp[-7].identifier_val)->resultID << ", " << (yyvsp[-3].number_val)->resultID << endl;
                   (yyval.declaration_val)->resultID = (yyvsp[-3].number_val)->resultID;
                   //os << ". " << $1->code;
                  
                   (yyval.declaration_val)->code = os.str();
                }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 293 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.number_val) = new number_struct();
               ostringstream os; 
               os << (yyvsp[0].ival);
               (yyval.number_val)->code = os.str();
               (yyval.number_val)->resultID = os.str();
            }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 302 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.decline_val) = new decline_struct();
            }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 306 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.decline_val) = new decline_struct();
               ostringstream os;
               os << (yyvsp[-2].declaration_val)->code << (yyvsp[0].decline_val)->code;
               delete (yyvsp[-2].declaration_val);
               delete (yyvsp[0].decline_val);
               (yyval.decline_val)->code = os.str();
            }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 315 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.declparam_val) = new declparam_struct();
            }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 319 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.declparam_val) = new declparam_struct();
               ostringstream os;
               os << (yyvsp[-2].declarationparam_val)->code << (yyvsp[0].declparam_val)->code;
               delete (yyvsp[-2].declarationparam_val);
               delete (yyvsp[0].declparam_val);
               (yyval.declparam_val)->code = os.str();
            }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 329 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.declarationparam_val) = new declarationparam_struct();
                     ostringstream os;
                     string tp = (yyvsp[0].declarationparam_val)->type;
                     (yyval.declarationparam_val)->type = tp;
                     (yyval.declarationparam_val)->resultID = (yyvsp[0].declarationparam_val)->resultID;
                     if(tp == "array"){
                        os << ".[] " << (yyvsp[-2].identifier_val)->resultID << ", " << (yyvsp[0].declarationparam_val)->resultID << endl;
                     }
                     else if (tp == "ident"){
                        os << ". " << (yyvsp[-2].identifier_val)->resultID << endl;
                     }
                     os << (yyvsp[0].declarationparam_val)->code;
                     (yyval.declarationparam_val)->code = os.str();
                     }
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 344 "mini_l.y" /* yacc.c:1646  */
    {  
                     ostringstream os;
                     (yyval.declarationparam_val) = new declarationparam_struct();
                     os << ". " << (yyvsp[-2].identifier_val)->resultID << endl;
                     os << "= " << (yyvsp[-2].identifier_val)->resultID << ", " << "$0" << endl;
                     (yyval.declarationparam_val)->type = "ident";
                     delete (yyvsp[-2].identifier_val);
                     (yyval.declarationparam_val)->code = os.str();
                  }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 353 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.declarationparam_val) = new declarationparam_struct();
                     ostringstream os;
                     (yyval.declarationparam_val)->type = "array";
                     os << ".[] " << (yyvsp[-7].identifier_val)->resultID << ", " << (yyvsp[-3].number_val)->resultID << endl;
                     (yyval.declarationparam_val)->resultID = (yyvsp[-3].number_val)->resultID;
                     //os << ". " << $1->code;
                     
                     (yyval.declarationparam_val)->code = os.str();
                  }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 365 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.identifier_val) = new identifier_struct;
                  ostringstream os; 
                  os << (yyvsp[0].sval);
                  //$$->code = os.str();
                  (yyval.identifier_val)->resultID = os.str();
               }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 374 "mini_l.y" /* yacc.c:1646  */
    {  
               (yyval.statement_val) = new statement_struct();
               ostringstream os;
               os <<  (yyvsp[-2].var_val)->code;
               os <<  (yyvsp[0].expression_val)->code;
               string tp = (yyvsp[-2].var_val)->type;
               if(tp == "ident")
                  os << "= " << (yyvsp[-2].var_val)->name;
               else if(tp == "array")
                  os << "[]= " << (yyvsp[-2].var_val)->name << ", " << (yyvsp[-2].var_val)->index;
               os  << ", " << (yyvsp[0].expression_val)->resultID << endl;
               delete (yyvsp[-2].var_val);
               delete (yyvsp[0].expression_val);
               (yyval.statement_val)->code = os.str();
            }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 389 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val) = new statement_struct();
               string taken = createLabel();
               string not_taken = createLabel();
               string ex = createLabel();
               ostringstream os;
               os << (yyvsp[-4].boolexp_val)->code;
               os << "?:= " << taken << ", " << (yyvsp[-4].boolexp_val)->resultID << endl;
               os << ":= " << not_taken << endl;
               os << ": " << taken << endl;
               os << (yyvsp[-2].statline_val)->code;
               os << ":= " << ex << endl;
               os << ": " << not_taken << endl;
               os << (yyvsp[-1].stathelp_val)->code;
               os << ": " << ex << endl;
               delete (yyvsp[-4].boolexp_val);
               delete (yyvsp[-2].statline_val);
               delete (yyvsp[-1].stathelp_val);
               (yyval.statement_val)->code = os.str();
            }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 409 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val) = new statement_struct();
               string cond = createLabel();
               string start_loop = createLabel();
               string end_loop = createLabel();
               ostringstream os; 
               os << ": " << cond << endl;
               os << ": " << createContinue(1) << endl;
               //condition check
               os << (yyvsp[-3].boolexp_val)->code;
               os << "?:= " << start_loop << ", " << (yyvsp[-3].boolexp_val)->resultID << endl;
               //not taken
               os << ":= " << end_loop << endl;
               //taken
               os << ": " << start_loop << endl;
               //actual work
               os << (yyvsp[-1].statline_val)->code;
               //condition recheck
               os << ":= " << cond << endl;
               //exit loop
               os << ": " << end_loop << endl;
               delete (yyvsp[-3].boolexp_val);
               delete (yyvsp[-1].statline_val);
               (yyval.statement_val)->code = os.str();
            }
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 434 "mini_l.y" /* yacc.c:1646  */
    {
               //DO WHILE NEEDS TO DO IT ONCE
               //FIX NEEDED
               (yyval.statement_val) = new statement_struct();
               string cond = createLabel();
               string start_loop = createLabel();
               string end_loop = createLabel();
               ostringstream os; 
               os << ": " << cond << endl;
               os << ": " << createContinue(1) << endl;
               //condition check
               os << (yyvsp[0].boolexp_val)->code;
               os << "?:= " << start_loop << ", " << (yyvsp[0].boolexp_val)->resultID << endl;
               //not taken
               os << ":= " << end_loop << endl;
               //taken
               os << ": " << start_loop << endl;
               //actual work
               os << (yyvsp[-3].statline_val)->code;
               //condition recheck
               os << ":= " << cond << endl;
               //exit loop
               os << ": " << end_loop << endl;
               delete (yyvsp[-3].statline_val);
               delete (yyvsp[0].boolexp_val);
               (yyval.statement_val)->code = os.str();
            }
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 461 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val) = new statement_struct();
               string cond = createLabel();
               string start_loop = createLabel();
               string end_loop = createLabel();
               //string contin = $12->name;
               //cout << "continue: " << contin << endl;
               ostringstream os;
               os << ". " << (yyvsp[-11].var_val)->name << endl;
               os << (yyvsp[-11].var_val)->code;
               os << ". " << (yyvsp[-11].var_val)->resultID << endl;
               os << "= " << (yyvsp[-11].var_val)->resultID << ", " << (yyvsp[-9].number_val)->resultID << endl;
               os << ": " << cond << endl;
               os << (yyvsp[-7].boolexp_val)->code;
               os << "?:= " << start_loop << ", " << (yyvsp[-7].boolexp_val)->resultID << endl;
               os << ":= " << end_loop << endl;
               //actual work done in loop
               os << ": " << start_loop << endl;
               os << (yyvsp[-1].statline_val)->code;
               //increment counter
               os << ": " << createContinue(1) << endl;
               os <<  (yyvsp[-5].var_val)->code;
               os <<  (yyvsp[-3].expression_val)->code;
               string tp = (yyvsp[-5].var_val)->type;
               if(tp == "ident")
                  os << "= " << (yyvsp[-5].var_val)->name;
               else if(tp == "array")
                  os << "[]= " << (yyvsp[-5].var_val)->name << ", " << (yyvsp[-5].var_val)->index;
               os  << ", " << (yyvsp[-3].expression_val)->resultID << endl;
               //branch to recheck the loop condition
               os << ":= " << cond << endl;
               //exit the loop
               os << ": " << end_loop << endl;
               delete (yyvsp[-11].var_val);
               delete (yyvsp[-9].number_val);
               delete (yyvsp[-7].boolexp_val);
               delete (yyvsp[-5].var_val);
               delete (yyvsp[-3].expression_val);
               delete (yyvsp[-1].statline_val);
               (yyval.statement_val)->code = os.str();
               }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 502 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val) = new statement_struct();
               ostringstream os;
               os << (yyvsp[0].varline_val)->code;
               string tp = (yyvsp[0].varline_val)->type;
               if(!varBuffer.empty()){
                  while(!varBuffer.empty()){
                     vector<string> temp = varBuffer.back();
                     string tp = temp.front();
                     if(tp == "array"){
                        os << ".[]< " << temp.at(2) << ", " << temp.back() << endl;
                     }
                     else
                        os << ".< " << temp.at(2) << endl;
                     varBuffer.erase(varBuffer.end());
                  }
               }
               else {
                  string tp = (yyvsp[0].varline_val)->type;
                  if(tp == "array"){
                     os << ".[]< " << (yyvsp[0].varline_val)->name << ", " << (yyvsp[0].varline_val)->index << endl;
                  }
                  else
                     os << ".< " << (yyvsp[0].varline_val)->name<< endl;
               }
               delete (yyvsp[0].varline_val);
               (yyval.statement_val)->code = os.str();
            }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 530 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val) = new statement_struct();
               ostringstream os;
               os << (yyvsp[0].varline_val)->code;
               if(!varBuffer.empty()){
                  while(!varBuffer.empty()){
                     vector<string> temp = varBuffer.back();
                     string tp = temp.front();
                     if(tp == "array"){
                        os << ".[]> " << temp.at(2) << ", " << temp.back() << endl;
                     }
                     else
                        os << ".> " << temp.at(2) << endl;
                     varBuffer.erase(varBuffer.end());
                  }
               }
               else {
                  string tp = (yyvsp[0].varline_val)->type;
                  if(tp == "array"){
                     os << ".[]> " << (yyvsp[0].varline_val)->name << ", " << (yyvsp[0].varline_val)->index << endl;
                  }
                  else
                     os << ".> " << (yyvsp[0].varline_val)->name << endl;
               }
               
               (yyval.statement_val)->code = os.str();
               delete (yyvsp[0].varline_val);
               }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 558 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val)= new statement_struct();
               string cont = createContinue(0);
               ostringstream os;
               os << ":=  " << cont << endl;
               (yyval.statement_val)->resultID = cont;
               (yyval.statement_val)->code = os.str();
            }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 566 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val) = new statement_struct();
               ostringstream os;
               os << (yyvsp[0].expression_val)->code;
               os << "ret " << (yyvsp[0].expression_val)->resultID << endl;
               (yyval.statement_val)->code = os.str();
               delete (yyvsp[0].expression_val);
            }
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 576 "mini_l.y" /* yacc.c:1646  */
    {(yyval.stathelp_val) =new stathelp_struct(); }
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 577 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.stathelp_val) = new stathelp_struct();
               ostringstream os;
               os << (yyvsp[0].statline_val)->code;
               delete (yyvsp[0].statline_val);
               (yyval.stathelp_val)->code = os.str();
            }
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 586 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.varline_val) = new varline_struct();
               ostringstream os;
               os << (yyvsp[0].var_val)->code;
               ostringstream os1;
               os1 << (yyvsp[0].var_val)->resultID;
               (yyval.varline_val)->resultID = os1.str();
               (yyval.varline_val)->type = (yyvsp[0].var_val)->type;
               (yyval.varline_val)->name = (yyvsp[0].var_val)->name;
               (yyval.varline_val)->index = (yyvsp[0].var_val)->index;
               vector <string> buff;
               buff.push_back((yyvsp[0].var_val)->type);
               buff.push_back((yyvsp[0].var_val)->resultID);
               buff.push_back((yyvsp[0].var_val)->name);
               buff.push_back((yyvsp[0].var_val)->index);
               varBuffer.push_back(buff);
               delete (yyvsp[0].var_val);
               (yyval.varline_val)->code = os.str();
            }
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 605 "mini_l.y" /* yacc.c:1646  */
    {    
               (yyval.varline_val) = new varline_struct();
               ostringstream os;
               os << (yyvsp[-2].var_val)->code << (yyvsp[0].varline_val)->code;
               (yyval.varline_val)->type = (yyvsp[-2].var_val)->type;
               (yyval.varline_val)->resultID = (yyvsp[0].varline_val)->resultID;
               (yyval.varline_val)->index = (yyvsp[-2].var_val)->index;
               (yyval.varline_val)->index2 = (yyvsp[0].varline_val)->index;
               (yyval.varline_val)->name = (yyvsp[-2].var_val)->name;
               vector <string> buff;
               buff.push_back((yyvsp[-2].var_val)->type);
               buff.push_back((yyvsp[-2].var_val)->resultID);
               buff.push_back((yyvsp[-2].var_val)->name);
               buff.push_back((yyvsp[-2].var_val)->index);
               varBuffer.push_back(buff);
               // vector <string> buff2;
               // buff2.push_back($3->type);
               // buff2.push_back($3->resultID);
               // buff2.push_back($3->name);
               // buff2.push_back($3->index);
               // varBuffer.push_back(buff2);
               //varBuffer.push_back(pair<string,string>($1->type, $1->type == "array" ? $1->name : $1->resultID));
               //varBuffer.push_back(pair<string,string>($3->type, $3->type == "array" ? $3->name : $3->resultID));
               delete (yyvsp[-2].var_val);
               delete (yyvsp[0].varline_val);
               (yyval.varline_val)->code = os.str();
               }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 634 "mini_l.y" /* yacc.c:1646  */
    { 
                                                      (yyval.statline_val) = new statline_struct();
                                                   }
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 637 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statline_val) = new statline_struct();
               ostringstream os;
               os << (yyvsp[-2].statement_val)->code;
               os << (yyvsp[0].statline_val)->code;
               (yyval.statline_val)->code = os.str();
               (yyval.statline_val)->resultID = (yyvsp[0].statline_val)->resultID;
               (yyval.statline_val)->name = (yyvsp[-2].statement_val)->resultID;
               delete (yyvsp[-2].statement_val);
               delete (yyvsp[0].statline_val);
            }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 650 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.boolexp_val) = new boolexp_struct();
               (yyval.boolexp_val)->code = (yyvsp[0].relationandexpr_val)->code;
               (yyval.boolexp_val)->resultID = (yyvsp[0].relationandexpr_val)->resultID;
               delete (yyvsp[0].relationandexpr_val);
            }
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 656 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.boolexp_val) = new boolexp_struct();
                  ostringstream os; 
                  os << (yyvsp[-2].relationandexpr_val)->code;
                  os << (yyvsp[0].boolexp_val)->code;
                  string temp = createTemp();
                  os << ". " << temp << endl;
                  os << "|| " << temp << ", " << (yyvsp[-2].relationandexpr_val)->resultID << ", " << (yyvsp[0].boolexp_val)->resultID << endl;
                  (yyval.boolexp_val)->code = os.str();
                  (yyval.boolexp_val)->resultID = temp;
            }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 669 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.relationandexpr_val) = new relationandexpr_struct();
                        (yyval.relationandexpr_val)->code = (yyvsp[0].relationexpr_val)->code;
                        (yyval.relationandexpr_val)->resultID = (yyvsp[0].relationexpr_val)->resultID;
                        delete (yyvsp[0].relationexpr_val);
                     }
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 675 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.relationandexpr_val) = new relationandexpr_struct();
                        ostringstream os; 
                        os << (yyvsp[-2].relationexpr_val)->code;
                        os << (yyvsp[0].relationandexpr_val)->code;
                        string temp = createTemp();
                        os << ". " << temp << endl;
                        os << "&& " << temp << ", " << (yyvsp[-2].relationexpr_val)->resultID << ", " << (yyvsp[0].relationandexpr_val)->resultID << endl;
                        (yyval.relationandexpr_val)->code = os.str();
                        (yyval.relationandexpr_val)->resultID = temp;
                    }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 687 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.relationexpr_val) = new relationexpr_struct();
                     string temp = createTemp();
                     ostringstream os;
                     os << (yyvsp[0].relationhelper_val)->code;
                     os << ". " << temp << endl;
                     os << "! " << temp << (yyvsp[0].relationhelper_val)->resultID << endl;
                     delete (yyvsp[0].relationhelper_val);
                     (yyval.relationexpr_val)->resultID = temp;
                     (yyval.relationexpr_val)->code = os.str();
                  }
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 698 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.relationexpr_val) = new relationexpr_struct();
                     (yyval.relationexpr_val)->code = (yyvsp[0].relationhelper_val)->code;
                     (yyval.relationexpr_val)->resultID = (yyvsp[0].relationhelper_val)->resultID;
                     delete (yyvsp[0].relationhelper_val);
                }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 706 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.relationhelper_val) = new relationhelper_struct();
                     string temp = createTemp();
                     ostringstream os;
                     os << (yyvsp[-2].expression_val)->code;
                     os << (yyvsp[0].expression_val)->code;
                     os << ". " << temp << endl;
                     string tp1 = (yyvsp[-2].expression_val)->type;
                     string tp2 = (yyvsp[0].expression_val)->type;
                     os << (yyvsp[-1].comp_val)->resultID << temp << ", " << (yyvsp[-2].expression_val)->resultID << ", " << (yyvsp[0].expression_val)->resultID << endl;
                     (yyval.relationhelper_val)->code = os.str();
                     delete (yyvsp[-1].comp_val);
                     (yyval.relationhelper_val)->resultID = temp;
                  }
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 720 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.relationhelper_val) = new relationhelper_struct();
                     (yyval.relationhelper_val)->resultID = "1";
                  }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 724 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.relationhelper_val) = new relationhelper_struct();
                     (yyval.relationhelper_val)->resultID = "0";
                  }
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 728 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.relationhelper_val) = new relationhelper_struct();
                     (yyval.relationhelper_val)->resultID = (yyvsp[-1].boolexp_val)->resultID;
                     (yyval.relationhelper_val)->code = (yyvsp[-1].boolexp_val)->code;
                     delete (yyvsp[-1].boolexp_val);
                  }
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 736 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.comp_val) = new comp_struct();
               (yyval.comp_val)->resultID = "== ";
            }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 740 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.comp_val) = new comp_struct();
               (yyval.comp_val)->resultID = "!= ";
            }
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 744 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.comp_val) = new comp_struct();
               (yyval.comp_val)->resultID = "< ";
            }
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 748 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.comp_val) = new comp_struct();
               (yyval.comp_val)->resultID = "> ";
            }
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 752 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.comp_val) = new comp_struct();
               (yyval.comp_val)->resultID = "<= ";
            }
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 756 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.comp_val) = new comp_struct();
               (yyval.comp_val)->resultID = ">= ";
            }
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 762 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.expression_val) = new expression_struct();
                  ostringstream os;
                  os << (yyvsp[0].multiplicativeexp_val)->code;
                  (yyval.expression_val)->code = os.str();
                  ostringstream os1;
                  (yyval.expression_val)->name = (yyvsp[0].multiplicativeexp_val)->name;
                  os1 << (yyvsp[0].multiplicativeexp_val)->resultID;
                  (yyval.expression_val)->resultID = os1.str();
                  (yyval.expression_val)->type = (yyvsp[0].multiplicativeexp_val)->type;
                  (yyval.expression_val)->index = (yyvsp[0].multiplicativeexp_val)->index;
                  delete (yyvsp[0].multiplicativeexp_val);
               }
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 775 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.expression_val) = new expression_struct();
                     ostringstream os;
                     string temp2 = createTemp();
                     os << (yyvsp[-2].expression_val)->code;
                     os << (yyvsp[0].multiplicativeexp_val)->code;
                     os << ". " << temp2 << endl;
                     os << "+ " << temp2 << ", " << (yyvsp[-2].expression_val)->resultID << ", " << (yyvsp[0].multiplicativeexp_val)->resultID << endl;
                     (yyval.expression_val)->resultID = temp2;
                     (yyval.expression_val)->code = os.str();
                     (yyval.expression_val)->index = (yyvsp[-2].expression_val)->index;
                     delete (yyvsp[-2].expression_val);
                     delete (yyvsp[0].multiplicativeexp_val);                     
                  }
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 789 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.expression_val) = new expression_struct();
                     ostringstream os;
                     string temp2 = createTemp();
                     os << (yyvsp[-2].expression_val)->code;
                     os << (yyvsp[0].multiplicativeexp_val)->code;
                     os << ". " << temp2 << endl;
                     os << "- " << temp2 << ", " << (yyvsp[-2].expression_val)->resultID << ", " << (yyvsp[0].multiplicativeexp_val)->resultID << endl;
                     
                     (yyval.expression_val)->resultID = temp2;
                     (yyval.expression_val)->code = os.str();
                     (yyval.expression_val)->index = (yyvsp[-2].expression_val)->index;
                     delete (yyvsp[-2].expression_val);
                     delete (yyvsp[0].multiplicativeexp_val);
                  }
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 806 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.multiplicativeexp_val) = new multiplicativeexp_struct();
                        ostringstream os;
                        os << (yyvsp[0].term_val)->code;
                        (yyval.multiplicativeexp_val)->name = (yyvsp[0].term_val)->name;
                        (yyval.multiplicativeexp_val)->code = os.str();
                        ostringstream os1;
                        os1 << (yyvsp[0].term_val)->resultID;
                        (yyval.multiplicativeexp_val)->type = (yyvsp[0].term_val)->type;
                        
                        (yyval.multiplicativeexp_val)->resultID = os1.str();
                        (yyval.multiplicativeexp_val)->index = (yyvsp[0].term_val)->index;
                        delete (yyvsp[0].term_val);
                     }
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 820 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.multiplicativeexp_val) = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        //possible newline issue
                        os << (yyvsp[-2].multiplicativeexp_val)->code;
                        os << (yyvsp[0].term_val)->code;
                        os << ". " << temp2 << endl;
                        os << "* " << temp2 << ", " << (yyvsp[-2].multiplicativeexp_val)->resultID << ", " << (yyvsp[0].term_val)->resultID << endl;
                        
                        (yyval.multiplicativeexp_val)->index = (yyvsp[-2].multiplicativeexp_val)->index;
                        (yyval.multiplicativeexp_val)->resultID = temp2;
                        (yyval.multiplicativeexp_val)->code = os.str();
                        delete (yyvsp[-2].multiplicativeexp_val);
                        delete (yyvsp[0].term_val);
                    }
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 836 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.multiplicativeexp_val) = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << (yyvsp[-2].multiplicativeexp_val)->code;
                        os << (yyvsp[0].term_val)->code;
                        os << ". " << temp2 << endl;
                        os << "/ " << temp2 << ", " << (yyvsp[-2].multiplicativeexp_val)->resultID << ", " << (yyvsp[0].term_val)->resultID << endl;
                        
                        (yyval.multiplicativeexp_val)->index = (yyvsp[-2].multiplicativeexp_val)->index;
                        (yyval.multiplicativeexp_val)->resultID = temp2;
                        (yyval.multiplicativeexp_val)->code = os.str();
                        delete (yyvsp[-2].multiplicativeexp_val);
                        delete (yyvsp[0].term_val);
                    }
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 851 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.multiplicativeexp_val) = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << (yyvsp[-2].multiplicativeexp_val)->code;
                        os << (yyvsp[0].term_val)->code;
                        os << ". " << temp2 << endl;
                        os << "% " << temp2 << ", " << (yyvsp[-2].multiplicativeexp_val)->resultID << ", " << (yyvsp[0].term_val)->resultID << endl;
                        
                        (yyval.multiplicativeexp_val)->index = (yyvsp[-2].multiplicativeexp_val)->index;
                        (yyval.multiplicativeexp_val)->resultID = temp2;
                        (yyval.multiplicativeexp_val)->code = os.str();
                        delete (yyvsp[-2].multiplicativeexp_val);
                        delete (yyvsp[0].term_val);
                    }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 868 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.term_val) = new term_struct();
                     ostringstream os;
                     os << (yyvsp[0].term1_val)->code;
                     (yyval.term_val)->name = (yyvsp[0].term1_val)->name;
                     (yyval.term_val)->code = os.str();
                     (yyval.term_val)->type = (yyvsp[0].term1_val)->type;
                     ostringstream os1;
                     os1 << (yyvsp[0].term1_val)->resultID;
                     
                     (yyval.term_val)->resultID = os1.str();
                     (yyval.term_val)->index = (yyvsp[0].term1_val)->index;
                     delete (yyvsp[0].term1_val);
            }
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 882 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.term_val) = new term_struct();
               ostringstream os;
               string temp = createTemp();
               os << (yyvsp[0].term1_val)->code;
               os << ". " << temp << endl;
               os << "- " << temp << ", 0 ," << (yyvsp[0].term1_val)->resultID << endl;
               (yyval.term_val)->resultID = temp;
               (yyval.term_val)->code = os.str();
               delete (yyvsp[0].term1_val);
            }
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 893 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.term_val) = new term_struct();
               //set params here
               ostringstream os;
               string temp = createTemp();
               os << ". " << temp << endl;
               os << (yyvsp[-1].expresscomm_val)->code;
               os << "param " << (yyvsp[-1].expresscomm_val)->resultID << endl;
               os << "call " << (yyvsp[-3].identifier_val)->resultID << ", " << temp << endl;
               (yyval.term_val)->resultID = temp;
               (yyval.term_val)->code = os.str();
               delete (yyvsp[-3].identifier_val);
               delete (yyvsp[-1].expresscomm_val);
            }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 909 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.term1_val) = new term1_struct();
               (yyval.term1_val)->code = (yyvsp[0].var_val)->code;
               (yyval.term1_val)->type = (yyvsp[0].var_val)->type;
               (yyval.term1_val)->name = (yyvsp[0].var_val)->name;
               (yyval.term1_val)->resultID = (yyvsp[0].var_val)->resultID;
               (yyval.term1_val)->index = (yyvsp[0].var_val)->index;
               delete (yyvsp[0].var_val);
            }
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 918 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.term1_val) = new term1_struct();
               //$$->code = $1->code;
               (yyval.term1_val)->resultID = (yyvsp[0].number_val)->resultID;
               delete (yyvsp[0].number_val);
            }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 924 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.term1_val) = new term1_struct();
               (yyval.term1_val)->code = (yyvsp[-1].expression_val)->code;
               (yyval.term1_val)->index = (yyvsp[-1].expression_val)->index;
               (yyval.term1_val)->type = (yyvsp[-1].expression_val)->type;
               (yyval.term1_val)->resultID = (yyvsp[-1].expression_val)->resultID;
               (yyval.term1_val)->name = (yyvsp[-1].expression_val)->name;
               delete (yyvsp[-1].expression_val);
            }
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 935 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.var_val) = new var_struct();
               ostringstream os;
               string temp = createTemp();
               os << ". " << temp << endl;
               os << "= " << temp << ", " << (yyvsp[0].identifier_val)->resultID << endl;
               (yyval.var_val)->code = os.str();
               ostringstream os1;
               os1 << (yyvsp[0].identifier_val)->resultID;
               (yyval.var_val)->resultID = temp;
               (yyval.var_val)->name = os1.str();
               (yyval.var_val)->type = "ident";
               (yyval.var_val)->index = (yyvsp[0].identifier_val)->resultID;
               delete (yyvsp[0].identifier_val);
            }
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 950 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.var_val) = new var_struct();
               ostringstream os;
               os << (yyvsp[-1].expression_val)->code;
               string tp = (yyvsp[-1].expression_val)->type;
               string temp = createTemp();
               os << ". " << temp << endl;
               os << "=[] " << temp << ", " << (yyvsp[-3].identifier_val)->resultID << ", " << (yyvsp[-1].expression_val)->resultID << endl;
               if(tp == "array"){
                  (yyval.var_val)->resultID = temp;
               }
               else{
                  (yyval.var_val)->resultID = temp;
               }
               //$$->code = $3->code;
               (yyval.var_val)->name = (yyvsp[-3].identifier_val)->resultID;
               (yyval.var_val)->index = (yyvsp[-1].expression_val)->resultID;
               delete (yyvsp[-3].identifier_val);
               delete (yyvsp[-1].expression_val);
               (yyval.var_val)->type = "array";
               (yyval.var_val)->code = os.str();
            }
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 974 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.expresscomm_val) = new expresscomm_struct();
                  (yyval.expresscomm_val)->code = (yyvsp[0].expression_val)->code;
                  (yyval.expresscomm_val)->index = (yyvsp[0].expression_val)->index;
                  (yyval.expresscomm_val)->type = (yyvsp[0].expression_val)->type;
                  (yyval.expresscomm_val)->name = (yyvsp[0].expression_val)->name;
                  (yyval.expresscomm_val)->resultID = (yyvsp[0].expression_val)->resultID;
                  delete (yyvsp[0].expression_val);
               }
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 983 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.expresscomm_val) = new expresscomm_struct();
                  ostringstream os;
                  os << (yyvsp[-2].expression_val)->code;
                  os << (yyvsp[0].expresscomm_val)->code;
                  (yyval.expresscomm_val)->code = os.str();
                  (yyval.expresscomm_val)->index = (yyvsp[-2].expression_val)->index;
                  (yyval.expresscomm_val)->type = (yyvsp[-2].expression_val)->type;
                  (yyval.expresscomm_val)->name = (yyvsp[-2].expression_val)->name;
                  (yyval.expresscomm_val)->resultID = (yyvsp[-2].expression_val)->resultID;
                  delete (yyvsp[-2].expression_val);
                }
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2587 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 997 "mini_l.y" /* yacc.c:1906  */


int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r\n");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}
