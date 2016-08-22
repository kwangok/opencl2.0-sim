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
    WEAK_DIRECTIVE = 294,
    IDENTIFIER = 295,
    INT_OPERAND = 296,
    FLOAT_OPERAND = 297,
    DOUBLE_OPERAND = 298,
    S8_TYPE = 299,
    S16_TYPE = 300,
    S32_TYPE = 301,
    S64_TYPE = 302,
    U8_TYPE = 303,
    U16_TYPE = 304,
    U32_TYPE = 305,
    U64_TYPE = 306,
    F16_TYPE = 307,
    F32_TYPE = 308,
    F64_TYPE = 309,
    FF64_TYPE = 310,
    B8_TYPE = 311,
    B16_TYPE = 312,
    B32_TYPE = 313,
    B64_TYPE = 314,
    BB64_TYPE = 315,
    BB128_TYPE = 316,
    PRED_TYPE = 317,
    TEXREF_TYPE = 318,
    SAMPLERREF_TYPE = 319,
    SURFREF_TYPE = 320,
    V2_TYPE = 321,
    V3_TYPE = 322,
    V4_TYPE = 323,
    COMMA = 324,
    PRED = 325,
    HALF_OPTION = 326,
    EQ_OPTION = 327,
    NE_OPTION = 328,
    LT_OPTION = 329,
    LE_OPTION = 330,
    GT_OPTION = 331,
    GE_OPTION = 332,
    LO_OPTION = 333,
    LS_OPTION = 334,
    HI_OPTION = 335,
    HS_OPTION = 336,
    EQU_OPTION = 337,
    NEU_OPTION = 338,
    LTU_OPTION = 339,
    LEU_OPTION = 340,
    GTU_OPTION = 341,
    GEU_OPTION = 342,
    NUM_OPTION = 343,
    NAN_OPTION = 344,
    CF_OPTION = 345,
    SF_OPTION = 346,
    NSF_OPTION = 347,
    LEFT_SQUARE_BRACKET = 348,
    RIGHT_SQUARE_BRACKET = 349,
    WIDE_OPTION = 350,
    SPECIAL_REGISTER = 351,
    MINUS = 352,
    PLUS = 353,
    COLON = 354,
    SEMI_COLON = 355,
    EXCLAMATION = 356,
    PIPE = 357,
    RIGHT_BRACE = 358,
    LEFT_BRACE = 359,
    EQUALS = 360,
    PERIOD = 361,
    BACKSLASH = 362,
    DIMENSION_MODIFIER = 363,
    RN_OPTION = 364,
    RZ_OPTION = 365,
    RM_OPTION = 366,
    RP_OPTION = 367,
    RNI_OPTION = 368,
    RZI_OPTION = 369,
    RMI_OPTION = 370,
    RPI_OPTION = 371,
    UNI_OPTION = 372,
    GEOM_MODIFIER_1D = 373,
    GEOM_MODIFIER_2D = 374,
    GEOM_MODIFIER_3D = 375,
    SAT_OPTION = 376,
    FTZ_OPTION = 377,
    NEG_OPTION = 378,
    ATOMIC_AND = 379,
    ATOMIC_OR = 380,
    ATOMIC_XOR = 381,
    ATOMIC_CAS = 382,
    ATOMIC_EXCH = 383,
    ATOMIC_ADD = 384,
    ATOMIC_INC = 385,
    ATOMIC_DEC = 386,
    ATOMIC_MIN = 387,
    ATOMIC_MAX = 388,
    LEFT_ANGLE_BRACKET = 389,
    RIGHT_ANGLE_BRACKET = 390,
    LEFT_PAREN = 391,
    RIGHT_PAREN = 392,
    APPROX_OPTION = 393,
    FULL_OPTION = 394,
    ANY_OPTION = 395,
    ALL_OPTION = 396,
    BALLOT_OPTION = 397,
    GLOBAL_OPTION = 398,
    CTA_OPTION = 399,
    SYS_OPTION = 400,
    EXIT_OPTION = 401,
    ABS_OPTION = 402,
    TO_OPTION = 403,
    CA_OPTION = 404,
    CG_OPTION = 405,
    CS_OPTION = 406,
    LU_OPTION = 407,
    CV_OPTION = 408,
    WB_OPTION = 409,
    WT_OPTION = 410,
    SHFL_OPTION = 411,
    SHFR_OPTION = 412,
    CLAMP_OPTION = 413,
    WRAP_OPTION = 414,
    TESTP_FINITE = 415,
    TESTP_INFINITE = 416,
    TESTP_NUMBER = 417,
    TESTP_NOTANUMBER = 418,
    TESTP_NORMAL = 419,
    TESTP_SUBNORMAL = 420,
    SHIFTAMT_OPTION = 421,
    CARRY_FLAG = 422,
    UP_OPTION = 423,
    DOWN_OPTION = 424,
    BFLY_OPTION = 425,
    IDX_OPTION = 426,
    F4E_OPTION = 427,
    B4E_OPTION = 428,
    RC8_OPTION = 429,
    ECL_OPTION = 430,
    ECR_OPTION = 431,
    RC16_OPTION = 432
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

#line 301 "ptx.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ptx_lval;

int ptx_parse (void);

#endif /* !YY_PTX_PTX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 217 "ptx.y" /* yacc.c:358  */

  	#include "ptx_parser.h"
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	void syntax_not_implemented();
	extern int g_func_decl;
	int ptx_lex(void);
	int ptx_error(const char *);

