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
#line 1 "parser.yy" /* yacc.c:339  */

	#include <bits/stdc++.h>
	#include "goal.h"
	#include "block.h"
	#include "stmt.h"
	using namespace std;
	extern "C" int yylex();
	void yyerror(const char *s);
	extern FILE *yyin;
	extern int yyparse();
	extern union Node yylval;
	class Goal* root = NULL;

#line 80 "parser.tab.cc" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hh".  */
#ifndef YY_YY_PARSER_TAB_HH_INCLUDED
# define YY_YY_PARSER_TAB_HH_INCLUDED
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
    UNSIGNED_INT = 258,
    UNSIGNED_LONG = 259,
    INT = 260,
    BOOL = 261,
    CHAR = 262,
    LONG = 263,
    STRING = 264,
    RETURN = 265,
    BREAK = 266,
    READ = 267,
    WRITE = 268,
    CLOSE = 269,
    CONTINUE = 270,
    FOR = 271,
    WHILE = 272,
    IF = 273,
    ELSE = 274,
    ELSEIF = 275,
    VOID = 276,
    TRUE = 277,
    FALSE = 278,
    UNSIGNED_INT_VALUE = 279,
    SIGNED_INT_VALUE = 280,
    CHAR_VALUE = 281,
    STRING_VALUE = 282,
    VARIABLE_NAME = 283,
    IMPORT = 284,
    QUESTION_MARK = 285,
    COLON = 286,
    COMMA = 287,
    OPN_BRKT = 288,
    CLOSE_BRKT = 289,
    OPN_SQ_BRKT = 290,
    CLOSE_SQ_BRKT = 291,
    OPN_CURLY_BRKT = 292,
    CLOSE_CURLY_BRKT = 293,
    SEMICOLON = 294,
    FILEREAD = 295,
    FILEWRITE = 296,
    LTEQ = 297,
    GTEQ = 298,
    LT = 299,
    GT = 300,
    DBL_EQ = 301,
    PLUS_EQ = 302,
    MINUS_EQ = 303,
    MULTIPLY_EQ = 304,
    DIVIDE_EQ = 305,
    MODULO_EQ = 306,
    PREINC = 307,
    POSTINC = 308,
    PREDEC = 309,
    POSTDEC = 310,
    PLUS = 311,
    MINUS = 312,
    MULTIPLY = 313,
    DIVIDE = 314,
    MODULO = 315,
    NOT_EQ = 316,
    EQ = 317,
    NOT = 318,
    OR = 319,
    AND = 320,
    CLOSE_CLURLY_BRKT = 321
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "parser.tab.cc" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   677

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      67,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,    96,    97,    98,   101,   102,   103,   107,
     108,   111,   112,   115,   116,   120,   123,   124,   125,   126,
     129,   130,   131,   134,   135,   136,   137,   138,   141,   142,
     143,   144,   145,   148,   149,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   163,   164,   165,   166,   167,   168,
     169,   172,   173,   176,   177,   181,   182,   183,   186,   189,
     190,   191,   194,   195,   196,   197,   200,   203,   204,   205,
     208,   211,   212,   213,   214,   215,   216,   217,   220,   224,
     225,   228,   229,   232,   233,   234,   237,   238,   241,   242,
     243,   246,   247,   248,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   264,   268,   269,   270,   274,   275,
     278,   279,   282,   283,   286,   287,   290,   291,   292,   293,
     294,   295,   298,   299,   302,   303,   306,   307,   310,   311,
     312,   316,   317,   318,   319,   320,   323,   324,   327,   328,
     331,   332
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNSIGNED_INT", "UNSIGNED_LONG", "INT",
  "BOOL", "CHAR", "LONG", "STRING", "RETURN", "BREAK", "READ", "WRITE",
  "CLOSE", "CONTINUE", "FOR", "WHILE", "IF", "ELSE", "ELSEIF", "VOID",
  "TRUE", "FALSE", "UNSIGNED_INT_VALUE", "SIGNED_INT_VALUE", "CHAR_VALUE",
  "STRING_VALUE", "VARIABLE_NAME", "IMPORT", "QUESTION_MARK", "COLON",
  "COMMA", "OPN_BRKT", "CLOSE_BRKT", "OPN_SQ_BRKT", "CLOSE_SQ_BRKT",
  "OPN_CURLY_BRKT", "CLOSE_CURLY_BRKT", "SEMICOLON", "FILEREAD",
  "FILEWRITE", "LTEQ", "GTEQ", "LT", "GT", "DBL_EQ", "PLUS_EQ", "MINUS_EQ",
  "MULTIPLY_EQ", "DIVIDE_EQ", "MODULO_EQ", "PREINC", "POSTINC", "PREDEC",
  "POSTDEC", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULO", "NOT_EQ",
  "EQ", "NOT", "OR", "AND", "CLOSE_CLURLY_BRKT", "'\\n'", "$accept",
  "Goal", "choose", "import_", "filename", "declist", "dec", "vardec",
  "vardeclist", "array", "element", "values", "boolval", "varinit",
  "vartype", "file_operation", "fundec", "return_type", "params",
  "paramlist", "arg_type", "block", "blockstmts", "continuestmt", "stmt",
  "returnstmt", "stmtlist", "exprstmt", "selectstmt", "else_if",
  "loopstmt", "assign_expr", "inc_or_dec_expr", "breakstmt", "expr",
  "simple_expr", "and_expr", "not_expr", "rel_expr", "relop", "sum_expr",
  "sumop", "term", "mulop", "flw_term", "after_ID", "follow", "args", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    10
};
# endif

