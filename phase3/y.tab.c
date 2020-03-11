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
 };
 struct stathelp_struct {
    string code;
 };
 struct statline_struct {
    string code;
 };
 struct declaration_struct {
    string code;
 };
 struct decline_struct {
    string code;
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
 };
 struct term_struct {
    string code;
    string resultID;
 };
 struct term1_struct {
    string code;
    string resultID;
 };
 struct expression_struct {
    string code;
    string resultID;
 };
 struct exprhelper_struct{
    string code;
    string resultID;
    string operand;
    string op;
 };
 struct expresscomm_struct {
    string code;
 };
 struct multiplicativeexp_struct {
    string code;
    string resultID;
 };
 struct multiphelper_struct{
    string code;
    string resultID;
    string operand;
    string op;
 };
 struct var_struct {
    string code;
    string resultID;
 };
 struct varline_struct {
    string code;
    string resultID;
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
 string createTemp(){
    return "__temp__" + to_string(tempCounter++);
 }

#line 173 "y.tab.c" /* yacc.c:339  */

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
#line 108 "mini_l.y" /* yacc.c:355  */

  int ival;
  char* sval;
  struct program_struct *program_val;
  struct function_struct *function_val;
  struct statement_struct *statement_val;
  struct stathelp_struct *stathelp_val;
  struct statline_struct *statline_val;
  struct declaration_struct *declaration_val;
  struct decline_struct *decline_val;
  struct boolexp_struct *boolexp_struct_val;
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

#line 291 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 308 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

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
       0,   167,   167,   168,   178,   192,   193,   200,   203,   212,
     215,   226,   235,   245,   246,   247,   248,   249,   256,   263,
     264,   267,   268,   271,   281,   291,   294,   305,   306,   309,
     310,   312,   313,   316,   317,   318,   319,   322,   323,   324,
     325,   326,   327,   330,   340,   353,   368,   378,   391,   404,
     419,   429,   430,   433,   443,   453,   456,   465,   468,   469
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
  "number", "decline", "identifier", "statement", "stathelp", "varline",
  "statline", "boolexp", "relationandexpr", "relationexpr",
  "relationhelper", "comp", "expression", "multiplicativeexp", "term",
  "term1", "var", "expresscomm", YY_NULLPTR
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

#define YYPACT_NINF -30

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-30)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,     8,    38,    31,   -30,    42,   -30,   -30,    53,     8,
      56,    59,    10,     8,    63,     8,    11,   -30,     8,   -30,
     -30,    85,    75,    67,   113,   -30,    98,    58,   110,    80,
      80,     8,     8,   -30,    12,   107,     8,   119,   132,   137,
     130,   139,   105,   -30,   -30,    80,    21,   -30,     5,   131,
     118,   120,   -30,    54,    29,   -30,   -30,   -30,   128,   -30,
     142,   -30,    12,    68,    58,   138,    12,    58,   -30,    12,
     -30,   -30,   117,    88,   -30,    12,    58,    80,    80,    12,
      12,   -30,   -30,   -30,   -30,   -30,   -30,    12,    12,    12,
      12,    58,     8,    -2,   133,    67,   -13,   -30,    68,   -30,
     -30,    -9,   121,   136,   -30,   -30,    29,    29,    68,   -30,
     -30,   -30,   135,   -30,   140,   150,   -30,    12,   -30,    58,
     143,   -30,    80,    80,   -30,   -30,   -30,   -30,   151,     8,
     146,    12,   -17,    58,   141,   -30
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     2,    11,     0,     1,     3,     0,     9,
       0,     0,     0,     9,     0,     0,     0,    10,     9,     5,
       6,     0,     0,     0,     0,     8,     0,    25,     0,     0,
       0,     0,     0,    19,     0,     0,     0,    56,     0,     0,
       0,     0,     0,    34,    35,     0,     0,    54,    56,     0,
      27,    29,    32,     0,    43,    46,    50,    53,     0,    17,
      23,    18,     0,    20,    25,     0,     0,    25,     4,     0,
       7,    31,     0,     0,    51,     0,    25,     0,     0,     0,
       0,    41,    40,    39,    42,    37,    38,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,    12,    36,
      55,    58,     0,    21,    28,    30,    44,    45,    33,    47,
      48,    49,     0,    24,     0,     0,    57,     0,    52,    25,
       0,    14,     0,     0,    59,    22,    13,    15,     0,     0,
       0,     0,     0,    25,     0,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -30,   164,   -30,   153,   -19,     0,    -1,   -30,   -30,   -27,
      -8,   -29,    91,   -30,   129,   -30,   -25,    44,   -10,   124,
     -21,    55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    10,    47,    11,    48,    38,   120,    59,
      39,    49,    50,    51,    52,    87,    53,    54,    55,    56,
      57,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,    58,   116,   117,    26,    61,    40,   133,    12,    63,
      60,    60,    12,    17,    12,    65,    72,    12,    22,    66,
      73,    20,    15,    16,    79,    80,    37,    21,    79,    80,
      37,    37,    79,    80,     1,    37,   100,    93,     6,    79,
      80,    96,    75,    40,    98,    37,    40,     4,   104,    62,
     101,     4,    25,     8,    46,    40,    94,     9,    62,    97,
       4,    25,   108,    37,    14,   113,    37,    13,   103,    18,
      40,    60,    88,    89,    90,    37,   115,    29,   109,   110,
     111,    30,    24,   112,    31,    32,    33,    34,    35,    36,
      37,    37,   101,   127,   128,    79,    80,     4,    40,    23,
      81,    82,    83,    84,    85,    86,   132,    25,   130,    79,
      80,   125,    40,    28,    42,    43,    44,    45,    37,     4,
      25,    27,    46,   106,   107,   134,   100,    41,    37,    79,
      80,    64,    37,    66,    81,    82,    83,    84,    85,    86,
      43,    44,    45,    67,     4,    25,    68,    46,    69,    70,
      77,    76,    91,    78,    92,    99,    95,   119,   114,   118,
     121,   123,   129,   122,   131,   126,   135,     7,    19,   105,
      74,    71,   124
};

