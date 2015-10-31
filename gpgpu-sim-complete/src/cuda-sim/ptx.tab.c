/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ptx_parse
#define yylex           ptx_lex
#define yyerror         ptx_error
#define yydebug         ptx_debug
#define yynerrs         ptx_nerrs

#define yylval          ptx_lval
#define yychar          ptx_char

/* Copy the first part of user declarations.  */

#line 75 "ptx.tab.c" /* yacc.c:339  */

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
   by #include "ptx.tab.h".  */
#ifndef YY_PTX_PTX_TAB_H_INCLUDED
# define YY_PTX_PTX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ptx_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    OPCODE = 259,
    ALIGN_DIRECTIVE = 260,
    BRANCHTARGETS_DIRECTIVE = 261,
    BYTE_DIRECTIVE = 262,
    CALLPROTOTYPE_DIRECTIVE = 263,
    CALLTARGETS_DIRECTIVE = 264,
    CONST_DIRECTIVE = 265,
    CONSTPTR_DIRECTIVE = 266,
    PTR_DIRECTIVE = 267,
    ENTRY_DIRECTIVE = 268,
    EXTERN_DIRECTIVE = 269,
    FILE_DIRECTIVE = 270,
    FUNC_DIRECTIVE = 271,
    GLOBAL_DIRECTIVE = 272,
    LOCAL_DIRECTIVE = 273,
    LOC_DIRECTIVE = 274,
    MAXNCTAPERSM_DIRECTIVE = 275,
    MAXNNREG_DIRECTIVE = 276,
    MAXNTID_DIRECTIVE = 277,
    MINNCTAPERSM_DIRECTIVE = 278,
    PARAM_DIRECTIVE = 279,
    PRAGMA_DIRECTIVE = 280,
    REG_DIRECTIVE = 281,
    REQNTID_DIRECTIVE = 282,
    SECTION_DIRECTIVE = 283,
    SHARED_DIRECTIVE = 284,
    SREG_DIRECTIVE = 285,
    STRUCT_DIRECTIVE = 286,
    SURF_DIRECTIVE = 287,
    TARGET_DIRECTIVE = 288,
    TEX_DIRECTIVE = 289,
    UNION_DIRECTIVE = 290,
    VERSION_DIRECTIVE = 291,
    ADDRESS_SIZE_DIRECTIVE = 292,
    VISIBLE_DIRECTIVE = 293,
    IDENTIFIER = 294,
    INT_OPERAND = 295,
    FLOAT_OPERAND = 296,
    DOUBLE_OPERAND = 297,
    S8_TYPE = 298,
    S16_TYPE = 299,
    S32_TYPE = 300,
    S64_TYPE = 301,
    U8_TYPE = 302,
    U16_TYPE = 303,
    U32_TYPE = 304,
    U64_TYPE = 305,
    F16_TYPE = 306,
    F32_TYPE = 307,
    F64_TYPE = 308,
    FF64_TYPE = 309,
    B8_TYPE = 310,
    B16_TYPE = 311,
    B32_TYPE = 312,
    B64_TYPE = 313,
    BB64_TYPE = 314,
    BB128_TYPE = 315,
    PRED_TYPE = 316,
    TEXREF_TYPE = 317,
    SAMPLERREF_TYPE = 318,
    SURFREF_TYPE = 319,
    V2_TYPE = 320,
    V3_TYPE = 321,
    V4_TYPE = 322,
    COMMA = 323,
    PRED = 324,
    HALF_OPTION = 325,
    EQ_OPTION = 326,
    NE_OPTION = 327,
    LT_OPTION = 328,
    LE_OPTION = 329,
    GT_OPTION = 330,
    GE_OPTION = 331,
    LO_OPTION = 332,
    LS_OPTION = 333,
    HI_OPTION = 334,
    HS_OPTION = 335,
    EQU_OPTION = 336,
    NEU_OPTION = 337,
    LTU_OPTION = 338,
    LEU_OPTION = 339,
    GTU_OPTION = 340,
    GEU_OPTION = 341,
    NUM_OPTION = 342,
    NAN_OPTION = 343,
    CF_OPTION = 344,
    SF_OPTION = 345,
    NSF_OPTION = 346,
    LEFT_SQUARE_BRACKET = 347,
    RIGHT_SQUARE_BRACKET = 348,
    WIDE_OPTION = 349,
    SPECIAL_REGISTER = 350,
    MINUS = 351,
    PLUS = 352,
    COLON = 353,
    SEMI_COLON = 354,
    EXCLAMATION = 355,
    PIPE = 356,
    RIGHT_BRACE = 357,
    LEFT_BRACE = 358,
    EQUALS = 359,
    PERIOD = 360,
    BACKSLASH = 361,
    DIMENSION_MODIFIER = 362,
    RN_OPTION = 363,
    RZ_OPTION = 364,
    RM_OPTION = 365,
    RP_OPTION = 366,
    RNI_OPTION = 367,
    RZI_OPTION = 368,
    RMI_OPTION = 369,
    RPI_OPTION = 370,
    UNI_OPTION = 371,
    GEOM_MODIFIER_1D = 372,
    GEOM_MODIFIER_2D = 373,
    GEOM_MODIFIER_3D = 374,
    SAT_OPTION = 375,
    FTZ_OPTION = 376,
    NEG_OPTION = 377,
    ATOMIC_AND = 378,
    ATOMIC_OR = 379,
    ATOMIC_XOR = 380,
    ATOMIC_CAS = 381,
    ATOMIC_EXCH = 382,
    ATOMIC_ADD = 383,
    ATOMIC_INC = 384,
    ATOMIC_DEC = 385,
    ATOMIC_MIN = 386,
    ATOMIC_MAX = 387,
    LEFT_ANGLE_BRACKET = 388,
    RIGHT_ANGLE_BRACKET = 389,
    LEFT_PAREN = 390,
    RIGHT_PAREN = 391,
    APPROX_OPTION = 392,
    FULL_OPTION = 393,
    ANY_OPTION = 394,
    ALL_OPTION = 395,
    BALLOT_OPTION = 396,
    GLOBAL_OPTION = 397,
    CTA_OPTION = 398,
    SYS_OPTION = 399,
    EXIT_OPTION = 400,
    ABS_OPTION = 401,
    TO_OPTION = 402,
    CA_OPTION = 403,
    CG_OPTION = 404,
    CS_OPTION = 405,
    LU_OPTION = 406,
    CV_OPTION = 407,
    WB_OPTION = 408,
    WT_OPTION = 409,
    SHFL_OPTION = 410,
    SHFR_OPTION = 411,
    CLAMP_OPTION = 412,
    WRAP_OPTION = 413
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "ptx.y" /* yacc.c:355  */

  double double_value;
  float  float_value;
  int    int_value;
  char * string_value;
  void * ptr_value;