#line 326 "ptx.tab.c" /* yacc.c:358  */

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
#define YYLAST   655

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  178
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  297
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  406

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   432

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
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   230,   230,   231,   232,   233,   236,   236,   237,   237,
     237,   240,   243,   244,   247,   248,   251,   251,   251,   252,
     252,   253,   256,   256,   256,   257,   260,   261,   262,   263,
     264,   265,   268,   269,   270,   270,   272,   272,   273,   273,
     275,   276,   277,   279,   280,   281,   282,   283,   285,   287,
     289,   290,   291,   292,   293,   294,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   310,   311,   312,
     313,   316,   318,   319,   321,   322,   334,   335,   338,   339,
     341,   342,   343,   344,   345,   348,   350,   351,   352,   355,
     356,   357,   358,   359,   360,   361,   362,   365,   366,   369,
     370,   371,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   398,   399,   401,   402,   404,   405,
     406,   408,   408,   409,   410,   411,   412,   415,   415,   416,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   433,   434,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   489,   490,   491,   492,   493,   494,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     508,   509,   511,   512,   513,   514,   517,   518,   519,   520,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   543,   544,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     568,   569,   570,   571,   574,   574,   579,   580,   583,   584,
     585,   586,   587,   590,   591,   592,   593,   594,   595,   596,
     599,   600,   601,   604,   605,   606,   607,   608
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
  "WEAK_DIRECTIVE", "IDENTIFIER", "INT_OPERAND", "FLOAT_OPERAND",
  "DOUBLE_OPERAND", "S8_TYPE", "S16_TYPE", "S32_TYPE", "S64_TYPE",
  "U8_TYPE", "U16_TYPE", "U32_TYPE", "U64_TYPE", "F16_TYPE", "F32_TYPE",
  "F64_TYPE", "FF64_TYPE", "B8_TYPE", "B16_TYPE", "B32_TYPE", "B64_TYPE",
  "BB64_TYPE", "BB128_TYPE", "PRED_TYPE", "TEXREF_TYPE", "SAMPLERREF_TYPE",
  "SURFREF_TYPE", "V2_TYPE", "V3_TYPE", "V4_TYPE", "COMMA", "PRED",
  "HALF_OPTION", "EQ_OPTION", "NE_OPTION", "LT_OPTION", "LE_OPTION",
  "GT_OPTION", "GE_OPTION", "LO_OPTION", "LS_OPTION", "HI_OPTION",
  "HS_OPTION", "EQU_OPTION", "NEU_OPTION", "LTU_OPTION", "LEU_OPTION",
  "GTU_OPTION", "GEU_OPTION", "NUM_OPTION", "NAN_OPTION", "CF_OPTION",
  "SF_OPTION", "NSF_OPTION", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "WIDE_OPTION", "SPECIAL_REGISTER", "MINUS", "PLUS", "COLON",
  "SEMI_COLON", "EXCLAMATION", "PIPE", "RIGHT_BRACE", "LEFT_BRACE",
  "EQUALS", "PERIOD", "BACKSLASH", "DIMENSION_MODIFIER", "RN_OPTION",
  "RZ_OPTION", "RM_OPTION", "RP_OPTION", "RNI_OPTION", "RZI_OPTION",
  "RMI_OPTION", "RPI_OPTION", "UNI_OPTION", "GEOM_MODIFIER_1D",
  "GEOM_MODIFIER_2D", "GEOM_MODIFIER_3D", "SAT_OPTION", "FTZ_OPTION",
  "NEG_OPTION", "ATOMIC_AND", "ATOMIC_OR", "ATOMIC_XOR", "ATOMIC_CAS",
  "ATOMIC_EXCH", "ATOMIC_ADD", "ATOMIC_INC", "ATOMIC_DEC", "ATOMIC_MIN",
  "ATOMIC_MAX", "LEFT_ANGLE_BRACKET", "RIGHT_ANGLE_BRACKET", "LEFT_PAREN",
  "RIGHT_PAREN", "APPROX_OPTION", "FULL_OPTION", "ANY_OPTION",
  "ALL_OPTION", "BALLOT_OPTION", "GLOBAL_OPTION", "CTA_OPTION",
  "SYS_OPTION", "EXIT_OPTION", "ABS_OPTION", "TO_OPTION", "CA_OPTION",
  "CG_OPTION", "CS_OPTION", "LU_OPTION", "CV_OPTION", "WB_OPTION",
  "WT_OPTION", "SHFL_OPTION", "SHFR_OPTION", "CLAMP_OPTION", "WRAP_OPTION",
  "TESTP_FINITE", "TESTP_INFINITE", "TESTP_NUMBER", "TESTP_NOTANUMBER",
  "TESTP_NORMAL", "TESTP_SUBNORMAL", "SHIFTAMT_OPTION", "CARRY_FLAG",
  "UP_OPTION", "DOWN_OPTION", "BFLY_OPTION", "IDX_OPTION", "F4E_OPTION",
  "B4E_OPTION", "RC8_OPTION", "ECL_OPTION", "ECR_OPTION", "RC16_OPTION",
  "$accept", "input", "function_defn", "$@1", "$@2", "$@3", "block_spec",
  "block_spec_list", "function_decl", "$@4", "$@5", "$@6",
  "function_ident_param", "$@7", "$@8", "function_decl_header",
  "param_list", "$@9", "param_entry", "$@10", "$@11", "ptr_spec",
  "ptr_space_spec", "ptr_align_spec", "statement_block", "statement_list",
  "directive_statement", "variable_declaration", "variable_spec",
  "identifier_list", "identifier_spec", "var_spec_list", "var_spec",
  "align_spec", "space_spec", "addressable_spec", "type_spec",
  "vector_spec", "scalar_type", "initializer_list", "literal_list",
  "instruction_statement", "instruction", "$@12", "opcode_spec", "$@13",
  "pred_spec", "option_list", "option", "testp_operation_spec",
  "atomic_operation_spec", "rounding_mode", "floating_point_rounding_mode",
  "integer_rounding_mode", "compare_spec", "operand_list", "operand",
  "vector_operand", "tex_operand", "$@14", "builtin_operand",
  "memory_operand", "twin_operand", "literal_operand",
  "address_expression", YY_NULLPTR
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
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432
};
# endif

#define YYPACT_NINF -292

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-292)))