#define YYPACT_NINF -188

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-188)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -25,    -2,    55,   180,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,   113,     3,  -188,    27,    38,
      49,  -188,  -188,  -188,  -188,  -188,  -188,  -188,    46,   599,
     245,  -188,    74,   142,  -188,  -188,  -188,  -188,    -9,    80,
    -188,   219,  -188,  -188,  -188,  -188,    -6,  -188,  -188,   105,
    -188,  -188,  -188,  -188,   553,  -188,  -188,  -188,  -188,  -188,
      -7,   100,   109,  -188,  -188,   116,    62,   256,  -188,  -188,
      30,   599,   599,   576,   599,  -188,    34,  -188,   306,  -188,
     355,   131,   176,  -188,  -188,    -2,  -188,    97,   174,     8,
     154,   196,  -188,   599,  -188,    -9,    -9,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,   329,   329,  -188,  -188,  -188,
     329,   599,   599,   599,   599,   599,   599,   195,   169,   208,
     199,   120,   181,  -188,   209,   160,    70,  -188,   404,  -188,
     230,    -2,  -188,   394,    42,   210,   208,  -188,    90,   394,
      60,   109,  -188,    91,    62,  -188,   209,   209,   209,   209,
     209,   209,   599,   182,   599,   220,   220,   599,  -188,   211,
    -188,   225,   231,   236,   240,  -188,   227,   239,   241,   244,
     246,  -188,   258,    71,  -188,   209,   242,   599,   209,   599,
      20,  -188,   161,   209,   599,  -188,    -2,   257,   260,   220,
     394,   266,   284,   312,  -188,  -188,  -188,   265,   -11,  -188,
     220,   209,   209,   622,   220,   247,  -188,    75,   286,   553,
     289,  -188,  -188,   302,   253,   299,   301,  -188,   265,    69,
     424,  -188,  -188,   220,   304,   256,  -188,   599,  -188,   303,
     454,   308,   305,   313,  -188,  -188,    96,   125,  -188,  -188,
     220,   184,   553,   311,   213,  -188,  -188,   318,   326,  -188,
    -188,   220,   504,    -2,   328,   331,   265,   348,   341,   342,
    -188,  -188,   137,   356,    -2,   345,  -188,   220,   351,  -188,
    -188,   347,  -188
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     0,    10,     9,     7,     1,    44,    45,
      46,    47,    48,    49,    50,     0,     0,    70,     0,     0,
       0,    55,    33,    34,    29,    28,    31,    32,   132,     0,
       0,    82,     0,     0,   102,   100,   103,   101,     0,     0,
       2,     3,    12,    13,   131,    30,     0,    72,    14,     0,
       4,    76,    80,    77,     5,    71,    74,    73,   105,    75,
       0,   106,   109,   111,   113,   115,   123,   127,    78,   104,
      93,     0,     0,     0,     0,   134,     0,    67,     0,    66,
       0,     0,     0,   112,   127,     0,    11,    35,     0,     0,
      17,     0,    79,     0,    81,     0,     0,   116,   119,   117,
     118,   120,   124,   125,   121,     0,     0,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,   133,   141,     0,     0,   135,     0,    69,
       0,     0,     6,    61,     0,    56,     0,    15,     0,    61,
       0,   108,   110,   114,   122,   126,    95,    96,    97,    98,
      99,    94,     0,     0,     0,     0,     0,     0,   137,   139,
      68,     0,     0,     0,     0,    58,    60,     0,     0,    36,
       0,    16,     0,    27,    18,    19,     0,     0,    91,     0,
       0,    88,    85,   140,     0,   136,     0,     0,    62,     0,
      61,    41,    38,     0,    57,    20,    24,    27,     0,    23,
       0,   107,    92,     0,     0,     0,    84,     0,     0,     0,
       0,    53,    59,     0,     0,     0,     0,    37,    27,     0,
       0,    21,    54,     0,     0,     0,    83,     0,   138,     0,
       0,    63,     0,     0,    43,    40,     0,     0,    25,    90,
       0,     0,     0,     0,     0,    42,    39,     0,     0,    22,
      89,     0,     0,     0,     0,     0,    27,    87,     0,     0,
      65,    64,     0,     0,     0,     0,    26,     0,     0,    52,
      86,     0,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,  -188,  -188,   -82,   357,   -21,  -188,   254,  -188,
    -187,  -167,  -188,   -58,   -59,  -188,  -188,  -188,   250,   201,
    -188,  -148,  -188,  -188,   -52,  -188,   -30,   377,  -188,   147,
    -188,  -188,   202,  -188,   -28,  -188,   316,   -29,  -188,  -188,
     307,  -188,   300,  -188,   -33,  -188,  -188,  -188
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    40,     3,     6,    41,    42,    43,    89,   174,
     198,    44,    45,    90,    46,    47,    48,    49,   164,   165,
     166,    50,    79,    51,    52,    53,    54,    55,    56,   206,
      57,   120,    58,    59,    60,    61,    62,    63,    64,   105,
      65,   106,    66,   110,    67,    75,   185,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      80,    76,    92,   132,     1,    84,   199,   181,   182,    83,
     219,   119,   118,    22,    23,    24,    25,    26,    27,    28,
      86,   220,    87,    93,    29,     4,     5,   221,    92,    88,
     199,   236,    94,     8,     9,    10,    11,    12,    13,    14,
     136,   211,    69,   121,   122,   124,   126,   137,   128,   162,
      93,   199,   222,   238,    38,     7,   226,    86,   117,   203,
      70,   153,    84,    84,    93,   140,   167,   142,   127,   262,
     168,    71,    84,    84,   163,   239,    92,   145,   169,    73,
     163,    74,    72,   146,   147,   148,   149,   150,   151,   199,
      93,   177,   250,    22,    23,    24,    25,    26,    27,   196,
      93,   220,    81,   257,   208,    93,   159,   237,   197,    85,
     175,   228,    22,    23,    24,    25,    26,    27,    28,   270,
     107,   108,   109,    29,   178,   172,   180,   173,   220,   183,
     133,   163,   134,    91,   247,    22,    23,    24,    25,    26,
      27,    28,    34,    35,    36,    37,    29,   102,   103,   201,
      93,   202,    31,    38,   155,    82,   207,   248,    97,    98,
      99,   100,   101,   249,    95,    34,    35,    36,    37,   220,
     225,   259,   102,   103,    96,   266,    38,   104,    92,   230,
     204,   205,   268,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   157,   130,   158,    17,    18,    19,    20,   241,
      92,    21,    22,    23,    24,    25,    26,    27,    28,   131,
     135,    93,   252,    29,    93,   156,   138,    30,   251,    31,
      32,    33,     8,     9,    10,    11,    12,    13,    14,   139,
     134,   152,    34,    35,    36,    37,   117,   254,   154,    93,
      21,   255,   161,    38,   179,   170,   184,    39,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    30,   186,   190,
      17,    18,    19,    20,   188,   187,    21,    22,    23,    24,
      25,    26,    27,    28,   189,   191,   200,   192,    29,   193,
     227,   233,   194,    77,    31,    32,    33,    22,    23,    24,
      25,    26,    27,   196,   195,   210,   209,    34,    35,    36,
      37,   213,   218,   111,   112,   113,   114,   115,    38,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   116,   214,
     229,    17,    18,    19,    20,   231,   232,    21,    22,    23,
      24,    25,    26,    27,    28,   234,   215,   235,   240,    29,
     216,   245,   242,   244,   253,    31,    32,    33,   217,   246,
     248,    22,    23,    24,    25,    26,    27,    28,    34,    35,
      36,    37,    29,   256,   260,    15,    16,   261,   205,    38,
      17,    18,    19,    20,   264,   267,   265,    22,    23,    24,
      25,    26,    27,    28,   269,   271,   272,    78,    29,   176,
     171,   212,    68,   129,    31,    32,    33,     8,     9,    10,
      11,    12,    13,    14,   263,   224,   144,    34,    35,    36,
      37,   141,   143,     0,    15,    16,     0,     0,    38,    17,
      18,    19,    20,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    29,     0,     0,
       0,     0,   160,    31,    32,    33,    22,    23,    24,    25,
      26,    27,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,     0,    15,    16,     0,    38,   243,    17,
      18,    19,    20,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,     0,    15,    16,     0,    38,   258,    17,
      18,    19,    20,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,    15,    16,     0,     0,    38,    17,    18,
      19,    20,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,    31,    32,    33,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    34,    35,    36,    37,    29,
     123,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    34,    35,
      36,    37,    29,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    34,    35,    36,    37,    29,   223,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37
};