#line 282 "ptx.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ptx_lval;

int ptx_parse (void);

#endif /* !YY_PTX_PTX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 198 "ptx.y" /* yacc.c:358  */

  	#include "ptx_parser.h"
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	void syntax_not_implemented();
	extern int g_func_decl;
	int ptx_lex(void);
	int ptx_error(const char *);

#line 307 "ptx.tab.c" /* yacc.c:358  */

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
#define YYLAST   603

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  274
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  380

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   413

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   211,   211,   212,   213,   214,   217,   217,   218,   218,
     218,   221,   224,   225,   228,   229,   232,   232,   232,   233,
     233,   234,   237,   237,   237,   238,   241,   242,   243,   244,
     247,   248,   249,   249,   251,   251,   252,   252,   254,   255,
     256,   258,   259,   260,   261,   263,   265,   267,   268,   269,
     270,   271,   272,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   288,   289,   290,   291,   294,   296,
     297,   299,   300,   312,   313,   316,   317,   319,   320,   321,
     322,   323,   326,   328,   329,   330,   333,   334,   335,   336,
     337,   338,   339,   342,   343,   346,   347,   348,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     375,   376,   378,   379,   381,   382,   383,   385,   385,   386,
     387,   388,   389,   392,   392,   393,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   410,
     411,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   463,   464,   466,
     467,   468,   469,   472,   473,   474,   475,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   498,   499,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   523,   524,   525,
     526,   529,   529,   534,   535,   538,   539,   540,   541,   542,
     545,   546,   547,   548,   549,   550,   551,   554,   555,   556,
     559,   560,   561,   562,   563
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "OPCODE", "ALIGN_DIRECTIVE",
  "BRANCHTARGETS_DIRECTIVE", "BYTE_DIRECTIVE", "CALLPROTOTYPE_DIRECTIVE",
  "CALLTARGETS_DIRECTIVE", "CONST_DIRECTIVE", "CONSTPTR_DIRECTIVE",
  "PTR_DIRECTIVE", "ENTRY_DIRECTIVE", "EXTERN_DIRECTIVE", "FILE_DIRECTIVE",
  "FUNC_DIRECTIVE", "GLOBAL_DIRECTIVE", "LOCAL_DIRECTIVE", "LOC_DIRECTIVE",
  "MAXNCTAPERSM_DIRECTIVE", "MAXNNREG_DIRECTIVE", "MAXNTID_DIRECTIVE",
  "MINNCTAPERSM_DIRECTIVE", "PARAM_DIRECTIVE", "PRAGMA_DIRECTIVE",
  "REG_DIRECTIVE", "REQNTID_DIRECTIVE", "SECTION_DIRECTIVE",
  "SHARED_DIRECTIVE", "SREG_DIRECTIVE", "STRUCT_DIRECTIVE",
  "SURF_DIRECTIVE", "TARGET_DIRECTIVE", "TEX_DIRECTIVE", "UNION_DIRECTIVE",
  "VERSION_DIRECTIVE", "ADDRESS_SIZE_DIRECTIVE", "VISIBLE_DIRECTIVE",
  "IDENTIFIER", "INT_OPERAND", "FLOAT_OPERAND", "DOUBLE_OPERAND",
  "S8_TYPE", "S16_TYPE", "S32_TYPE", "S64_TYPE", "U8_TYPE", "U16_TYPE",
  "U32_TYPE", "U64_TYPE", "F16_TYPE", "F32_TYPE", "F64_TYPE", "FF64_TYPE",
  "B8_TYPE", "B16_TYPE", "B32_TYPE", "B64_TYPE", "BB64_TYPE", "BB128_TYPE",
  "PRED_TYPE", "TEXREF_TYPE", "SAMPLERREF_TYPE", "SURFREF_TYPE", "V2_TYPE",
  "V3_TYPE", "V4_TYPE", "COMMA", "PRED", "HALF_OPTION", "EQ_OPTION",
  "NE_OPTION", "LT_OPTION", "LE_OPTION", "GT_OPTION", "GE_OPTION",
  "LO_OPTION", "LS_OPTION", "HI_OPTION", "HS_OPTION", "EQU_OPTION",
  "NEU_OPTION", "LTU_OPTION", "LEU_OPTION", "GTU_OPTION", "GEU_OPTION",
  "NUM_OPTION", "NAN_OPTION", "CF_OPTION", "SF_OPTION", "NSF_OPTION",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "WIDE_OPTION",
  "SPECIAL_REGISTER", "MINUS", "PLUS", "COLON", "SEMI_COLON",
  "EXCLAMATION", "PIPE", "RIGHT_BRACE", "LEFT_BRACE", "EQUALS", "PERIOD",
  "BACKSLASH", "DIMENSION_MODIFIER", "RN_OPTION", "RZ_OPTION", "RM_OPTION",
  "RP_OPTION", "RNI_OPTION", "RZI_OPTION", "RMI_OPTION", "RPI_OPTION",
  "UNI_OPTION", "GEOM_MODIFIER_1D", "GEOM_MODIFIER_2D", "GEOM_MODIFIER_3D",
  "SAT_OPTION", "FTZ_OPTION", "NEG_OPTION", "ATOMIC_AND", "ATOMIC_OR",
  "ATOMIC_XOR", "ATOMIC_CAS", "ATOMIC_EXCH", "ATOMIC_ADD", "ATOMIC_INC",
  "ATOMIC_DEC", "ATOMIC_MIN", "ATOMIC_MAX", "LEFT_ANGLE_BRACKET",
  "RIGHT_ANGLE_BRACKET", "LEFT_PAREN", "RIGHT_PAREN", "APPROX_OPTION",
  "FULL_OPTION", "ANY_OPTION", "ALL_OPTION", "BALLOT_OPTION",
  "GLOBAL_OPTION", "CTA_OPTION", "SYS_OPTION", "EXIT_OPTION", "ABS_OPTION",
  "TO_OPTION", "CA_OPTION", "CG_OPTION", "CS_OPTION", "LU_OPTION",
  "CV_OPTION", "WB_OPTION", "WT_OPTION", "SHFL_OPTION", "SHFR_OPTION",
  "CLAMP_OPTION", "WRAP_OPTION", "$accept", "input", "function_defn",
  "$@1", "$@2", "$@3", "block_spec", "block_spec_list", "function_decl",
  "$@4", "$@5", "$@6", "function_ident_param", "$@7", "$@8",
  "function_decl_header", "param_list", "$@9", "param_entry", "$@10",
  "$@11", "ptr_spec", "ptr_space_spec", "ptr_align_spec",
  "statement_block", "statement_list", "directive_statement",
  "variable_declaration", "variable_spec", "identifier_list",
  "identifier_spec", "var_spec_list", "var_spec", "align_spec",
  "space_spec", "addressable_spec", "type_spec", "vector_spec",
  "scalar_type", "initializer_list", "literal_list",
  "instruction_statement", "instruction", "$@12", "opcode_spec", "$@13",
  "pred_spec", "option_list", "option", "atomic_operation_spec",
  "rounding_mode", "floating_point_rounding_mode", "integer_rounding_mode",
  "compare_spec", "operand_list", "operand", "vector_operand",
  "tex_operand", "$@14", "builtin_operand", "memory_operand",
  "twin_operand", "literal_operand", "address_expression", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413
};
# endif