#define YYTABLE_NINF -140

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -292,   480,  -292,   -24,  -292,   -18,  -292,    13,    29,  -292,
    -292,  -292,    81,  -292,   134,  -292,  -292,  -292,  -292,   109,
    -292,   115,   125,     3,   202,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,    -2,   -31,  -292,    62,   141,   544,  -292,  -292,  -292,
    -292,  -292,   569,  -292,  -292,   122,  -292,   206,   164,   110,
     171,   135,  -292,  -292,  -292,  -292,   233,  -292,  -292,   140,
     205,  -292,   208,  -292,   -79,   177,   151,  -292,  -292,  -292,
    -292,   218,  -292,   222,  -292,   219,  -292,   411,  -292,   227,
     229,   232,  -292,   205,     1,   139,  -292,   -26,   236,   141,
      84,   209,  -292,   211,    72,   207,   -32,   231,  -292,    27,
    -292,  -292,   234,    78,   303,  -292,   264,  -292,   140,  -292,
    -292,  -292,   198,   200,   243,  -292,   203,  -292,  -292,  -292,
    -292,    84,  -292,  -292,   298,   300,   237,  -292,   563,   301,
    -292,  -292,  -292,  -292,  -292,   100,    69,   263,    66,   302,
     304,    99,  -292,   274,  -292,  -292,  -292,  -292,  -292,   245,
     331,  -292,   544,   544,  -292,  -292,  -292,  -292,   270,   -45,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,   237,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,   287,   333,   377,   378,   144,  -292,   325,  -292,
     -67,    88,    67,  -292,  -292,  -292,   -41,   283,    93,  -292,
     354,   419,   141,   208,     1,  -292,   111,  -292,  -292,   -68,
    -292,   338,   339,   340,  -292,   121,   143,  -292,  -292,  -292,
     397,  -292,  -292,  -292,   137,   346,   402,  -292,  -292,     7,
    -292,   383,   405,   138,   141,  -292,  -292,   -36,  -292,  -292,
      -6,  -292,  -292,  -292,  -292,  -292,  -292,  -292,   349,  -292,
      48,   385,  -292,   345,    99,  -292,   442,  -292,  -292,  -292,
    -292,   235,   479,  -292,  -292,  -292,  -292,   152,   105,   392,
     447,  -292,    99,  -292,  -292,  -292,  -292,     1,  -292,  -292,
     159,  -292,  -292,    54,   420,  -292,  -292,  -292,   448,  -292,
     356,   398,    99,  -292,   363,  -292
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,    89,     0,    26,    84,     0,    28,
      90,    91,     0,    92,     0,    86,    93,    87,    94,     0,
      95,     0,     0,    82,     0,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    99,   100,   101,
       4,     5,    21,     3,     0,     0,    71,    78,    83,    80,
      88,    81,     0,    97,    85,     0,    30,     0,     0,     0,
      62,    57,    59,    27,    29,    31,     0,    96,    66,     0,
       0,    16,     0,    56,    74,    67,    72,    84,    82,    79,
      98,     0,    63,     0,    65,     0,    58,     0,     7,     0,
       0,     0,    14,     9,     0,    25,    20,     0,     0,     0,
       0,     0,    64,    60,   137,     0,     0,     0,    55,     0,
      50,    51,     0,   136,     0,    13,     0,    12,     0,    15,
      36,    38,     0,     0,     0,    76,     0,    73,   290,   291,
     292,     0,    68,    69,     0,     0,     0,   129,   140,     0,
      49,    54,    52,    53,   128,   250,     0,   277,     0,     0,
       0,     0,   135,   248,   256,   258,   255,   253,   254,     0,
       0,    10,     0,     0,    17,    23,    77,    75,     0,     0,
     126,    70,    61,   179,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   160,   222,   223,   224,   225,   226,   227,   228,
     229,   159,   167,   168,   169,   170,   171,   172,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   173,   174,
     161,   162,   163,   164,   165,   166,   175,   176,   178,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     204,   205,   206,   207,   208,   209,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   157,   155,
     138,   153,   191,   177,   158,   220,   221,   156,   143,   145,
     142,   144,   146,   147,   149,   148,   150,   151,   152,   141,
     260,   262,     0,     0,     0,     0,   293,   297,     0,   276,
     252,     0,     0,   257,   282,   251,     0,     0,     0,   130,
       0,    40,     0,     0,    32,   125,     0,   124,   154,   293,
     290,     0,     0,     0,   259,   264,   267,   274,   294,   295,
       0,   278,   261,   263,   293,     0,     0,   273,   131,     0,
     249,   248,     0,     0,     0,    39,    18,     0,    33,   127,
       0,   281,   280,   279,   265,   266,   268,   269,     0,   296,
       0,     0,   134,     0,     0,    11,     0,    46,    43,    44,
      45,     0,     0,    42,    37,    34,    24,   283,     0,     0,
       0,   270,     0,   133,    48,    47,    41,     0,   284,   285,
     286,   289,   275,     0,     0,    35,   287,   288,     0,   271,
       0,     0,     0,   272,     0,   132
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -292,  -292,  -292,  -292,  -292,  -292,   399,  -292,   502,  -292,
    -292,  -292,   194,  -292,  -292,  -292,  -292,  -292,  -291,  -292,
    -292,  -292,   149,   136,    19,  -292,    64,  -292,    12,  -292,
    -106,  -292,   455,  -292,  -292,   -22,  -139,  -292,   459,   381,
    -292,   404,   426,  -292,  -292,  -292,  -292,   280,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,  -123,  -122,  -154,  -292,  -292,
    -292,  -152,  -292,  -105,   260
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    50,    79,    80,   128,   102,   103,   117,   104,
     313,    82,   106,   133,   314,    52,   347,   387,   132,   172,
     173,   344,   372,   373,    98,   119,    53,    54,    55,    85,
      86,    56,    57,    58,    59,    60,    61,    62,    63,   142,
     179,   121,   122,   361,   123,   146,   124,   270,   271,   272,
     273,   274,   275,   276,   277,   340,   341,   164,   165,   358,
     166,   167,   321,   168,   298
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     162,   163,    77,   137,   303,   143,   304,   269,   148,   -19,
     328,   332,   329,   333,   107,   134,    73,    64,    -8,    74,
      -8,    -8,    65,   348,   316,   130,   292,   131,   336,    66,
     350,   114,     3,   375,   377,   359,   180,     4,     5,   307,
       6,     7,     8,     9,    10,    11,    12,   155,   138,   139,
     140,    13,    14,    15,    77,   108,    16,    17,   317,    18,
      19,    20,   337,    21,    22,    23,    24,   115,   135,   149,
      67,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   395,   116,    78,   378,
     156,   376,    -6,   157,   158,    81,   300,   335,   159,   296,
     297,   160,  -139,  -139,  -139,  -139,   118,   380,   155,   138,
     139,   140,    68,   398,   268,   138,   139,   140,   334,   297,
     150,    97,   269,   155,   138,   139,   140,    69,   151,   155,
     138,   139,   140,   366,   362,   390,   391,   171,   367,    70,
     304,   381,   138,   139,   140,   368,   369,   399,    71,   301,
     301,   120,    83,   302,   302,  -139,    72,   370,  -139,  -139,
     160,   156,  -139,  -139,   157,   158,  -139,   371,   290,   159,
     291,    84,   160,   152,   311,   312,   156,   322,   141,   157,
     158,    91,   156,   292,   159,   157,   158,   160,   293,   354,
     159,   355,   294,   160,   379,    93,   345,   295,  -139,    92,
      94,   349,     4,   327,   161,   328,   363,   329,    75,    10,
      11,   356,   328,   357,   329,    99,    13,   100,   101,   339,
     388,    16,   389,    96,    18,   330,    20,   396,   374,   397,
      95,    76,   330,     4,    97,   367,   109,     4,   105,   268,
      10,    11,   368,   369,    10,    11,   110,    13,   111,   113,
     394,    13,    16,   112,   370,    18,    16,    20,   125,    18,
     126,    20,    76,   127,   371,   -22,    76,   136,   144,   404,
     145,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   147,   114,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   319,   320,   139,
     140,    78,   202,   170,   154,   174,   175,   176,   177,   181,
     182,   289,   305,   308,   306,   309,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   299,   310,   315,   324,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   114,     3,   325,   326,   331,
     338,     4,     5,   342,     6,     7,     8,     9,    10,    11,
      12,   343,   351,   352,   353,    13,    14,    15,   359,   292,
      16,    17,   360,    18,    19,    20,   365,    21,    22,    23,
      24,   115,   364,   160,   382,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       2,   116,   383,   384,   366,     3,   392,   393,   401,   400,
       4,     5,   402,     6,     7,     8,     9,    10,    11,    12,
     405,   403,   129,    51,    13,    14,    15,   346,   386,    16,
      17,    89,    18,    19,    20,    97,    21,    22,    23,    24,
     385,    90,   178,   153,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,     3,
     169,   318,   323,     0,     4,     0,     0,     0,    87,     0,
       0,    10,    11,     0,     0,     0,     0,     0,    13,     0,
      15,     0,     0,    16,    17,     0,    18,     0,    20,     0,
       0,     0,    88,    76,     0,     0,     0,     0,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,   278,   279,   280,   281,     0,
     282,     0,     0,     0,     0,   283,   284,     0,     0,   285,
       0,     0,     0,   286,   287,   288
};