static const yytype_int16 yycheck[] =
{
      30,    29,    54,    85,    29,    38,   173,   155,   156,    38,
     197,    70,    70,    22,    23,    24,    25,    26,    27,    28,
      41,    32,    28,    30,    33,    27,    28,    38,    80,    35,
     197,   218,    39,     3,     4,     5,     6,     7,     8,     9,
      32,   189,    39,    71,    72,    73,    74,    39,    78,   131,
      30,   218,   200,   220,    63,     0,   204,    78,    28,    39,
      33,   119,    95,    96,    30,    93,    24,    96,    34,   256,
      28,    33,   105,   106,   133,   223,   128,   110,    36,    33,
     139,    35,    33,   111,   112,   113,   114,   115,   116,   256,
      30,    31,   240,    22,    23,    24,    25,    26,    27,    28,
      30,    32,    28,   251,   186,    30,    36,    38,    37,    29,
     138,    36,    22,    23,    24,    25,    26,    27,    28,   267,
      58,    59,    60,    33,   152,    35,   154,    37,    32,   157,
      33,   190,    35,    28,    38,    22,    23,    24,    25,    26,
      27,    28,    52,    53,    54,    55,    33,    56,    57,   177,
      30,   179,    39,    63,    34,    13,   184,    32,    42,    43,
      44,    45,    46,    38,    64,    52,    53,    54,    55,    32,
     203,   253,    56,    57,    65,    38,    63,    61,   230,   209,
      19,    20,   264,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    32,    62,    34,    15,    16,    17,    18,   227,
     252,    21,    22,    23,    24,    25,    26,    27,    28,    33,
      36,    30,   242,    33,    30,    34,    62,    37,    34,    39,
      40,    41,     3,     4,     5,     6,     7,     8,     9,    33,
      35,    62,    52,    53,    54,    55,    28,    24,    39,    30,
      21,    28,    12,    63,    62,    35,    35,    67,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    37,    33,    32,
      15,    16,    17,    18,    28,    34,    21,    22,    23,    24,
      25,    26,    27,    28,    34,    36,    34,    36,    33,    35,
      33,    28,    36,    38,    39,    40,    41,    22,    23,    24,
      25,    26,    27,    28,    36,    35,    39,    52,    53,    54,
      55,    35,    37,    47,    48,    49,    50,    51,    63,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    62,    35,
      34,    15,    16,    17,    18,    36,    24,    21,    22,    23,
      24,    25,    26,    27,    28,    36,    24,    36,    34,    33,
      28,    36,    39,    35,    33,    39,    40,    41,    36,    36,
      32,    22,    23,    24,    25,    26,    27,    28,    52,    53,
      54,    55,    33,    37,    36,    10,    11,    36,    20,    63,
      15,    16,    17,    18,    33,    19,    34,    22,    23,    24,
      25,    26,    27,    28,    39,    34,    39,    30,    33,   139,
     136,   190,    15,    38,    39,    40,    41,     3,     4,     5,
       6,     7,     8,     9,   257,   203,   106,    52,    53,    54,
      55,    95,   105,    -1,    10,    11,    -1,    -1,    63,    15,
      16,    17,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    10,    11,    -1,    63,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    10,    11,    -1,    63,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    10,    11,    -1,    -1,    63,    15,    16,
      17,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    52,    53,    54,    55,    33,
      34,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    52,    53,
      54,    55,    33,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    52,    53,    54,    55,    33,    34,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    69,    71,    27,    28,    72,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    15,    16,    17,
      18,    21,    22,    23,    24,    25,    26,    27,    28,    33,
      37,    39,    40,    41,    52,    53,    54,    55,    63,    67,
      70,    73,    74,    75,    79,    80,    82,    83,    84,    85,
      89,    91,    92,    93,    94,    95,    96,    98,   100,   101,
     102,   103,   104,   105,   106,   108,   110,   112,    95,    39,
      33,    33,    33,    33,    35,   113,   102,    38,    73,    90,
      94,    28,    13,   105,   112,    29,    74,    28,    35,    76,
      81,    28,    92,    30,    39,    64,    65,    42,    43,    44,
      45,    46,    56,    57,    61,   107,   109,    58,    59,    60,
     111,    47,    48,    49,    50,    51,    62,    28,    81,    82,
      99,   102,   102,    34,   102,   115,   102,    34,    94,    38,
      62,    33,    72,    33,    35,    36,    32,    39,    62,    33,
     102,   104,   105,   108,   110,   112,   102,   102,   102,   102,
     102,   102,    62,    81,    39,    34,    34,    32,    34,    36,
      38,    12,    72,    82,    86,    87,    88,    24,    28,    36,
      35,    76,    35,    37,    77,   102,    86,    31,   102,    62,
     102,    89,    89,   102,    35,   114,    33,    34,    28,    34,
      32,    36,    36,    35,    36,    36,    28,    37,    78,    79,
      34,   102,   102,    39,    19,    20,    97,   102,    72,    39,
      35,    89,    87,    35,    35,    24,    28,    36,    37,    78,
      32,    38,    89,    34,   100,   112,    89,    33,    36,    34,
      94,    36,    24,    28,    36,    36,    78,    38,    79,    89,
      34,   102,    39,    14,    35,    36,    36,    38,    32,    38,
      89,    34,    94,    33,    24,    28,    37,    89,    14,    72,
      36,    36,    78,    97,    33,    34,    38,    19,    72,    39,
      89,    34,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    70,    70,    71,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    76,    76,    76,    76,
      77,    77,    77,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    84,    84,    85,    85,    85,    86,    87,
      87,    87,    88,    88,    88,    88,    89,    90,    90,    90,
      91,    92,    92,    92,    92,    92,    92,    92,    93,    94,
      94,    95,    95,    96,    96,    96,    97,    97,    98,    98,
      98,    99,    99,    99,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   101,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     4,     2,     0,     1,
       1,     2,     1,     1,     1,     3,     3,     1,     3,     3,
       2,     3,     5,     1,     1,     3,     7,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     4,     7,
       6,     4,     7,     6,     1,     1,     1,     1,     1,     1,
       1,    14,    12,     6,     6,     1,     3,     5,     1,     3,
       1,     0,     2,     4,     7,     7,     2,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     1,     7,     6,     5,     8,     5,     5,     9,
       8,     3,     4,     0,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     2,     1,     1,     5,     3,     1,
       3,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     4,     3,     3,     0,
       3,     1
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
#line 93 "parser.yy" /* yacc.c:1646  */
    { (yyval.goal) = new Goal((yyvsp[-1].import),(yyvsp[0].chs)); root = (yyval.goal);}
#line 1553 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 96 "parser.yy" /* yacc.c:1646  */
    { (yyval.chs) = new Choose((yyvsp[0].dclst));}
#line 1559 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 97 "parser.yy" /* yacc.c:1646  */
    { (yyval.chs) = new Choose((yyvsp[0].blck));}
#line 1565 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 98 "parser.yy" /* yacc.c:1646  */
    {(yyval.chs) = new Choose((yyvsp[0].stmtlst));}
#line 1571 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "parser.yy" /* yacc.c:1646  */
    { (yyval.import) = new Import((yyvsp[0].flnm),(yyvsp[-3].import));}
#line 1577 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 102 "parser.yy" /* yacc.c:1646  */
    { (yyval.import) = new Import((yyvsp[0].flnm));}
#line 1583 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 103 "parser.yy" /* yacc.c:1646  */
    { (yyval.import) = new Import();}
#line 1589 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 107 "parser.yy" /* yacc.c:1646  */
    {(yyval.flnm) = new FileName((yyvsp[0].value));}
#line 1595 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 108 "parser.yy" /* yacc.c:1646  */
    {(yyval.flnm) = new FileName((yyvsp[0].value));}
#line 1601 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "parser.yy" /* yacc.c:1646  */
    {(yyval.dclst) = new Declist((yyvsp[-1].dclst),(yyvsp[0].dc));}
#line 1607 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 112 "parser.yy" /* yacc.c:1646  */
    {(yyval.dclst) = new Declist((yyvsp[0].dc));}
#line 1613 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 115 "parser.yy" /* yacc.c:1646  */
    {(yyval.dc) = new Dec((yyvsp[0].vrdc));}
#line 1619 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "parser.yy" /* yacc.c:1646  */
    {(yyval.dc) = new Dec((yyvsp[0].fndc));}
#line 1625 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 120 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrdc) = new Vardec((yyvsp[-2].vrtyp),(yyvsp[-1].vrdclst));}
#line 1631 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 123 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrdclst) = new VarDecList((yyvsp[-2].vrdclst),(yyvsp[0].vrdclst));}
#line 1637 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 124 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrdclst) = new VarDecList((yyvsp[0].vrint));}
#line 1643 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 125 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrdclst) = new VarDecList((yyvsp[-2].vrint),(yyvsp[-1].value),(yyvsp[0].ary));}
#line 1649 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 126 "parser.yy" /* yacc.c:1646  */
    { (yyval.vrdclst) = new VarDecList((yyvsp[-2].vrint),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 1655 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 129 "parser.yy" /* yacc.c:1646  */
    {(yyval.ary) = new Array();}
#line 1661 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 130 "parser.yy" /* yacc.c:1646  */
    {(yyval.ary) = new Array((yyvsp[-1].elmt));}
#line 1667 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 131 "parser.yy" /* yacc.c:1646  */
    {(yyval.ary) = new Array((yyvsp[-2].elmt));}
#line 1673 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 134 "parser.yy" /* yacc.c:1646  */
    {(yyval.elmt) = new Element((yyvsp[0].vls));}
#line 1679 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 135 "parser.yy" /* yacc.c:1646  */
    {(yyval.elmt) = new Element((yyvsp[0].value));}
#line 1685 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 136 "parser.yy" /* yacc.c:1646  */
    {(yyval.elmt) = new Element((yyvsp[-2].elmt),(yyvsp[0].vls));}
#line 1691 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "parser.yy" /* yacc.c:1646  */
    {(yyval.elmt) = new Element((yyvsp[-5].elmt),(yyvsp[-1].elmt));}
#line 1697 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 138 "parser.yy" /* yacc.c:1646  */
    {(yyval.elmt) = new Element();}
#line 1703 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 141 "parser.yy" /* yacc.c:1646  */
    {(yyval.vls) = new Values((yyvsp[0].value),1);}
#line 1709 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 142 "parser.yy" /* yacc.c:1646  */
    {(yyval.vls) = new Values((yyvsp[0].value),0);}
#line 1715 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 143 "parser.yy" /* yacc.c:1646  */
    {(yyval.vls) = new Values((yyvsp[0].blvl));}
#line 1721 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 144 "parser.yy" /* yacc.c:1646  */
    {(yyval.vls) = new Values((yyvsp[0].value),3);}
#line 1727 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 145 "parser.yy" /* yacc.c:1646  */
    {(yyval.vls) = new Values((yyvsp[0].value),4);}
#line 1733 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 148 "parser.yy" /* yacc.c:1646  */
    {(yyval.blvl) = new Boolval((yyvsp[0].value));}
#line 1739 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 149 "parser.yy" /* yacc.c:1646  */
    {(yyval.blvl) = new Boolval((yyvsp[0].value));}
#line 1745 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 152 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[0].value));}
#line 1751 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 153 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[-2].value),1,0);}
#line 1757 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 154 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[-4].value),0,1);}
#line 1763 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 155 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[-3].value),1,0,(yyvsp[-1].value));}
#line 1769 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 156 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[-6].value),(yyvsp[-4].value),(yyvsp[-1].value));}
#line 1775 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 157 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[-5].value),0,1,(yyvsp[-1].value));}
#line 1781 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 158 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[-3].value),1,0,stoi((yyvsp[-1].value)));}
#line 1787 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 159 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[-6].value),stoi((yyvsp[-4].value)),stoi((yyvsp[-1].value)),1,0);}
#line 1793 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 160 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrint) = new VarInit((yyvsp[-5].value),0,1,stoi((yyvsp[-1].value)));}
#line 1799 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 163 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrtyp) = new Vartype((yyvsp[0].value));}
#line 1805 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrtyp) = new Vartype((yyvsp[0].value));}
#line 1811 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 165 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrtyp) = new Vartype((yyvsp[0].value));}
#line 1817 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 166 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrtyp) = new Vartype((yyvsp[0].value));}
#line 1823 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 167 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrtyp) = new Vartype((yyvsp[0].value));}
#line 1829 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 168 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrtyp) = new Vartype((yyvsp[0].value));}
#line 1835 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 169 "parser.yy" /* yacc.c:1646  */
    {(yyval.vrtyp) = new Vartype((yyvsp[0].value));}
#line 1841 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 172 "parser.yy" /* yacc.c:1646  */
    {(yyval.flop) = new FileOperation((yyvsp[-12].value), (yyvsp[-8].flnm),(yyvsp[-5].stmtlst));}
#line 1847 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 173 "parser.yy" /* yacc.c:1646  */
    {(yyval.flop) = new FileOperation((yyvsp[-8].flnm), (yyvsp[-5].stmtlst));}
#line 1853 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 176 "parser.yy" /* yacc.c:1646  */
    {(yyval.fndc) = new Fundec((yyvsp[-5].vrtyp),(yyvsp[-4].value),(yyvsp[-2].prms),(yyvsp[0].blck));}
#line 1859 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 177 "parser.yy" /* yacc.c:1646  */
    {(yyval.fndc) = new Fundec((yyvsp[-5].rtrntyp),(yyvsp[-4].value),(yyvsp[-2].prms),(yyvsp[0].blck));}
#line 1865 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 181 "parser.yy" /* yacc.c:1646  */
    {(yyval.rtrntyp) = new ReturnType((yyvsp[0].value));}
#line 1871 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 182 "parser.yy" /* yacc.c:1646  */
    {(yyval.rtrntyp) = new ReturnType((yyvsp[-2].vrtyp),1);}
#line 1877 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 183 "parser.yy" /* yacc.c:1646  */
    {(yyval.rtrntyp) = new ReturnType((yyvsp[-4].vrtyp),2);}
#line 1883 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 186 "parser.yy" /* yacc.c:1646  */
    {(yyval.prms) = new Params((yyvsp[0].prmlst));}
#line 1889 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 189 "parser.yy" /* yacc.c:1646  */
    {(yyval.prmlst) = new ParamList((yyvsp[-2].argtyp),",",(yyvsp[0].prmlst));}
#line 1895 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 190 "parser.yy" /* yacc.c:1646  */
    {(yyval.prmlst) = new ParamList((yyvsp[0].argtyp));}
#line 1901 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 191 "parser.yy" /* yacc.c:1646  */
    {(yyval.prmlst) = new ParamList();}
#line 1907 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 194 "parser.yy" /* yacc.c:1646  */
    {(yyval.argtyp) = new ArgType((yyvsp[-1].vrtyp),(yyvsp[0].value));}
#line 1913 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 195 "parser.yy" /* yacc.c:1646  */
    { (yyval.argtyp) = new ArgType((yyvsp[-3].vrtyp),(yyvsp[-2].value)); }
#line 1919 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 196 "parser.yy" /* yacc.c:1646  */
    {(yyval.argtyp) = new ArgType((yyvsp[-6].vrtyp),(yyvsp[-5].value),(yyvsp[-1].value));}
#line 1925 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 197 "parser.yy" /* yacc.c:1646  */
    {(yyval.argtyp) = new ArgType((yyvsp[-6].vrtyp),(yyvsp[-5].value),stoi((yyvsp[-1].value)));}
#line 1931 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 200 "parser.yy" /* yacc.c:1646  */
    {(yyval.blck) = new Block((yyvsp[0].blckstmts));}
#line 1937 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 203 "parser.yy" /* yacc.c:1646  */
    {(yyval.blckstmts) = new BlockStmts();}
#line 1943 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 204 "parser.yy" /* yacc.c:1646  */
    {(yyval.blckstmts) = new BlockStmts((yyvsp[-2].dclst),(yyvsp[-1].stmtlst));}
#line 1949 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 205 "parser.yy" /* yacc.c:1646  */
    {(yyval.blckstmts) = new BlockStmts((yyvsp[-1].stmtlst));}
#line 1955 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 208 "parser.yy" /* yacc.c:1646  */
    {(yyval.cntnstmt) = new ContinueStmt();}
#line 1961 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 211 "parser.yy" /* yacc.c:1646  */
    {(yyval.smt) = (yyvsp[0].expstmt);}
#line 1967 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 212 "parser.yy" /* yacc.c:1646  */
    {(yyval.smt) = (yyvsp[0].flop);}
#line 1973 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 213 "parser.yy" /* yacc.c:1646  */
    {(yyval.smt) = (yyvsp[0].lpstmt);}
#line 1979 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 214 "parser.yy" /* yacc.c:1646  */
    {(yyval.smt) = (yyvsp[0].slctstmt);}
#line 1985 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 215 "parser.yy" /* yacc.c:1646  */
    {(yyval.smt) = (yyvsp[0].brkstmt);}
#line 1991 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 216 "parser.yy" /* yacc.c:1646  */
    {(yyval.smt) = (yyvsp[0].cntnstmt);}
#line 1997 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 217 "parser.yy" /* yacc.c:1646  */
    {(yyval.smt) = (yyvsp[0].rtrnstmt);}
#line 2003 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 220 "parser.yy" /* yacc.c:1646  */
    {(yyval.rtrnstmt) = new ReturnStmt((yyvsp[0].expstmt));}
#line 2009 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 224 "parser.yy" /* yacc.c:1646  */
    {(yyval.stmtlst) = new StmtList((yyvsp[-1].stmtlst),(yyvsp[0].smt));}
#line 2015 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 225 "parser.yy" /* yacc.c:1646  */
    {(yyval.stmtlst) = new StmtList((yyvsp[0].smt));}
#line 2021 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 228 "parser.yy" /* yacc.c:1646  */
    {(yyval.expstmt) = new ExprStmt((yyvsp[-1].exp));}
#line 2027 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 229 "parser.yy" /* yacc.c:1646  */
    {(yyval.expstmt) = new ExprStmt();}
#line 2033 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 232 "parser.yy" /* yacc.c:1646  */
    {(yyval.slctstmt) = new SelectStmt((yyvsp[-6].value),(yyvsp[-4].exp),(yyvsp[-2].blck),(yyvsp[-1].value),(yyvsp[0].blck));}
#line 2039 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 233 "parser.yy" /* yacc.c:1646  */
    {(yyval.slctstmt) = new SelectStmt((yyvsp[-5].value), (yyvsp[-3].exp), (yyvsp[-1].blck), (yyvsp[0].elsif));}
#line 2045 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 234 "parser.yy" /* yacc.c:1646  */
    {(yyval.slctstmt) = new SelectStmt((yyvsp[-4].value),(yyvsp[-2].exp),(yyvsp[0].blck));}
#line 2051 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 237 "parser.yy" /* yacc.c:1646  */
    {(yyval.elsif) = new ElseIf((yyvsp[-7].value),(yyvsp[-5].exp), (yyvsp[-3].blck),(yyvsp[-2].elsif), (yyvsp[-1].value),(yyvsp[0].blck));}
#line 2057 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 238 "parser.yy" /* yacc.c:1646  */
    {(yyval.elsif) = new ElseIf((yyvsp[-4].value),(yyvsp[-2].exp), (yyvsp[0].blck));}
#line 2063 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 241 "parser.yy" /* yacc.c:1646  */
    {(yyval.lpstmt) = new LoopStmt((yyvsp[-4].value),(yyvsp[-2].exp),(yyvsp[0].blck));}
#line 2069 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 242 "parser.yy" /* yacc.c:1646  */
    {(yyval.lpstmt) = new LoopStmt((yyvsp[-8].value), (yyvsp[-6].assignexpr), (yyvsp[-4].exp),(yyvsp[-2].incordecexpr),(yyvsp[0].blck));}
#line 2075 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 243 "parser.yy" /* yacc.c:1646  */
    {(yyval.lpstmt) = new LoopStmt((yyvsp[-7].value),(yyvsp[-5].assignexpr),(yyvsp[-3].exp),(yyvsp[0].blck));}
#line 2081 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 246 "parser.yy" /* yacc.c:1646  */
    {(yyval.assignexpr) = new AssignExpr((yyvsp[-2].vrint),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 2087 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 247 "parser.yy" /* yacc.c:1646  */
    {(yyval.assignexpr) = new AssignExpr((yyvsp[-3].vrtyp),(yyvsp[-2].vrint),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 2093 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 248 "parser.yy" /* yacc.c:1646  */
    {(yyval.assignexpr) = new AssignExpr();}
#line 2099 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 251 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[-2].flwterm),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 2105 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 252 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[-2].flwterm),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 2111 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 253 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[-2].flwterm),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 2117 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 254 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[-2].flwterm),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 2123 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 255 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[-2].flwterm),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 2129 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 256 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[-2].flwterm),(yyvsp[-1].value),(yyvsp[0].exp));}
#line 2135 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 257 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[0].value));}
#line 2141 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 258 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[0].value));}
#line 2147 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 259 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[0].value));}
#line 2153 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 260 "parser.yy" /* yacc.c:1646  */
    {(yyval.incordecexpr) = new IncDecExpr((yyvsp[0].value));}
#line 2159 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 264 "parser.yy" /* yacc.c:1646  */
    {(yyval.brkstmt) = new BreakStmt();}
#line 2165 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 268 "parser.yy" /* yacc.c:1646  */
    {(yyval.exp) = new Expr((yyvsp[0].incordecexpr));}
#line 2171 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 269 "parser.yy" /* yacc.c:1646  */
    {(yyval.exp) = new Expr((yyvsp[0].simpleexpr));}
#line 2177 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 270 "parser.yy" /* yacc.c:1646  */
    {(yyval.exp) = new Expr(new TernaryExpr((yyvsp[-4].exp), (yyvsp[-2].exp),(yyvsp[0].exp)));}
#line 2183 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 274 "parser.yy" /* yacc.c:1646  */
    {(yyval.simpleexpr) = new SimpleExpr((yyvsp[-2].simpleexpr),(yyvsp[-1].value),(yyvsp[0].andexpr));}
#line 2189 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 275 "parser.yy" /* yacc.c:1646  */
    {(yyval.simpleexpr) = new SimpleExpr((yyvsp[0].andexpr));}
#line 2195 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 278 "parser.yy" /* yacc.c:1646  */
    {(yyval.andexpr) = new AndExpr((yyvsp[-2].andexpr),(yyvsp[-1].value),(yyvsp[0].notexpr));}
#line 2201 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 279 "parser.yy" /* yacc.c:1646  */
    {(yyval.andexpr) = new AndExpr((yyvsp[0].notexpr));}
#line 2207 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 282 "parser.yy" /* yacc.c:1646  */
    {(yyval.notexpr) = new NotExpr((yyvsp[-1].value),(yyvsp[0].notexpr));}
#line 2213 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 283 "parser.yy" /* yacc.c:1646  */
    {(yyval.notexpr) = new NotExpr((yyvsp[0].relexpr));}
#line 2219 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 286 "parser.yy" /* yacc.c:1646  */
    {(yyval.relexpr) = new RelExpr((yyvsp[-2].sumexpr),(yyvsp[-1].rlop),(yyvsp[0].sumexpr));}
#line 2225 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 287 "parser.yy" /* yacc.c:1646  */
    {(yyval.relexpr) = new RelExpr((yyvsp[0].sumexpr));}
#line 2231 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 290 "parser.yy" /* yacc.c:1646  */
    {(yyval.rlop)=new Relop((yyvsp[0].value),0);}
#line 2237 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 291 "parser.yy" /* yacc.c:1646  */
    {(yyval.rlop)=new Relop((yyvsp[0].value),1);}
#line 2243 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 292 "parser.yy" /* yacc.c:1646  */
    {(yyval.rlop)=new Relop((yyvsp[0].value),2);}
#line 2249 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 293 "parser.yy" /* yacc.c:1646  */
    {(yyval.rlop)=new Relop((yyvsp[0].value),3);}
#line 2255 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 294 "parser.yy" /* yacc.c:1646  */
    {(yyval.rlop)=new Relop((yyvsp[0].value),4);}
#line 2261 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 295 "parser.yy" /* yacc.c:1646  */
    {(yyval.rlop)=new Relop((yyvsp[0].value),5);}
#line 2267 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 298 "parser.yy" /* yacc.c:1646  */
    {(yyval.sumexpr) = new SumExpr((yyvsp[-2].sumexpr),(yyvsp[-1].smop),(yyvsp[0].trm));}
#line 2273 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 299 "parser.yy" /* yacc.c:1646  */
    {(yyval.sumexpr) = new SumExpr((yyvsp[0].trm));}
#line 2279 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 302 "parser.yy" /* yacc.c:1646  */
    {(yyval.smop) = new Sumop((yyvsp[0].value));}
#line 2285 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 303 "parser.yy" /* yacc.c:1646  */
    {(yyval.smop) = new Sumop((yyvsp[0].value));}
#line 2291 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 306 "parser.yy" /* yacc.c:1646  */
    {(yyval.trm) = new Term((yyvsp[-2].trm),(yyvsp[-1].mlop),(yyvsp[0].flwterm));}
#line 2297 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 307 "parser.yy" /* yacc.c:1646  */
    {(yyval.trm) = new Term((yyvsp[0].flwterm));}
#line 2303 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 310 "parser.yy" /* yacc.c:1646  */
    {(yyval.mlop) = new Mulop((yyvsp[0].value));}
#line 2309 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 311 "parser.yy" /* yacc.c:1646  */
    {(yyval.mlop) = new Mulop((yyvsp[0].value));}
#line 2315 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 312 "parser.yy" /* yacc.c:1646  */
    {(yyval.mlop) = new Mulop((yyvsp[0].value));}
#line 2321 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 131:
#line 316 "parser.yy" /* yacc.c:1646  */
    {(yyval.flwterm) = new FollowTerm((yyvsp[0].vls));}
#line 2327 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 317 "parser.yy" /* yacc.c:1646  */
    {(yyval.flwterm) = new FollowTerm((yyvsp[0].value),0);}
#line 2333 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 318 "parser.yy" /* yacc.c:1646  */
    {(yyval.flwterm) = new FollowTerm((yyvsp[-2].value),1);}
#line 2339 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 319 "parser.yy" /* yacc.c:1646  */
    {(yyval.flwterm) = new FollowTerm((yyvsp[-1].value),(yyvsp[0].afterID));}
#line 2345 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 320 "parser.yy" /* yacc.c:1646  */
    {(yyval.flwterm) = new FollowTerm((yyvsp[-1].exp));}
#line 2351 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 323 "parser.yy" /* yacc.c:1646  */
    {(yyval.afterID) = new AfterID((yyvsp[-2].exp),(yyvsp[0].flw));}
#line 2357 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 324 "parser.yy" /* yacc.c:1646  */
    {(yyval.afterID) = new AfterID((yyvsp[-1].arg));}
#line 2363 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 327 "parser.yy" /* yacc.c:1646  */
    {(yyval.flw) = new Follow((yyvsp[-1].exp));}
#line 2369 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 328 "parser.yy" /* yacc.c:1646  */
    {(yyval.flw) = new Follow();}
#line 2375 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 331 "parser.yy" /* yacc.c:1646  */
    {(yyval.arg) = new Args((yyvsp[-2].arg),(yyvsp[0].exp));}
#line 2381 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 332 "parser.yy" /* yacc.c:1646  */
    {(yyval.arg) = new Args((yyvsp[0].exp));}
#line 2387 "parser.tab.cc" /* yacc.c:1646  */
    break;


#line 2391 "parser.tab.cc" /* yacc.c:1646  */
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
#line 335 "parser.yy" /* yacc.c:1906  */


void yyerror(const char *s)
{
	cout<<"Error: "<<s<<endl;
	exit(-1);
}

int main(int argc, char **argv) {
	if (argc == 2)
	{
		yyin = fopen(argv[1], "r");
		if(!yyin)
		{
			cout<<"Please enter existing file path!"<<endl;
			exit(-1);
		}
	    yyparse();
	    cout<<"\nParsing Successfull!!\n"<<endl;
    	cout << "Abstract Syntax Tree: \n"<<endl;
    	root->print_ast();
    	fclose(yyin);
    	
    }
    else
    {
    	cout << "Enter File path as argument!"<<endl;
    	exit(-1);
    }
    return 0;
}