#define YYPACT_NINF -275

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-275)))

#define YYTABLE_NINF -136

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -275,   451,  -275,   -30,  -275,   -15,  -275,    73,    53,  -275,
    -275,  -275,    56,  -275,   176,  -275,  -275,  -275,  -275,   124,
    -275,   140,   148,   179,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
     -11,   -33,  -275,   112,   185,   514,  -275,  -275,  -275,  -275,
    -275,   539,  -275,  -275,   161,  -275,   211,   204,   149,   177,
     162,  -275,  -275,  -275,   182,     0,  -275,   256,  -275,    41,
     230,   195,  -275,  -275,  -275,  -275,   261,  -275,   264,  -275,
     262,  -275,   292,  -275,   283,   287,   293,  -275,     0,    12,
     197,  -275,   -27,   294,   185,    58,   295,  -275,   296,   117,
     268,    -5,   263,  -275,   217,  -275,  -275,   271,   338,   356,
    -275,   299,  -275,   182,  -275,  -275,  -275,   235,   237,   281,
    -275,   241,  -275,  -275,  -275,  -275,    58,  -275,  -275,   341,
     343,    -3,  -275,   325,   348,  -275,  -275,  -275,  -275,  -275,
     104,   -12,   286,    -2,   349,   355,   350,  -275,   332,  -275,
    -275,  -275,  -275,  -275,   303,   363,  -275,   514,   514,  -275,
    -275,  -275,  -275,   302,    63,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,    -3,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,   248,   365,
     369,   372,   110,  -275,   319,  -275,   146,    64,   123,  -275,
    -275,  -275,    92,   277,   344,  -275,   351,   405,   185,   256,
      12,  -275,   135,  -275,  -275,   129,  -275,   327,   328,   329,
    -275,   -60,    94,  -275,  -275,  -275,   378,  -275,  -275,  -275,
     160,   331,   385,  -275,  -275,   273,  -275,   357,   386,   175,
     185,  -275,  -275,   -50,  -275,  -275,    -7,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,   324,  -275,    96,   360,  -275,   301,
     350,  -275,   389,  -275,  -275,  -275,  -275,   426,  -275,  -275,
    -275,  -275,   214,   130,   339,   396,  -275,   350,  -275,  -275,
    -275,    12,  -275,  -275,   215,  -275,  -275,    98,   375,  -275,
    -275,  -275,   409,  -275,   314,   352,   350,  -275,   316,  -275
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,    86,     0,    26,    81,     0,    27,
      87,    88,     0,    89,     0,    83,    90,    84,    91,     0,
      92,     0,     0,    79,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,    95,    96,    97,     4,
       5,    21,     3,     0,     0,    68,    75,    80,    77,    85,
      78,     0,    93,    82,     0,    29,     0,     0,     0,    59,
      54,    56,    28,    63,     0,     0,    16,     0,    53,    71,
      64,    69,    81,    79,    76,    94,     0,    60,     0,    62,
       0,    55,     0,     7,     0,     0,     0,    14,     9,     0,
      25,    20,     0,     0,     0,     0,     0,    61,    57,   133,
       0,     0,     0,    52,     0,    47,    48,     0,   132,     0,
      13,     0,    12,     0,    15,    34,    36,     0,     0,     0,
      73,     0,    70,   267,   268,   269,     0,    65,    66,     0,
       0,     0,   125,   136,     0,    46,    51,    49,    50,   124,
     227,     0,   254,     0,     0,     0,     0,   131,   225,   233,
     235,   232,   230,   231,     0,     0,    10,     0,     0,    17,
      23,    74,    72,     0,     0,   122,    67,    58,   175,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   156,   199,   200,
     201,   202,   203,   204,   205,   206,   155,   163,   164,   165,
     166,   167,   168,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   169,   170,   157,   158,   159,   160,   161,
     162,   171,   172,   174,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   153,   151,   134,   149,   173,
     154,   197,   198,   152,   139,   141,   138,   140,   142,   143,
     145,   144,   146,   147,   148,   137,   237,   239,     0,     0,
       0,     0,   270,   274,     0,   253,   229,     0,     0,   234,
     259,   228,     0,     0,     0,   126,     0,    38,     0,     0,
      30,   121,     0,   120,   150,   270,   267,     0,     0,     0,
     236,   241,   244,   251,   271,   272,     0,   255,   238,   240,
     270,     0,     0,   250,   127,     0,   226,   225,     0,     0,
       0,    37,    18,     0,    31,   123,     0,   258,   257,   256,
     242,   243,   245,   246,     0,   273,     0,     0,   130,     0,
       0,    11,     0,    44,    41,    42,    43,     0,    40,    35,
      32,    24,   260,     0,     0,     0,   247,     0,   129,    45,
      39,     0,   261,   262,   263,   266,   252,     0,     0,    33,
     264,   265,     0,   248,     0,     0,     0,   249,     0,   128
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -275,  -275,  -275,  -275,  -275,  -275,   359,  -275,   454,  -275,
    -275,  -275,   169,  -275,  -275,  -275,  -275,  -275,  -274,  -275,
    -275,  -275,  -275,   113,    76,  -275,   -84,  -275,    35,  -275,
    -102,  -275,   404,  -275,  -275,  -116,   -76,  -275,   402,   335,
    -275,   358,   367,  -275,  -275,  -275,  -275,   226,  -275,  -275,
    -275,  -275,  -275,  -275,  -118,  -117,  -150,  -275,  -275,  -275,
    -148,  -275,  -101,   210
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    49,    74,    75,   123,    97,    98,   112,    99,
     289,    77,   101,   128,   290,    51,   323,   361,   127,   167,
     168,   320,   347,   348,    93,   114,    52,    53,    54,    80,
      81,    55,    56,    57,    58,    59,    60,    61,    62,   137,
     174,   116,   117,   337,   118,   141,   119,   247,   248,   249,
     250,   251,   252,   253,   316,   317,   159,   160,   334,   161,
     162,   297,   163,   274
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     157,   158,   132,   279,   138,   280,   -19,     4,   115,    -8,
      63,    -8,    -8,   129,    10,    11,   324,   330,   350,   331,
      94,    13,    95,    96,    64,   245,    16,   272,   273,    18,
     147,    20,   352,   335,   143,   175,   125,   276,   126,   283,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   246,   130,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   351,   369,    73,    65,
     277,   197,    -6,    66,   278,   144,    67,   353,   133,   134,
     135,   155,    76,   310,   273,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     280,   292,   245,   102,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,  -135,  -135,  -135,  -135,
     312,   136,   311,    69,   355,   293,   372,   298,   113,   364,
     365,   332,   246,   333,   103,   133,   134,   135,   303,    68,
     342,   266,    70,   267,   354,   343,   321,   304,    71,   305,
     146,   325,   344,   345,   313,    72,   268,   339,   356,   166,
     373,   269,   287,   288,   346,   270,   304,   306,   305,  -135,
     271,    78,  -135,  -135,    87,   277,  -135,  -135,   349,   278,
    -135,   109,     3,   308,    79,   309,   326,     4,     5,    86,
       6,     7,     8,     9,    10,    11,    12,   304,   268,   305,
     368,    13,    14,    15,    88,    90,    16,    17,    89,    18,
      19,    20,  -135,    21,    22,    23,   110,   306,   378,    91,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    92,   111,   295,   296,   134,
     135,   362,   370,   363,   371,   100,   109,     3,   104,   105,
     106,   108,     4,     5,   107,     6,     7,     8,     9,    10,
      11,    12,   150,   133,   134,   135,    13,    14,    15,   145,
      92,    16,    17,   120,    18,    19,    20,   121,    21,    22,
      23,   110,   -22,   122,   131,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
     109,   111,    73,   139,   140,   151,   142,   165,   152,   153,
     149,   169,   170,   154,   171,   172,   155,   150,   133,   134,
     135,   176,   177,   150,   133,   134,   135,   265,   281,   150,
     133,   134,   135,   275,   282,    92,   254,   255,   256,   257,
     284,   258,   285,   286,   291,   300,   259,   260,   301,   338,
     261,   302,   307,   314,   262,   263,   264,   319,   335,   318,
     327,   328,   329,   268,   336,   340,   341,   155,   357,   359,
     151,   342,   366,   152,   153,   367,   151,   358,   154,   152,
     153,   155,   151,   374,   154,   152,   153,   155,   375,   376,
     154,     2,   379,   155,   377,    50,     3,   124,   322,    84,
     360,     4,     5,    85,     6,     7,     8,     9,    10,    11,
      12,   173,   148,   156,   294,    13,    14,    15,   299,   315,
      16,    17,     0,    18,    19,    20,   164,    21,    22,    23,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     3,
       0,     0,     0,     0,     4,     0,     0,     0,    82,     0,
       0,    10,    11,     0,     0,     0,     0,     0,    13,     0,
      15,     0,     0,    16,    17,     0,    18,     0,    20,     0,
       0,     0,    83,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45
};