static const yytype_uint8 yycheck[] =
{
       1,    30,    15,    12,    23,    32,    27,    24,     9,    34,
      31,    32,    13,    13,    15,    36,    45,    18,    18,    14,
      45,    10,    12,    13,    41,    42,    27,    16,    41,    42,
      31,    32,    41,    42,     3,    36,    38,    62,     0,    41,
      42,    66,    37,    64,    69,    46,    67,    39,    77,    37,
      75,    39,    40,    11,    42,    76,    64,     4,    37,    67,
      39,    40,    87,    64,     5,    92,    67,    11,    76,     6,
      91,    92,    43,    44,    45,    76,    95,    19,    88,    89,
      90,    23,     7,    91,    26,    27,    28,    29,    30,    31,
      91,    92,   117,   122,   123,    41,    42,    39,   119,    14,
      46,    47,    48,    49,    50,    51,   131,    40,   129,    41,
      42,   119,   133,    15,    34,    35,    36,    37,   119,    39,
      40,     8,    42,    79,    80,   133,    38,    17,   129,    41,
      42,    24,   133,    14,    46,    47,    48,    49,    50,    51,
      35,    36,    37,    11,    39,    40,     9,    42,    18,    10,
      32,    20,    24,    33,    12,    38,    18,    21,    25,    38,
      25,    11,    11,    23,    18,    22,    25,     3,    15,    78,
      46,    42,   117
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    54,    39,    58,     0,    53,    11,     4,
      55,    57,    58,    11,     5,    12,    13,    57,     6,    55,
      10,    16,    57,    14,     7,    40,    56,     8,    15,    19,
      23,    26,    27,    28,    29,    30,    31,    58,    59,    62,
      72,    17,    34,    35,    36,    37,    42,    56,    58,    63,
      64,    65,    66,    68,    69,    70,    71,    72,    63,    61,
      72,    61,    37,    68,    24,    72,    14,    11,     9,    18,
      10,    66,    63,    68,    71,    37,    20,    32,    33,    41,
      42,    46,    47,    48,    49,    50,    51,    67,    43,    44,
      45,    24,    12,    68,    62,    18,    68,    62,    68,    38,
      38,    68,    73,    62,    63,    64,    69,    69,    68,    70,
      70,    70,    62,    61,    25,    56,    15,    12,    38,    21,
      60,    25,    23,    11,    73,    62,    22,    63,    63,    11,
      72,    18,    68,    24,    62,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    55,    55,    55,    56,    57,
      57,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    71,    72,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     3,     3,     8,     1,     0,
       3,     1,     3,     6,     5,     6,    13,     2,     2,     1,
       2,     0,     2,     1,     3,     0,     3,     1,     3,     1,
       3,     2,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     4,     1,     1,     3,     1,     4,     1,     3
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
#line 167 "mini_l.y" /* yacc.c:1646  */
    {(yyval.program_val) = new program_struct();}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 168 "mini_l.y" /* yacc.c:1646  */
    {
            (yyval.program_val) = new program_struct(); 
            ostringstream os;
            os << (yyvsp[-1].function_val)->code << (yyvsp[0].program_val)->code;
            (yyval.program_val) ->code = os.str();
            cout << (yyval.program_val)->code;
            }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 178 "mini_l.y" /* yacc.c:1646  */
    {  
               ostringstream os;
               (yyval.function_val) = new function_struct();
               os << "func " << (yyvsp[-10].identifier_val)->code<<endl;
               os << (yyvsp[-7].decline_val)->code << (yyvsp[-4].decline_val)->code;
               os << (yyvsp[-1].statline_val)->code << "endfunc\n";
               delete (yyvsp[-10].identifier_val);
               delete (yyvsp[-7].decline_val);
               delete (yyvsp[-4].decline_val);
               delete (yyvsp[-1].statline_val);
               (yyval.function_val)->code = os.str();
            }
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 192 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration -> identifier COMMA declaration\n");}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 193 "mini_l.y" /* yacc.c:1646  */
    {  
                  ostringstream os;
                  (yyval.declaration_val) = new declaration_struct();
                  os << ". " << (yyvsp[-2].identifier_val)->code << endl;
                  delete (yyvsp[-2].identifier_val);
                  (yyval.declaration_val)->code = os.str();
               }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 200 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration -> identifier COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER\n");}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 203 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.number_val) = new number_struct();
               ostringstream os; 
               os << (yyvsp[0].ival);
               (yyval.number_val)->code = os.str();
               (yyval.number_val)->resultID = os.str();
            }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 212 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.decline_val) = new decline_struct();
            }
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 216 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.decline_val) = new decline_struct();
               ostringstream os;
               os << (yyvsp[-2].declaration_val)->code << (yyvsp[0].decline_val)->code;
               delete (yyvsp[-2].declaration_val);
               delete (yyvsp[0].decline_val);
               (yyval.decline_val)->code = os.str();
            }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 226 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.identifier_val) = new identifier_struct;
                  ostringstream os; 
                  os << (yyvsp[0].sval);
                  (yyval.identifier_val)->code = os.str();
                  (yyval.identifier_val)->resultID = os.str();
               }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 235 "mini_l.y" /* yacc.c:1646  */
    {  
               (yyval.statement_val) = new statement_struct();
               ostringstream os;
               //os <<  $1->code;
               os <<  (yyvsp[0].expression_val)->code << endl;
               os << "= " << (yyvsp[-2].var_val)->resultID << ", " << (yyvsp[0].expression_val)->resultID << endl;
               delete (yyvsp[-2].var_val);
               delete (yyvsp[0].expression_val);
               (yyval.statement_val)->code = os.str();
            }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 245 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> IF boolexp THEN statline stathelp ENDIF\n");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 246 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> WHILE boolexp BEGINLOOP statline ENDLOOP\n");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 247 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> DO BEGINLOOP statline ENDLOOP WHILE boolexp\n");}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 248 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> FOR var ASSIGN number SEMICOLON boolexp SEMICOLON var ASSIGN expression BEGINLOOP statline ENDLOOP\n");}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 249 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val) = new statement_struct();
               ostringstream os;
               os << ".< " << (yyvsp[0].varline_val)->resultID << endl;
               delete (yyvsp[0].varline_val);
               (yyval.statement_val)->code = os.str();
            }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 256 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statement_val) = new statement_struct();
               ostringstream os;
               os << ".> " << (yyvsp[0].varline_val)->code<< endl;
               (yyval.statement_val)->code = os.str();
               delete (yyvsp[0].varline_val);
               }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 263 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> CONTINUE\n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 264 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> RETURN expression\n");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 268 "mini_l.y" /* yacc.c:1646  */
    {printf("stathelp -> ELSE statline\n");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 271 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.varline_val) = new varline_struct();
               ostringstream os;
               os << (yyvsp[0].var_val)->code;
               ostringstream os1;
               os1 << (yyvsp[0].var_val)->resultID;
               (yyval.varline_val)->resultID = os1.str();
               delete (yyvsp[0].var_val);
               (yyval.varline_val)->code = os.str();
            }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 281 "mini_l.y" /* yacc.c:1646  */
    {    
               (yyval.varline_val) = new varline_struct();
               ostringstream os;
               os << (yyvsp[-2].var_val)->code << (yyvsp[0].varline_val)->code;
               delete (yyvsp[-2].var_val);
               delete (yyvsp[0].varline_val);
               (yyval.varline_val)->code = os.str();
               }
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 291 "mini_l.y" /* yacc.c:1646  */
    { 
                                                      (yyval.statline_val) = new statline_struct();
                                                   }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 294 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.statline_val) = new statline_struct();
               ostringstream os;
               os << (yyvsp[-2].statement_val)->code;
               os << (yyvsp[0].statline_val)->code;
               delete (yyvsp[-2].statement_val);
               delete (yyvsp[0].statline_val);
               (yyval.statline_val)->code = os.str();
            }
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 305 "mini_l.y" /* yacc.c:1646  */
    {printf("boolexp -> relationandexpr\n");}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 306 "mini_l.y" /* yacc.c:1646  */
    {printf("boolexp -> relationandexpr OR boolexp\n");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 309 "mini_l.y" /* yacc.c:1646  */
    {printf("relationandexpr -> relationexpr\n");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 310 "mini_l.y" /* yacc.c:1646  */
    {printf("relationandexpr -> relationexpr OR relationandexpr\n");}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 312 "mini_l.y" /* yacc.c:1646  */
    {printf("relationexpr -> NOT relationhelper\n");}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 313 "mini_l.y" /* yacc.c:1646  */
    {printf("relationexpr -> relationhelper\n");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 316 "mini_l.y" /* yacc.c:1646  */
    {printf("relationhelper -> expression comp expression\n");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 317 "mini_l.y" /* yacc.c:1646  */
    {printf("relationhelper -> TRUE\n");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 318 "mini_l.y" /* yacc.c:1646  */
    {printf("relationhelper -> FALSE\n");}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 319 "mini_l.y" /* yacc.c:1646  */
    {printf("relationhelper -> L_PAREN boolexp R_PAREN\n");}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 322 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> EQ\n");}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 323 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> NEQ\n");}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 324 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> LT\n");}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 325 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> GT\n");}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 326 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> LTE\n");}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 327 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> GTE\n");}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 330 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.expression_val) = new expression_struct();
                  ostringstream os;
                  os << (yyvsp[0].multiplicativeexp_val)->code;
                  (yyval.expression_val)->code = os.str();
                  ostringstream os1;
                  os1 << (yyvsp[0].multiplicativeexp_val)->resultID;
                  delete (yyvsp[0].multiplicativeexp_val);
                  (yyval.expression_val)->resultID = os1.str();
               }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 340 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.expression_val) = new expression_struct();
                     ostringstream os;
                     string temp2 = createTemp();
                     os << (yyvsp[-2].expression_val)->code << endl;
                     os << (yyvsp[0].multiplicativeexp_val)->code << endl;
                     os << ". " << temp2 << endl;
                     os << "+ " << temp2 << ", " << (yyvsp[-2].expression_val)->resultID << ", " << (yyvsp[0].multiplicativeexp_val)->resultID;
                     delete (yyvsp[-2].expression_val);
                     delete (yyvsp[0].multiplicativeexp_val);
                     (yyval.expression_val)->resultID = temp2;
                     (yyval.expression_val)->code = os.str();
                  }
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 353 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.expression_val) = new expression_struct();
                     ostringstream os;
                     string temp2 = createTemp();
                     os << (yyvsp[-2].expression_val)->code << endl;
                     os << (yyvsp[0].multiplicativeexp_val)->code << endl;
                     os << ". " << temp2 << endl;
                     os << "- " << temp2 << ", " << (yyvsp[-2].expression_val)->resultID << ", " << (yyvsp[0].multiplicativeexp_val)->resultID;
                     delete (yyvsp[-2].expression_val);
                     delete (yyvsp[0].multiplicativeexp_val);
                     (yyval.expression_val)->resultID = temp2;
                     (yyval.expression_val)->code = os.str();
                  }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 368 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.multiplicativeexp_val) = new multiplicativeexp_struct();
                        ostringstream os;
                        os << (yyvsp[0].term_val)->code;
                        (yyval.multiplicativeexp_val)->code = os.str();
                        ostringstream os1;
                        os1 << (yyvsp[0].term_val)->resultID;
                        delete (yyvsp[0].term_val);
                        (yyval.multiplicativeexp_val)->resultID = os1.str();
                     }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 378 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.multiplicativeexp_val) = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << (yyvsp[-2].multiplicativeexp_val)->code << endl;
                        os << (yyvsp[0].term_val)->code << endl;
                        os << ". " << temp2 << endl;
                        os << "* " << temp2 << ", " << (yyvsp[-2].multiplicativeexp_val)->resultID << ", " << (yyvsp[0].term_val)->resultID;
                        delete (yyvsp[-2].multiplicativeexp_val);
                        delete (yyvsp[0].term_val);
                        (yyval.multiplicativeexp_val)->resultID = temp2;
                        (yyval.multiplicativeexp_val)->code = os.str();
                    }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 391 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.multiplicativeexp_val) = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << (yyvsp[-2].multiplicativeexp_val)->code << endl;
                        os << (yyvsp[0].term_val)->code << endl;
                        os << ". " << temp2 << endl;
                        os << "/ " << temp2 << ", " << (yyvsp[-2].multiplicativeexp_val)->resultID << ", " << (yyvsp[0].term_val)->resultID;
                        delete (yyvsp[-2].multiplicativeexp_val);
                        delete (yyvsp[0].term_val);
                        (yyval.multiplicativeexp_val)->resultID = temp2;
                        (yyval.multiplicativeexp_val)->code = os.str();
                    }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 404 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.multiplicativeexp_val) = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << (yyvsp[-2].multiplicativeexp_val)->code << endl;
                        os << (yyvsp[0].term_val)->code << endl;
                        os << ". " << temp2 << endl;
                        os << "% " << temp2 << ", " << (yyvsp[-2].multiplicativeexp_val)->resultID << ", " << (yyvsp[0].term_val)->resultID;
                        delete (yyvsp[-2].multiplicativeexp_val);
                        delete (yyvsp[0].term_val);
                        (yyval.multiplicativeexp_val)->resultID = temp2;
                        (yyval.multiplicativeexp_val)->code = os.str();
                    }
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 419 "mini_l.y" /* yacc.c:1646  */
    {
                     (yyval.term_val) = new term_struct();
                     ostringstream os;
                     os << (yyvsp[0].term1_val)->code;
                     (yyval.term_val)->code = os.str();
                     ostringstream os1;
                     os1 << (yyvsp[0].term1_val)->resultID;
                     delete (yyvsp[0].term1_val);
                     (yyval.term_val)->resultID = os1.str();
            }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 429 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> SUB term1\n");}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 430 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> identifier L_PAREN expresscomm R_PAREN\n");}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 433 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.term1_val) = new term1_struct();
               string temp = createTemp();
               ostringstream os;
               os << ". " << temp << endl;
               os << "= " << temp << ", " << (yyvsp[0].var_val)->resultID;
               delete (yyvsp[0].var_val);
               (yyval.term1_val)->code = os.str();
               (yyval.term1_val)->resultID = temp;
            }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 443 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.term1_val) = new term1_struct();
               ostringstream os;
               string temp = createTemp();
               os << ". " << temp << endl;
               os << "= " << temp << ", " << (yyvsp[0].number_val)->resultID;
               delete (yyvsp[0].number_val);
               (yyval.term1_val)->code = os.str();
               (yyval.term1_val)->resultID = temp;
            }
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 453 "mini_l.y" /* yacc.c:1646  */
    {printf("term1 -> L_PAREN expression R_PAREN\n");}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 456 "mini_l.y" /* yacc.c:1646  */
    {
               (yyval.var_val) = new var_struct();
               ostringstream os;
               os << (yyvsp[0].identifier_val)->resultID;
               (yyval.var_val)->code = os.str();
               ostringstream os1;
               os1 << (yyvsp[0].identifier_val)->resultID;
               (yyval.var_val)->resultID = os1.str();
            }
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 465 "mini_l.y" /* yacc.c:1646  */
    {printf("var -> identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 468 "mini_l.y" /* yacc.c:1646  */
    {printf("expresscomm -> expression\n");}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 469 "mini_l.y" /* yacc.c:1646  */
    {printf("expresscomm -> expression COMMA expresscomm\n");}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2029 "y.tab.c" /* yacc.c:1646  */
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
#line 472 "mini_l.y" /* yacc.c:1906  */


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