static const yytype_int16 yycheck[] =
{
     123,   123,    24,   109,   158,   110,   158,   146,    40,    40,
      78,    78,    80,    80,    93,    41,    13,    41,    20,    16,
      22,    23,    40,   314,    69,    24,    93,    26,    69,    16,
      98,     4,     5,    69,    40,    41,   141,    10,    11,   161,
      13,    14,    15,    16,    17,    18,    19,    40,    41,    42,
      43,    24,    25,    26,    76,   134,    29,    30,   103,    32,
      33,    34,   103,    36,    37,    38,    39,    40,    94,   101,
      41,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   387,    70,   100,   105,
      93,   137,   104,    96,    97,   136,    40,    40,   101,    40,
      41,   104,    40,    41,    42,    43,    97,    69,    40,    41,
      42,    43,    41,    69,   146,    41,    42,    43,    40,    41,
     103,   104,   271,    40,    41,    42,    43,     3,   119,    40,
      41,    42,    43,     5,   137,    40,    41,   128,    10,    40,
     302,   103,    41,    42,    43,    17,    18,   103,    43,    93,
      93,    97,   100,    97,    97,    93,    41,    29,    96,    97,
     104,    93,   100,   101,    96,    97,   104,    39,    78,   101,
      80,    40,   104,   119,   172,   173,    93,   292,   104,    96,
      97,    69,    93,    93,   101,    96,    97,   104,    98,    78,
     101,    80,   102,   104,   358,    41,   312,   107,   136,     3,
     100,   316,    10,    69,   136,    78,   339,    80,    16,    17,
      18,    78,    78,    80,    80,    20,    24,    22,    23,   136,
      78,    29,    80,    98,    32,    98,    34,    78,   344,    80,
      69,    39,    98,    10,   104,    10,    69,    10,    40,   271,
      17,    18,    17,    18,    17,    18,   105,    24,    40,    40,
     382,    24,    29,    41,    29,    32,    29,    34,    41,    32,
      41,    34,    39,    41,    39,   136,    39,    41,    69,   402,
      69,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    99,     4,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    40,    41,    42,
      43,   100,    95,    69,   100,   137,   136,    94,   135,    41,
      40,    40,    40,    69,    40,   100,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   108,    41,   103,    41,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,     4,     5,    40,    40,    94,
     137,    10,    11,    69,    13,    14,    15,    16,    17,    18,
      19,    12,    94,    94,    94,    24,    25,    26,    41,    93,
      29,    30,    40,    32,    33,    34,    41,    36,    37,    38,
      39,    40,    69,   104,    69,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    70,   137,    41,     5,     5,    94,    40,    40,    69,
      10,    11,   136,    13,    14,    15,    16,    17,    18,    19,
     137,   103,   103,     1,    24,    25,    26,   313,   372,    29,
      30,    56,    32,    33,    34,   104,    36,    37,    38,    39,
     371,    62,   141,   119,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     5,
     124,   271,   292,    -1,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    72,    73,    74,    75,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   179,     0,     5,    10,    11,    13,    14,    15,    16,
      17,    18,    19,    24,    25,    26,    29,    30,    32,    33,
      34,    36,    37,    38,    39,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     180,   186,   193,   204,   205,   206,   209,   210,   211,   212,
     213,   214,   215,   216,    41,    40,    16,    41,    41,     3,
      40,    43,    41,    13,    16,    16,    39,   213,   100,   181,
     182,   136,   189,   100,    40,   207,   208,    14,    38,   210,
     216,    69,     3,    41,   100,    69,    98,   104,   202,    20,
      22,    23,   184,   185,   187,    40,   190,    93,   134,    69,
     105,    40,    41,    40,     4,    40,    70,   186,   202,   203,
     204,   219,   220,   222,   224,    41,    41,    41,   183,   184,
      24,    26,   196,   191,    41,    94,    41,   208,    41,    42,
      43,   104,   217,   241,    69,    69,   223,    99,    40,   101,
     103,   202,   204,   219,   100,    40,    93,    96,    97,   101,
     104,   136,   233,   234,   235,   236,   238,   239,   241,   220,
      69,   202,   197,   198,   137,   136,    94,   135,   217,   218,
     241,    41,    40,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    95,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   213,   214,
     225,   226,   227,   228,   229,   230,   231,   232,    72,    73,
      74,    75,    77,    82,    83,    86,    90,    91,    92,    40,
      78,    80,    93,    98,   102,   107,    40,    41,   242,   108,
      40,    93,    97,   235,   239,    40,    40,   234,    69,   100,
      41,   206,   206,   188,   192,   103,    69,   103,   225,    40,
      41,   240,   241,   242,    41,    40,    40,    69,    78,    80,
      98,    94,    78,    80,    40,    40,    69,   103,   137,   136,
     233,   234,    69,    12,   199,   208,   190,   194,   196,   241,
      98,    94,    94,    94,    78,    80,    78,    80,   237,    41,
      40,   221,   137,   233,    69,    41,     5,    10,    17,    18,
      29,    39,   200,   201,   208,    69,   137,    40,   105,   235,
      69,   103,    69,   137,    41,   200,   201,   195,    78,    80,
      40,    41,    94,    40,   234,   196,    78,    80,    69,   103,
      69,    40,   136,   103,   233,   137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   178,   179,   179,   179,   179,   181,   180,   182,   183,
     180,   184,   184,   184,   185,   185,   187,   188,   186,   189,
     186,   186,   191,   192,   190,   190,   193,   193,   193,   193,
     193,   193,   194,   194,   195,   194,   197,   196,   198,   196,
     199,   199,   199,   200,   200,   200,   200,   200,   201,   202,
     203,   203,   203,   203,   203,   203,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   205,   205,   205,
     205,   206,   207,   207,   208,   208,   208,   208,   209,   209,
     210,   210,   210,   210,   210,   211,   212,   212,   212,   213,
     213,   213,   213,   213,   213,   213,   213,   214,   214,   215,
     215,   215,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   217,   217,   218,   218,   219,   219,
     219,   221,   220,   220,   220,   220,   220,   223,   222,   222,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   225,   225,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   227,   227,   227,   227,   227,   227,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     229,   229,   230,   230,   230,   230,   231,   231,   231,   231,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   233,   233,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     235,   235,   235,   235,   237,   236,   238,   238,   239,   239,
     239,   239,   239,   240,   240,   240,   240,   240,   240,   240,
     241,   241,   241,   242,   242,   242,   242,   242
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     0,     3,     0,     0,
       5,     6,     2,     2,     1,     2,     0,     0,     7,     0,
       3,     1,     0,     0,     6,     1,     1,     2,     1,     2,
       2,     2,     0,     1,     0,     4,     0,     5,     0,     4,
       0,     3,     2,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     2,     2,     2,     1,     2,     2,     3,     2,
       4,     6,     2,     3,     4,     3,     2,     2,     4,     4,
       6,     1,     1,     3,     1,     4,     3,     4,     1,     2,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     2,     2,
       3,     0,    11,     6,     5,     2,     1,     0,     3,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     2,     1,     1,     1,     1,     2,     1,     3,
       2,     3,     2,     3,     3,     4,     4,     3,     4,     4,
       5,     7,     9,     3,     0,     6,     2,     1,     3,     4,
       4,     4,     2,     3,     4,     4,     4,     5,     5,     4,
       1,     1,     1,     1,     2,     2,     3,     1
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
#line 236 "ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); func_header(".skip"); }
#line 1829 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 236 "ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1835 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 237 "ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); }
#line 1841 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 237 "ptx.y" /* yacc.c:1646  */
    { func_header(".skip"); }
#line 1847 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 237 "ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1853 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 240 "ptx.y" /* yacc.c:1646  */
    {func_header_info_int(".maxntid", (yyvsp[-4].int_value));
										func_header_info_int(",", (yyvsp[-2].int_value));
										func_header_info_int(",", (yyvsp[0].int_value)); }
#line 1861 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 243 "ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".minnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .minnctapersm ignored. \n"); }
#line 1867 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 244 "ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".maxnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .maxnctapersm ignored. \n"); }
#line 1873 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 251 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[-1].int_value)); func_header_info("(");}
#line 1879 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 251 "ptx.y" /* yacc.c:1646  */
    {func_header_info(")");}
#line 1885 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 251 "ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1891 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 252 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); }
#line 1897 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 252 "ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1903 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 253 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); add_function_name(""); g_func_decl=0; (yyval.ptr_value) = reset_symtab(); }
#line 1909 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 256 "ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); }
#line 1915 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 256 "ptx.y" /* yacc.c:1646  */
    {func_header_info("(");}
#line 1921 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 256 "ptx.y" /* yacc.c:1646  */
    { g_func_decl=0; func_header_info(")"); }
#line 1927 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 257 "ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); g_func_decl=0; }
#line 1933 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 260 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1939 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 261 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1945 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 262 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1951 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 263 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1957 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 264 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 2; g_func_decl=1; func_header(".func"); }
#line 1963 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 265 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1969 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 269 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1975 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 270 "ptx.y" /* yacc.c:1646  */
    {func_header_info(",");}
#line 1981 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 270 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1987 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 272 "ptx.y" /* yacc.c:1646  */
    { add_space_spec(param_space_unclassified,0); }
#line 1993 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 272 "ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1999 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 273 "ptx.y" /* yacc.c:1646  */
    { add_space_spec(reg_space,0); }
#line 2005 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 273 "ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 2011 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 279 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(global_space); }
#line 2017 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 280 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(local_space); }
#line 2023 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 281 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(shared_space); }
#line 2029 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 282 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(const_space); }
#line 2035 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 289 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 2041 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 290 "ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 2047 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 291 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 2053 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 292 "ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 2059 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 298 "ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[0].double_value), 0); }
#line 2065 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 299 "ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[-1].double_value),1); }
#line 2071 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 300 "ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2077 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 301 "ptx.y" /* yacc.c:1646  */
    { target_header2((yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2083 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 302 "ptx.y" /* yacc.c:1646  */
    { target_header3((yyvsp[-4].string_value),(yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2089 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 303 "ptx.y" /* yacc.c:1646  */
    { target_header((yyvsp[0].string_value)); }
#line 2095 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 304 "ptx.y" /* yacc.c:1646  */
    { add_file((yyvsp[-1].int_value),(yyvsp[0].string_value)); }
#line 2101 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 306 "ptx.y" /* yacc.c:1646  */
    { add_pragma((yyvsp[-1].string_value)); }
#line 2107 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 307 "ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2113 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 310 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2119 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 311 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2125 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 312 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2131 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 313 "ptx.y" /* yacc.c:1646  */
    { add_constptr((yyvsp[-4].string_value), (yyvsp[-2].string_value), (yyvsp[0].int_value)); }
#line 2137 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 316 "ptx.y" /* yacc.c:1646  */
    { set_variable_type(); }
#line 2143 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 321 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[0].string_value),0,NON_ARRAY_IDENTIFIER); func_header_info((yyvsp[0].string_value));}
#line 2149 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 322 "ptx.y" /* yacc.c:1646  */
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
#line 2166 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 334 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-2].string_value),0,ARRAY_IDENTIFIER_NO_DIM); func_header_info((yyvsp[-2].string_value)); func_header_info("["); func_header_info("]");}
#line 2172 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 335 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-3].string_value),(yyvsp[-1].int_value),ARRAY_IDENTIFIER); func_header_info((yyvsp[-3].string_value)); func_header_info_int("[",(yyvsp[-1].int_value)); func_header_info("]");}
#line 2178 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 345 "ptx.y" /* yacc.c:1646  */
    { add_extern_spec(); }
#line 2184 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 348 "ptx.y" /* yacc.c:1646  */
    { add_alignment_spec((yyvsp[0].int_value)); }
#line 2190 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 350 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2196 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 351 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2202 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 355 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(const_space,(yyvsp[0].int_value)); }
#line 2208 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 356 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(global_space,0); }
#line 2214 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 357 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(local_space,0); }
#line 2220 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 358 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(param_space_unclassified,0); }
#line 2226 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 359 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(shared_space,0); }
#line 2232 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 360 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(surf_space,0); }
#line 2238 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 361 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(tex_space,0); }
#line 2244 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 369 "ptx.y" /* yacc.c:1646  */
    {  add_option(V2_TYPE); func_header_info(".v2");}
#line 2250 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 370 "ptx.y" /* yacc.c:1646  */
    {  add_option(V3_TYPE); func_header_info(".v3");}
#line 2256 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 371 "ptx.y" /* yacc.c:1646  */
    {  add_option(V4_TYPE); func_header_info(".v4");}
#line 2262 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 374 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S8_TYPE ); }
#line 2268 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 375 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S16_TYPE ); }
#line 2274 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 376 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S32_TYPE ); }
#line 2280 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 377 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S64_TYPE ); }
#line 2286 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 378 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U8_TYPE ); }
#line 2292 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 379 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U16_TYPE ); }
#line 2298 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 380 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U32_TYPE ); }
#line 2304 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 381 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U64_TYPE ); }
#line 2310 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 382 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F16_TYPE ); }
#line 2316 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 383 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F32_TYPE ); }
#line 2322 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 384 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F64_TYPE ); }
#line 2328 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 385 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( FF64_TYPE ); }
#line 2334 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 386 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B8_TYPE );  }
#line 2340 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 387 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B16_TYPE ); }
#line 2346 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 388 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B32_TYPE ); }
#line 2352 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 389 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B64_TYPE ); }
#line 2358 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 390 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB64_TYPE ); }
#line 2364 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 391 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB128_TYPE ); }
#line 2370 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 392 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( PRED_TYPE ); }
#line 2376 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 393 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( TEXREF_TYPE ); }
#line 2382 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 394 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SAMPLERREF_TYPE ); }
#line 2388 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 395 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SURFREF_TYPE ); }
#line 2394 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 398 "ptx.y" /* yacc.c:1646  */
    { add_array_initializer(); }
#line 2400 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 399 "ptx.y" /* yacc.c:1646  */
    { syntax_not_implemented(); }
#line 2406 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 405 "ptx.y" /* yacc.c:1646  */
    { add_label((yyvsp[-1].string_value)); }
#line 2412 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 408 "ptx.y" /* yacc.c:1646  */
    { set_return(); }
#line 2418 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 415 "ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2424 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 416 "ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2430 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 418 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),0, -1); }
#line 2436 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 419 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),1, -1); }
#line 2442 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 420 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,1); }
#line 2448 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 421 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,2); }
#line 2454 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 422 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,3); }
#line 2460 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 423 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,5); }
#line 2466 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 424 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,6); }
#line 2472 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 425 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,10); }
#line 2478 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 426 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,12); }
#line 2484 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 427 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,13); }
#line 2490 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 428 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,17); }
#line 2496 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 429 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,19); }
#line 2502 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 430 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,28); }
#line 2508 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 440 "ptx.y" /* yacc.c:1646  */
    { add_option(UNI_OPTION); }
#line 2514 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 441 "ptx.y" /* yacc.c:1646  */
    { add_option(WIDE_OPTION); }
#line 2520 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 442 "ptx.y" /* yacc.c:1646  */
    { add_option(ANY_OPTION); }
#line 2526 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 443 "ptx.y" /* yacc.c:1646  */
    { add_option(ALL_OPTION); }
#line 2532 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 444 "ptx.y" /* yacc.c:1646  */
    { add_option(BALLOT_OPTION); }
#line 2538 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 445 "ptx.y" /* yacc.c:1646  */
    { add_option(GLOBAL_OPTION); }
#line 2544 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 446 "ptx.y" /* yacc.c:1646  */
    { add_option(CTA_OPTION); }
#line 2550 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 447 "ptx.y" /* yacc.c:1646  */
    { add_option(SYS_OPTION); }
#line 2556 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 448 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_1D); }
#line 2562 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 449 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_2D); }
#line 2568 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 450 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_3D); }
#line 2574 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 451 "ptx.y" /* yacc.c:1646  */
    { add_option(SAT_OPTION); }
#line 2580 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 452 "ptx.y" /* yacc.c:1646  */
    { add_option(FTZ_OPTION); }
#line 2586 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 453 "ptx.y" /* yacc.c:1646  */
    { add_option(NEG_OPTION); }
#line 2592 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 454 "ptx.y" /* yacc.c:1646  */
    { add_option(APPROX_OPTION); }
#line 2598 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 455 "ptx.y" /* yacc.c:1646  */
    { add_option(FULL_OPTION); }
#line 2604 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 456 "ptx.y" /* yacc.c:1646  */
    { add_option(EXIT_OPTION); }
#line 2610 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 457 "ptx.y" /* yacc.c:1646  */
    { add_option(ABS_OPTION); }
#line 2616 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 459 "ptx.y" /* yacc.c:1646  */
    { add_option(TO_OPTION); }
#line 2622 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 460 "ptx.y" /* yacc.c:1646  */
    { add_option(HALF_OPTION); }
#line 2628 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 461 "ptx.y" /* yacc.c:1646  */
    { add_option(CA_OPTION); }
#line 2634 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 462 "ptx.y" /* yacc.c:1646  */
    { add_option(CG_OPTION); }
#line 2640 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 463 "ptx.y" /* yacc.c:1646  */
    { add_option(CS_OPTION); }
#line 2646 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 464 "ptx.y" /* yacc.c:1646  */
    { add_option(LU_OPTION); }
#line 2652 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 465 "ptx.y" /* yacc.c:1646  */
    { add_option(CV_OPTION); }
#line 2658 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 466 "ptx.y" /* yacc.c:1646  */
    { add_option(WB_OPTION); }
#line 2664 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 467 "ptx.y" /* yacc.c:1646  */
    { add_option(WT_OPTION); }
#line 2670 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 468 "ptx.y" /* yacc.c:1646  */
    { add_option(SHFL_OPTION); }
#line 2676 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 469 "ptx.y" /* yacc.c:1646  */
    { add_option(SHFR_OPTION); }
#line 2682 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 470 "ptx.y" /* yacc.c:1646  */
    { add_option(CLAMP_OPTION); }
#line 2688 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 471 "ptx.y" /* yacc.c:1646  */
    { add_option(WRAP_OPTION); }
#line 2694 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 473 "ptx.y" /* yacc.c:1646  */
    { add_option(SHIFTAMT_OPTION); }
#line 2700 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 474 "ptx.y" /* yacc.c:1646  */
    { add_option(CARRY_FLAG); }
#line 2706 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 475 "ptx.y" /* yacc.c:1646  */
    { add_option(UP_OPTION); }
#line 2712 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 476 "ptx.y" /* yacc.c:1646  */
    { add_option(DOWN_OPTION); }
#line 2718 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 477 "ptx.y" /* yacc.c:1646  */
    { add_option(BFLY_OPTION); }
#line 2724 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 478 "ptx.y" /* yacc.c:1646  */
    { add_option(IDX_OPTION); }
#line 2730 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 479 "ptx.y" /* yacc.c:1646  */
    { add_option(F4E_OPTION); }
#line 2736 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 480 "ptx.y" /* yacc.c:1646  */
    { add_option(B4E_OPTION); }
#line 2742 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 481 "ptx.y" /* yacc.c:1646  */
    { add_option(RC8_OPTION); }
#line 2748 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 482 "ptx.y" /* yacc.c:1646  */
    { add_option(ECL_OPTION); }
#line 2754 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 483 "ptx.y" /* yacc.c:1646  */
    { add_option(ECR_OPTION); }
#line 2760 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 484 "ptx.y" /* yacc.c:1646  */
    { add_option(RC16_OPTION); }
#line 2766 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 489 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_FINITE); }
#line 2772 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 490 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_INFINITE); }
#line 2778 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 491 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_NUMBER); }
#line 2784 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 492 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_NOTANUMBER); }
#line 2790 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 493 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_NORMAL); }
#line 2796 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 494 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_SUBNORMAL); }
#line 2802 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 496 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_AND); }
#line 2808 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 497 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_OR); }
#line 2814 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 498 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_XOR); }
#line 2820 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 499 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_CAS); }
#line 2826 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 500 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_EXCH); }
#line 2832 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 501 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_ADD); }
#line 2838 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 502 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_INC); }
#line 2844 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 503 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_DEC); }
#line 2850 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 504 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MIN); }
#line 2856 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 505 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MAX); }
#line 2862 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 511 "ptx.y" /* yacc.c:1646  */
    { add_option(RN_OPTION); }
#line 2868 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 512 "ptx.y" /* yacc.c:1646  */
    { add_option(RZ_OPTION); }
#line 2874 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 513 "ptx.y" /* yacc.c:1646  */
    { add_option(RM_OPTION); }
#line 2880 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 514 "ptx.y" /* yacc.c:1646  */
    { add_option(RP_OPTION); }
#line 2886 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 517 "ptx.y" /* yacc.c:1646  */
    { add_option(RNI_OPTION); }
#line 2892 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 518 "ptx.y" /* yacc.c:1646  */
    { add_option(RZI_OPTION); }
#line 2898 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 519 "ptx.y" /* yacc.c:1646  */
    { add_option(RMI_OPTION); }
#line 2904 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 520 "ptx.y" /* yacc.c:1646  */
    { add_option(RPI_OPTION); }
#line 2910 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 523 "ptx.y" /* yacc.c:1646  */
    { add_option(EQ_OPTION); }
#line 2916 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 524 "ptx.y" /* yacc.c:1646  */
    { add_option(NE_OPTION); }
#line 2922 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 525 "ptx.y" /* yacc.c:1646  */
    { add_option(LT_OPTION); }
#line 2928 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 526 "ptx.y" /* yacc.c:1646  */
    { add_option(LE_OPTION); }
#line 2934 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 527 "ptx.y" /* yacc.c:1646  */
    { add_option(GT_OPTION); }
#line 2940 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 528 "ptx.y" /* yacc.c:1646  */
    { add_option(GE_OPTION); }
#line 2946 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 529 "ptx.y" /* yacc.c:1646  */
    { add_option(LO_OPTION); }
#line 2952 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 530 "ptx.y" /* yacc.c:1646  */
    { add_option(LS_OPTION); }
#line 2958 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 531 "ptx.y" /* yacc.c:1646  */
    { add_option(HI_OPTION); }
#line 2964 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 532 "ptx.y" /* yacc.c:1646  */
    { add_option(HS_OPTION); }
#line 2970 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 533 "ptx.y" /* yacc.c:1646  */
    { add_option(EQU_OPTION); }
#line 2976 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 534 "ptx.y" /* yacc.c:1646  */
    { add_option(NEU_OPTION); }
#line 2982 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 535 "ptx.y" /* yacc.c:1646  */
    { add_option(LTU_OPTION); }
#line 2988 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 536 "ptx.y" /* yacc.c:1646  */
    { add_option(LEU_OPTION); }
#line 2994 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 537 "ptx.y" /* yacc.c:1646  */
    { add_option(GTU_OPTION); }
#line 3000 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 538 "ptx.y" /* yacc.c:1646  */
    { add_option(GEU_OPTION); }
#line 3006 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 539 "ptx.y" /* yacc.c:1646  */
    { add_option(NUM_OPTION); }
#line 3012 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 540 "ptx.y" /* yacc.c:1646  */
    { add_option(NAN_OPTION); }
#line 3018 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 546 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); }
#line 3024 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 547 "ptx.y" /* yacc.c:1646  */
    { add_neg_pred_operand( (yyvsp[0].string_value) ); }
#line 3030 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 548 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); change_operand_neg(); }
#line 3036 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 553 "ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 3042 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 555 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3048 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 556 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1);}
#line 3054 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 557 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1); change_operand_neg();}
#line 3060 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 558 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2);}
#line 3066 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 559 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2); change_operand_neg();}
#line 3072 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 560 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-1);}
#line 3078 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 561 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(1);}
#line 3084 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 562 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(2);}
#line 3090 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 563 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-3);}
#line 3096 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 564 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(1);}
#line 3102 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 565 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(2);}
#line 3108 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 568 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3114 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 569 "ptx.y" /* yacc.c:1646  */
    { add_3vector_operand((yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3120 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 570 "ptx.y" /* yacc.c:1646  */
    { add_4vector_operand((yyvsp[-7].string_value),(yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3126 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 571 "ptx.y" /* yacc.c:1646  */
    { add_1vector_operand((yyvsp[-1].string_value)); }
#line 3132 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 574 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand((yyvsp[-1].string_value)); }
#line 3138 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 579 "ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[-1].int_value),(yyvsp[0].int_value)); }
#line 3144 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 580 "ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[0].int_value),-1); }
#line 3150 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 583 "ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); }
#line 3156 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 584 "ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); change_memory_addr_space((yyvsp[-3].string_value)); }
#line 3162 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 585 "ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); }
#line 3168 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 586 "ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); add_memory_operand();}
#line 3174 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 587 "ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 3180 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 590 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(1); }
#line 3186 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 591 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(1); }
#line 3192 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 592 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(2); }
#line 3198 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 593 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[0].string_value)); change_double_operand_type(2); }
#line 3204 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 594 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(1); }
#line 3210 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 595 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(2); }
#line 3216 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 596 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-3].string_value),(yyvsp[0].int_value)); change_double_operand_type(3); }
#line 3222 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 599 "ptx.y" /* yacc.c:1646  */
    { add_literal_int((yyvsp[0].int_value)); }
#line 3228 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 600 "ptx.y" /* yacc.c:1646  */
    { add_literal_float((yyvsp[0].float_value)); }
#line 3234 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 601 "ptx.y" /* yacc.c:1646  */
    { add_literal_double((yyvsp[0].double_value)); }
#line 3240 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 604 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[0].string_value),0); }
#line 3246 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 605 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(1);}
#line 3252 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 606 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(2); }
#line 3258 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 607 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3264 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 608 "ptx.y" /* yacc.c:1646  */
    { add_address_operand2((yyvsp[0].int_value)); }
#line 3270 "ptx.tab.c" /* yacc.c:1646  */
    break;


#line 3274 "ptx.tab.c" /* yacc.c:1646  */
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
#line 611 "ptx.y" /* yacc.c:1906  */


extern int ptx_lineno;
extern const char *g_filename;

void syntax_not_implemented()
{
	printf("Parse error (%s:%u): this syntax is not (yet) implemented:\n",g_filename,ptx_lineno);
	ptx_error(NULL);
	abort();
}