static const yytype_int16 yycheck[] =
{
     118,   118,   104,   153,   105,   153,    39,    10,    92,    20,
      40,    22,    23,    40,    17,    18,   290,    77,    68,    79,
      20,    24,    22,    23,    39,   141,    29,    39,    40,    32,
     114,    34,    39,    40,    39,   136,    24,    39,    26,   156,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   141,    93,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   136,   361,    99,    16,
      92,    94,   103,    40,    96,   100,    40,   104,    40,    41,
      42,   103,   135,    39,    40,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     278,    68,   248,    92,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,    39,    40,    41,    42,
      68,   103,    39,    39,    68,   102,    68,   268,    92,    39,
      40,    77,   248,    79,   133,    40,    41,    42,    68,     3,
       5,    77,    42,    79,   334,    10,   288,    77,    40,    79,
     114,   292,    17,    18,   102,    16,    92,   315,   102,   123,
     102,    97,   167,   168,    29,   101,    77,    97,    79,    92,
     106,    99,    95,    96,     3,    92,    99,   100,   320,    96,
     103,     4,     5,    77,    39,    79,    97,    10,    11,    68,
      13,    14,    15,    16,    17,    18,    19,    77,    92,    79,
     357,    24,    25,    26,    40,    68,    29,    30,    99,    32,
      33,    34,   135,    36,    37,    38,    39,    97,   376,    97,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   103,    69,    39,    40,    41,
      42,    77,    77,    79,    79,    39,     4,     5,    68,   104,
      39,    39,    10,    11,    40,    13,    14,    15,    16,    17,
      18,    19,    39,    40,    41,    42,    24,    25,    26,   102,
     103,    29,    30,    40,    32,    33,    34,    40,    36,    37,
      38,    39,   135,    40,    40,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       4,    69,    99,    68,    68,    92,    98,    68,    95,    96,
      99,   136,   135,   100,    93,   134,   103,    39,    40,    41,
      42,    40,    39,    39,    40,    41,    42,    39,    39,    39,
      40,    41,    42,   107,    39,   103,    71,    72,    73,    74,
      68,    76,    99,    40,   102,    40,    81,    82,    39,   136,
      85,    39,    93,   136,    89,    90,    91,    12,    40,    68,
      93,    93,    93,    92,    39,    68,    40,   103,    68,    40,
      92,     5,    93,    95,    96,    39,    92,   136,   100,    95,
      96,   103,    92,    68,   100,    95,    96,   103,    39,   135,
     100,     0,   136,   103,   102,     1,     5,    98,   289,    55,
     347,    10,    11,    61,    13,    14,    15,    16,    17,    18,
      19,   136,   114,   135,   248,    24,    25,    26,   268,   135,
      29,    30,    -1,    32,    33,    34,   119,    36,    37,    38,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     5,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   160,     0,     5,    10,    11,    13,    14,    15,    16,
      17,    18,    19,    24,    25,    26,    29,    30,    32,    33,
      34,    36,    37,    38,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   161,
     167,   174,   185,   186,   187,   190,   191,   192,   193,   194,
     195,   196,   197,    40,    39,    16,    40,    40,     3,    39,
      42,    40,    16,    99,   162,   163,   135,   170,    99,    39,
     188,   189,    14,    38,   191,   197,    68,     3,    40,    99,
      68,    97,   103,   183,    20,    22,    23,   165,   166,   168,
      39,   171,    92,   133,    68,   104,    39,    40,    39,     4,
      39,    69,   167,   183,   184,   185,   200,   201,   203,   205,
      40,    40,    40,   164,   165,    24,    26,   177,   172,    40,
      93,    40,   189,    40,    41,    42,   103,   198,   221,    68,
      68,   204,    98,    39,   100,   102,   183,   185,   200,    99,
      39,    92,    95,    96,   100,   103,   135,   213,   214,   215,
     216,   218,   219,   221,   201,    68,   183,   178,   179,   136,
     135,    93,   134,   198,   199,   221,    40,    39,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    94,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   194,   195,   206,   207,   208,
     209,   210,   211,   212,    71,    72,    73,    74,    76,    81,
      82,    85,    89,    90,    91,    39,    77,    79,    92,    97,
     101,   106,    39,    40,   222,   107,    39,    92,    96,   215,
     219,    39,    39,   214,    68,    99,    40,   187,   187,   169,
     173,   102,    68,   102,   206,    39,    40,   220,   221,   222,
      40,    39,    39,    68,    77,    79,    97,    93,    77,    79,
      39,    39,    68,   102,   136,   135,   213,   214,    68,    12,
     180,   189,   171,   175,   177,   221,    97,    93,    93,    93,
      77,    79,    77,    79,   217,    40,    39,   202,   136,   213,
      68,    40,     5,    10,    17,    18,    29,   181,   182,   189,
      68,   136,    39,   104,   215,    68,   102,    68,   136,    40,
     182,   176,    77,    79,    39,    40,    93,    39,   214,   177,
      77,    79,    68,   102,    68,    39,   135,   102,   213,   136
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   159,   160,   160,   160,   160,   162,   161,   163,   164,
     161,   165,   165,   165,   166,   166,   168,   169,   167,   170,
     167,   167,   172,   173,   171,   171,   174,   174,   174,   174,
     175,   175,   176,   175,   178,   177,   179,   177,   180,   180,
     180,   181,   181,   181,   181,   182,   183,   184,   184,   184,
     184,   184,   184,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   186,   186,   186,   186,   187,   188,
     188,   189,   189,   189,   189,   190,   190,   191,   191,   191,
     191,   191,   192,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   194,   195,   195,   196,   196,   196,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     198,   198,   199,   199,   200,   200,   200,   202,   201,   201,
     201,   201,   201,   204,   203,   203,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   206,
     206,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   209,   209,   210,
     210,   210,   210,   211,   211,   211,   211,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   213,   213,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   215,   215,   215,
     215,   217,   216,   218,   218,   219,   219,   219,   219,   219,
     220,   220,   220,   220,   220,   220,   220,   221,   221,   221,
     222,   222,   222,   222,   222
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     0,     3,     0,     0,
       5,     6,     2,     2,     1,     2,     0,     0,     7,     0,
       3,     1,     0,     0,     6,     1,     1,     1,     2,     2,
       0,     1,     0,     4,     0,     5,     0,     4,     0,     3,
       2,     1,     1,     1,     1,     2,     3,     1,     1,     2,
       2,     2,     1,     2,     2,     3,     2,     4,     6,     2,
       3,     4,     3,     2,     2,     4,     4,     6,     1,     1,
       3,     1,     4,     3,     4,     1,     2,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     2,     2,     3,     0,    11,     6,
       5,     2,     1,     0,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     2,
       1,     1,     1,     1,     2,     1,     3,     2,     3,     2,
       3,     3,     4,     4,     3,     4,     4,     5,     7,     9,
       3,     0,     6,     2,     1,     3,     4,     4,     4,     2,
       3,     4,     4,     4,     5,     5,     4,     1,     1,     1,
       1,     2,     2,     3,     1
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
        case 6:
#line 217 "ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); func_header(".skip"); }
#line 1776 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 217 "ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1782 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 218 "ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); }
#line 1788 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 218 "ptx.y" /* yacc.c:1646  */
    { func_header(".skip"); }
#line 1794 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 218 "ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1800 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 221 "ptx.y" /* yacc.c:1646  */
    {func_header_info_int(".maxntid", (yyvsp[-4].int_value));
										func_header_info_int(",", (yyvsp[-2].int_value));
										func_header_info_int(",", (yyvsp[0].int_value)); }
#line 1808 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 224 "ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".minnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .minnctapersm ignored. \n"); }
#line 1814 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 225 "ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".maxnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .maxnctapersm ignored. \n"); }
#line 1820 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 232 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[-1].int_value)); func_header_info("(");}
#line 1826 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 232 "ptx.y" /* yacc.c:1646  */
    {func_header_info(")");}
#line 1832 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 232 "ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1838 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 233 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); }
#line 1844 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 233 "ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1850 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 234 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); add_function_name(""); g_func_decl=0; (yyval.ptr_value) = reset_symtab(); }
#line 1856 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 237 "ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); }
#line 1862 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 237 "ptx.y" /* yacc.c:1646  */
    {func_header_info("(");}
#line 1868 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 237 "ptx.y" /* yacc.c:1646  */
    { g_func_decl=0; func_header_info(")"); }
#line 1874 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 238 "ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); g_func_decl=0; }
#line 1880 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 241 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1886 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 242 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1892 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 243 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1898 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 244 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 2; g_func_decl=1; func_header(".func"); }
#line 1904 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 248 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1910 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 249 "ptx.y" /* yacc.c:1646  */
    {func_header_info(",");}
#line 1916 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 249 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1922 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 251 "ptx.y" /* yacc.c:1646  */
    { add_space_spec(param_space_unclassified,0); }
#line 1928 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 251 "ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1934 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 252 "ptx.y" /* yacc.c:1646  */
    { add_space_spec(reg_space,0); }
#line 1940 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 252 "ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1946 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 258 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(global_space); }
#line 1952 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 259 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(local_space); }
#line 1958 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 260 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(shared_space); }
#line 1964 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 261 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(const_space); }
#line 1970 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 267 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1976 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 268 "ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 1982 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 269 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1988 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 270 "ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 1994 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 276 "ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[0].double_value), 0); }
#line 2000 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 277 "ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[-1].double_value),1); }
#line 2006 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 278 "ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2012 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 279 "ptx.y" /* yacc.c:1646  */
    { target_header2((yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2018 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 280 "ptx.y" /* yacc.c:1646  */
    { target_header3((yyvsp[-4].string_value),(yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2024 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 281 "ptx.y" /* yacc.c:1646  */
    { target_header((yyvsp[0].string_value)); }
#line 2030 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 282 "ptx.y" /* yacc.c:1646  */
    { add_file((yyvsp[-1].int_value),(yyvsp[0].string_value)); }
#line 2036 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 284 "ptx.y" /* yacc.c:1646  */
    { add_pragma((yyvsp[-1].string_value)); }
#line 2042 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 285 "ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2048 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 288 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2054 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 289 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2060 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 290 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2066 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 291 "ptx.y" /* yacc.c:1646  */
    { add_constptr((yyvsp[-4].string_value), (yyvsp[-2].string_value), (yyvsp[0].int_value)); }
#line 2072 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 294 "ptx.y" /* yacc.c:1646  */
    { set_variable_type(); }
#line 2078 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 299 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[0].string_value),0,NON_ARRAY_IDENTIFIER); func_header_info((yyvsp[0].string_value));}
#line 2084 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 300 "ptx.y" /* yacc.c:1646  */
    { func_header_info((yyvsp[-3].string_value)); func_header_info_int("<", (yyvsp[-1].int_value)); func_header_info(">");
		int i,lbase,l;
		char *id = NULL;
		lbase = strlen((yyvsp[-3].string_value));
		for( i=0; i < (yyvsp[-1].int_value); i++ ) { 
			l = lbase + (int)log10(i+1)+10;
			id = (char*) malloc(l);
			snprintf(id,l,"%s%u",(yyvsp[-3].string_value),i);
			add_identifier(id,0,NON_ARRAY_IDENTIFIER); 
		}
		free((yyvsp[-3].string_value));
	}
#line 2101 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 312 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-2].string_value),0,ARRAY_IDENTIFIER_NO_DIM); func_header_info((yyvsp[-2].string_value)); func_header_info("["); func_header_info("]");}
#line 2107 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 313 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-3].string_value),(yyvsp[-1].int_value),ARRAY_IDENTIFIER); func_header_info((yyvsp[-3].string_value)); func_header_info_int("[",(yyvsp[-1].int_value)); func_header_info("]");}
#line 2113 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 323 "ptx.y" /* yacc.c:1646  */
    { add_extern_spec(); }
#line 2119 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 326 "ptx.y" /* yacc.c:1646  */
    { add_alignment_spec((yyvsp[0].int_value)); }
#line 2125 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 328 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2131 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 329 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2137 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 333 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(const_space,(yyvsp[0].int_value)); }
#line 2143 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 334 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(global_space,0); }
#line 2149 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 335 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(local_space,0); }
#line 2155 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 336 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(param_space_unclassified,0); }
#line 2161 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 337 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(shared_space,0); }
#line 2167 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 338 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(surf_space,0); }
#line 2173 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 339 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(tex_space,0); }
#line 2179 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 346 "ptx.y" /* yacc.c:1646  */
    {  add_option(V2_TYPE); func_header_info(".v2");}
#line 2185 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 347 "ptx.y" /* yacc.c:1646  */
    {  add_option(V3_TYPE); func_header_info(".v3");}
#line 2191 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 348 "ptx.y" /* yacc.c:1646  */
    {  add_option(V4_TYPE); func_header_info(".v4");}
#line 2197 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 351 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S8_TYPE ); }
#line 2203 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 352 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S16_TYPE ); }
#line 2209 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 353 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S32_TYPE ); }
#line 2215 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 354 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S64_TYPE ); }
#line 2221 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 355 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U8_TYPE ); }
#line 2227 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 356 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U16_TYPE ); }
#line 2233 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 357 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U32_TYPE ); }
#line 2239 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 358 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U64_TYPE ); }
#line 2245 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 359 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F16_TYPE ); }
#line 2251 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 360 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F32_TYPE ); }
#line 2257 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 361 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F64_TYPE ); }
#line 2263 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 362 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( FF64_TYPE ); }
#line 2269 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 363 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B8_TYPE );  }
#line 2275 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 364 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B16_TYPE ); }
#line 2281 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 365 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B32_TYPE ); }
#line 2287 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 366 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B64_TYPE ); }
#line 2293 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 367 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB64_TYPE ); }
#line 2299 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 368 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB128_TYPE ); }
#line 2305 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 369 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( PRED_TYPE ); }
#line 2311 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 370 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( TEXREF_TYPE ); }
#line 2317 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 371 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SAMPLERREF_TYPE ); }
#line 2323 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 372 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SURFREF_TYPE ); }
#line 2329 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 375 "ptx.y" /* yacc.c:1646  */
    { add_array_initializer(); }
#line 2335 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 376 "ptx.y" /* yacc.c:1646  */
    { syntax_not_implemented(); }
#line 2341 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 382 "ptx.y" /* yacc.c:1646  */
    { add_label((yyvsp[-1].string_value)); }
#line 2347 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 385 "ptx.y" /* yacc.c:1646  */
    { set_return(); }
#line 2353 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 392 "ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2359 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 393 "ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2365 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 395 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),0, -1); }
#line 2371 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 396 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),1, -1); }
#line 2377 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 397 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,1); }
#line 2383 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 398 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,2); }
#line 2389 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 399 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,3); }
#line 2395 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 400 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,5); }
#line 2401 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 401 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,6); }
#line 2407 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 402 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,10); }
#line 2413 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 403 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,12); }
#line 2419 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 404 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,13); }
#line 2425 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 405 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,17); }
#line 2431 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 406 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,19); }
#line 2437 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 407 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,28); }
#line 2443 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 417 "ptx.y" /* yacc.c:1646  */
    { add_option(UNI_OPTION); }
#line 2449 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 418 "ptx.y" /* yacc.c:1646  */
    { add_option(WIDE_OPTION); }
#line 2455 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 419 "ptx.y" /* yacc.c:1646  */
    { add_option(ANY_OPTION); }
#line 2461 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 420 "ptx.y" /* yacc.c:1646  */
    { add_option(ALL_OPTION); }
#line 2467 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 421 "ptx.y" /* yacc.c:1646  */
    { add_option(BALLOT_OPTION); }
#line 2473 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 422 "ptx.y" /* yacc.c:1646  */
    { add_option(GLOBAL_OPTION); }
#line 2479 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 423 "ptx.y" /* yacc.c:1646  */
    { add_option(CTA_OPTION); }
#line 2485 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 424 "ptx.y" /* yacc.c:1646  */
    { add_option(SYS_OPTION); }
#line 2491 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 425 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_1D); }
#line 2497 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 426 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_2D); }
#line 2503 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 427 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_3D); }
#line 2509 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 428 "ptx.y" /* yacc.c:1646  */
    { add_option(SAT_OPTION); }
#line 2515 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 429 "ptx.y" /* yacc.c:1646  */
    { add_option(FTZ_OPTION); }
#line 2521 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 430 "ptx.y" /* yacc.c:1646  */
    { add_option(NEG_OPTION); }
#line 2527 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 431 "ptx.y" /* yacc.c:1646  */
    { add_option(APPROX_OPTION); }
#line 2533 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 432 "ptx.y" /* yacc.c:1646  */
    { add_option(FULL_OPTION); }
#line 2539 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 433 "ptx.y" /* yacc.c:1646  */
    { add_option(EXIT_OPTION); }
#line 2545 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 434 "ptx.y" /* yacc.c:1646  */
    { add_option(ABS_OPTION); }
#line 2551 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 436 "ptx.y" /* yacc.c:1646  */
    { add_option(TO_OPTION); }
#line 2557 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 437 "ptx.y" /* yacc.c:1646  */
    { add_option(HALF_OPTION); }
#line 2563 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 438 "ptx.y" /* yacc.c:1646  */
    { add_option(CA_OPTION); }
#line 2569 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 439 "ptx.y" /* yacc.c:1646  */
    { add_option(CG_OPTION); }
#line 2575 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 440 "ptx.y" /* yacc.c:1646  */
    { add_option(CS_OPTION); }
#line 2581 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 441 "ptx.y" /* yacc.c:1646  */
    { add_option(LU_OPTION); }
#line 2587 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 442 "ptx.y" /* yacc.c:1646  */
    { add_option(CV_OPTION); }
#line 2593 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 443 "ptx.y" /* yacc.c:1646  */
    { add_option(WB_OPTION); }
#line 2599 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 444 "ptx.y" /* yacc.c:1646  */
    { add_option(WT_OPTION); }
#line 2605 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 445 "ptx.y" /* yacc.c:1646  */
    { add_option(SHFL_OPTION); }
#line 2611 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 446 "ptx.y" /* yacc.c:1646  */
    { add_option(SHFR_OPTION); }
#line 2617 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 447 "ptx.y" /* yacc.c:1646  */
    { add_option(CLAMP_OPTION); }
#line 2623 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 448 "ptx.y" /* yacc.c:1646  */
    { add_option(WRAP_OPTION); }
#line 2629 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 451 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_AND); }
#line 2635 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 452 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_OR); }
#line 2641 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 453 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_XOR); }
#line 2647 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 454 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_CAS); }
#line 2653 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 455 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_EXCH); }
#line 2659 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 456 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_ADD); }
#line 2665 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 457 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_INC); }
#line 2671 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 458 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_DEC); }
#line 2677 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 459 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MIN); }
#line 2683 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 460 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MAX); }
#line 2689 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 466 "ptx.y" /* yacc.c:1646  */
    { add_option(RN_OPTION); }
#line 2695 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 467 "ptx.y" /* yacc.c:1646  */
    { add_option(RZ_OPTION); }
#line 2701 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 468 "ptx.y" /* yacc.c:1646  */
    { add_option(RM_OPTION); }
#line 2707 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 469 "ptx.y" /* yacc.c:1646  */
    { add_option(RP_OPTION); }
#line 2713 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 472 "ptx.y" /* yacc.c:1646  */
    { add_option(RNI_OPTION); }
#line 2719 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 473 "ptx.y" /* yacc.c:1646  */
    { add_option(RZI_OPTION); }
#line 2725 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 474 "ptx.y" /* yacc.c:1646  */
    { add_option(RMI_OPTION); }
#line 2731 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 475 "ptx.y" /* yacc.c:1646  */
    { add_option(RPI_OPTION); }
#line 2737 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 478 "ptx.y" /* yacc.c:1646  */
    { add_option(EQ_OPTION); }
#line 2743 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 479 "ptx.y" /* yacc.c:1646  */
    { add_option(NE_OPTION); }
#line 2749 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 480 "ptx.y" /* yacc.c:1646  */
    { add_option(LT_OPTION); }
#line 2755 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 481 "ptx.y" /* yacc.c:1646  */
    { add_option(LE_OPTION); }
#line 2761 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 482 "ptx.y" /* yacc.c:1646  */
    { add_option(GT_OPTION); }
#line 2767 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 483 "ptx.y" /* yacc.c:1646  */
    { add_option(GE_OPTION); }
#line 2773 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 484 "ptx.y" /* yacc.c:1646  */
    { add_option(LO_OPTION); }
#line 2779 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 485 "ptx.y" /* yacc.c:1646  */
    { add_option(LS_OPTION); }
#line 2785 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 486 "ptx.y" /* yacc.c:1646  */
    { add_option(HI_OPTION); }
#line 2791 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 487 "ptx.y" /* yacc.c:1646  */
    { add_option(HS_OPTION); }
#line 2797 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 488 "ptx.y" /* yacc.c:1646  */
    { add_option(EQU_OPTION); }
#line 2803 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 489 "ptx.y" /* yacc.c:1646  */
    { add_option(NEU_OPTION); }
#line 2809 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 490 "ptx.y" /* yacc.c:1646  */
    { add_option(LTU_OPTION); }
#line 2815 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 491 "ptx.y" /* yacc.c:1646  */
    { add_option(LEU_OPTION); }
#line 2821 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 492 "ptx.y" /* yacc.c:1646  */
    { add_option(GTU_OPTION); }
#line 2827 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 493 "ptx.y" /* yacc.c:1646  */
    { add_option(GEU_OPTION); }
#line 2833 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 494 "ptx.y" /* yacc.c:1646  */
    { add_option(NUM_OPTION); }
#line 2839 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 495 "ptx.y" /* yacc.c:1646  */
    { add_option(NAN_OPTION); }
#line 2845 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 501 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); }
#line 2851 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 502 "ptx.y" /* yacc.c:1646  */
    { add_neg_pred_operand( (yyvsp[0].string_value) ); }
#line 2857 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 503 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); change_operand_neg(); }
#line 2863 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 508 "ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 2869 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 510 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 2875 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 511 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1);}
#line 2881 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 512 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1); change_operand_neg();}
#line 2887 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 513 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2);}
#line 2893 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 514 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2); change_operand_neg();}
#line 2899 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 515 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-1);}
#line 2905 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 516 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(1);}
#line 2911 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 517 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(2);}
#line 2917 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 518 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-3);}
#line 2923 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 519 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(1);}
#line 2929 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 520 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(2);}
#line 2935 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 523 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2941 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 524 "ptx.y" /* yacc.c:1646  */
    { add_3vector_operand((yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2947 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 525 "ptx.y" /* yacc.c:1646  */
    { add_4vector_operand((yyvsp[-7].string_value),(yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2953 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 526 "ptx.y" /* yacc.c:1646  */
    { add_1vector_operand((yyvsp[-1].string_value)); }
#line 2959 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 529 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand((yyvsp[-1].string_value)); }
#line 2965 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 534 "ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[-1].int_value),(yyvsp[0].int_value)); }
#line 2971 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 535 "ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[0].int_value),-1); }
#line 2977 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 538 "ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); }
#line 2983 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 539 "ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); change_memory_addr_space((yyvsp[-3].string_value)); }
#line 2989 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 540 "ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); }
#line 2995 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 541 "ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); add_memory_operand();}
#line 3001 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 542 "ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 3007 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 545 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(1); }
#line 3013 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 546 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(1); }
#line 3019 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 547 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(2); }
#line 3025 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 548 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[0].string_value)); change_double_operand_type(2); }
#line 3031 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 549 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(1); }
#line 3037 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 550 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(2); }
#line 3043 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 551 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-3].string_value),(yyvsp[0].int_value)); change_double_operand_type(3); }
#line 3049 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 554 "ptx.y" /* yacc.c:1646  */
    { add_literal_int((yyvsp[0].int_value)); }
#line 3055 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 555 "ptx.y" /* yacc.c:1646  */
    { add_literal_float((yyvsp[0].float_value)); }
#line 3061 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 556 "ptx.y" /* yacc.c:1646  */
    { add_literal_double((yyvsp[0].double_value)); }
#line 3067 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 559 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[0].string_value),0); }
#line 3073 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 560 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(1);}
#line 3079 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 561 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(2); }
#line 3085 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 562 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3091 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 563 "ptx.y" /* yacc.c:1646  */
    { add_address_operand2((yyvsp[0].int_value)); }
#line 3097 "ptx.tab.c" /* yacc.c:1646  */
    break;


#line 3101 "ptx.tab.c" /* yacc.c:1646  */
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
#line 566 "ptx.y" /* yacc.c:1906  */


extern int ptx_lineno;
extern const char *g_filename;

void syntax_not_implemented()
{
	printf("Parse error (%s:%u): this syntax is not (yet) implemented:\n",g_filename,ptx_lineno);
	ptx_error(NULL);
	abort();
}
