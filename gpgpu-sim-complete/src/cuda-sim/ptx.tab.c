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
    WRAP_OPTION = 413,
    TESTP_FINITE = 414,
    TESTP_INFINITE = 415,
    TESTP_NUMBER = 416,
    TESTP_NOTANUMBER = 417,
    TESTP_NORMAL = 418,
    TESTP_SUBNORMAL = 419,
    SHIFTAMT_OPTION = 420,
    CARRY_FLAG = 421,
    UP_OPTION = 422,
    DOWN_OPTION = 423,
    BFLY_OPTION = 424,
    IDX_OPTION = 425,
    F4E_OPTION = 426,
    B4E_OPTION = 427,
    RC8_OPTION = 428,
    ECL_OPTION = 429,
    ECR_OPTION = 430,
    RC16_OPTION = 431
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

#line 300 "ptx.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ptx_lval;

int ptx_parse (void);

#endif /* !YY_PTX_PTX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 216 "ptx.y" /* yacc.c:358  */

  	#include "ptx_parser.h"
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	void syntax_not_implemented();
	extern int g_func_decl;
	int ptx_lex(void);
	int ptx_error(const char *);

#line 325 "ptx.tab.c" /* yacc.c:358  */

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
#define YYLAST   622

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  177
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  293
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  399

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   431

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
     175,   176
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   229,   229,   230,   231,   232,   235,   235,   236,   236,
     236,   239,   242,   243,   246,   247,   250,   250,   250,   251,
     251,   252,   255,   255,   255,   256,   259,   260,   261,   262,
     265,   266,   267,   267,   269,   269,   270,   270,   272,   273,
     274,   276,   277,   278,   279,   281,   283,   285,   286,   287,
     288,   289,   290,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   306,   307,   308,   309,   312,   314,
     315,   317,   318,   330,   331,   334,   335,   337,   338,   339,
     340,   341,   344,   346,   347,   348,   351,   352,   353,   354,
     355,   356,   357,   360,   361,   364,   365,   366,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     393,   394,   396,   397,   399,   400,   401,   403,   403,   404,
     405,   406,   407,   410,   410,   411,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   428,
     429,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     484,   485,   486,   487,   488,   489,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   503,   504,   506,   507,
     508,   509,   512,   513,   514,   515,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   538,   539,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   563,   564,   565,   566,
     569,   569,   574,   575,   578,   579,   580,   581,   582,   585,
     586,   587,   588,   589,   590,   591,   594,   595,   596,   599,
     600,   601,   602,   603
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
  "CLAMP_OPTION", "WRAP_OPTION", "TESTP_FINITE", "TESTP_INFINITE",
  "TESTP_NUMBER", "TESTP_NOTANUMBER", "TESTP_NORMAL", "TESTP_SUBNORMAL",
  "SHIFTAMT_OPTION", "CARRY_FLAG", "UP_OPTION", "DOWN_OPTION",
  "BFLY_OPTION", "IDX_OPTION", "F4E_OPTION", "B4E_OPTION", "RC8_OPTION",
  "ECL_OPTION", "ECR_OPTION", "RC16_OPTION", "$accept", "input",
  "function_defn", "$@1", "$@2", "$@3", "block_spec", "block_spec_list",
  "function_decl", "$@4", "$@5", "$@6", "function_ident_param", "$@7",
  "$@8", "function_decl_header", "param_list", "$@9", "param_entry",
  "$@10", "$@11", "ptr_spec", "ptr_space_spec", "ptr_align_spec",
  "statement_block", "statement_list", "directive_statement",
  "variable_declaration", "variable_spec", "identifier_list",
  "identifier_spec", "var_spec_list", "var_spec", "align_spec",
  "space_spec", "addressable_spec", "type_spec", "vector_spec",
  "scalar_type", "initializer_list", "literal_list",
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
     425,   426,   427,   428,   429,   430,   431
};
# endif

#define YYPACT_NINF -294

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-294)))

#define YYTABLE_NINF -136

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -294,   470,  -294,   -30,  -294,    26,  -294,    20,    53,  -294,
    -294,  -294,    63,  -294,   130,  -294,  -294,  -294,  -294,   163,
    -294,   170,   167,   205,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
     -11,   -31,  -294,   128,   191,   533,  -294,  -294,  -294,  -294,
    -294,   558,  -294,  -294,   166,  -294,   242,   208,   168,   210,
     207,  -294,  -294,  -294,   173,     0,  -294,   269,  -294,    87,
     241,   206,  -294,  -294,  -294,  -294,   272,  -294,   273,  -294,
     275,  -294,   311,  -294,   277,   278,   279,  -294,     0,    -7,
     177,  -294,   -27,   280,   191,    -8,   255,  -294,   274,   136,
     248,    -1,   252,  -294,   236,  -294,  -294,   253,   357,   349,
    -294,   313,  -294,   173,  -294,  -294,  -294,   243,   247,   290,
    -294,   251,  -294,  -294,  -294,  -294,    -8,  -294,  -294,   346,
     350,    -3,  -294,   351,   352,  -294,  -294,  -294,  -294,  -294,
     132,   -12,   283,    -2,   354,   355,   369,  -294,   332,  -294,
    -294,  -294,  -294,  -294,   302,   366,  -294,   533,   533,  -294,
    -294,  -294,  -294,   314,   112,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,    -3,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,  -294,   152,   373,   376,
     378,   122,  -294,   325,  -294,   165,   148,    93,  -294,  -294,
    -294,   113,   285,   363,  -294,   358,   417,   191,   269,    -7,
    -294,    56,  -294,  -294,   129,  -294,   337,   341,   342,  -294,
      23,   118,  -294,  -294,  -294,   397,  -294,  -294,  -294,   146,
     347,   399,  -294,  -294,   292,  -294,   375,   404,   402,   191,
    -294,  -294,   -50,  -294,  -294,   -15,  -294,  -294,  -294,  -294,
    -294,  -294,  -294,   343,  -294,   115,   377,  -294,   312,   369,
    -294,   407,  -294,  -294,  -294,  -294,   445,  -294,  -294,  -294,
    -294,   119,   224,   361,   412,  -294,   369,  -294,  -294,  -294,
      -7,  -294,  -294,   179,  -294,  -294,   116,   388,  -294,  -294,
    -294,   423,  -294,   333,   365,   369,  -294,   335,  -294
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
      73,     0,    70,   286,   287,   288,     0,    65,    66,     0,
       0,     0,   125,   136,     0,    46,    51,    49,    50,   124,
     246,     0,   273,     0,     0,     0,     0,   131,   244,   252,
     254,   251,   249,   250,     0,     0,    10,     0,     0,    17,
      23,    74,    72,     0,     0,   122,    67,    58,   175,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   156,   218,   219,
     220,   221,   222,   223,   224,   225,   155,   163,   164,   165,
     166,   167,   168,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   169,   170,   157,   158,   159,   160,   161,
     162,   171,   172,   174,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   200,   201,   202,   203,   204,
     205,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   153,   151,   134,   149,   187,   173,   154,
     216,   217,   152,   139,   141,   138,   140,   142,   143,   145,
     144,   146,   147,   148,   137,   256,   258,     0,     0,     0,
       0,   289,   293,     0,   272,   248,     0,     0,   253,   278,
     247,     0,     0,     0,   126,     0,    38,     0,     0,    30,
     121,     0,   120,   150,   289,   286,     0,     0,     0,   255,
     260,   263,   270,   290,   291,     0,   274,   257,   259,   289,
       0,     0,   269,   127,     0,   245,   244,     0,     0,     0,
      37,    18,     0,    31,   123,     0,   277,   276,   275,   261,
     262,   264,   265,     0,   292,     0,     0,   130,     0,     0,
      11,     0,    44,    41,    42,    43,     0,    40,    35,    32,
      24,   279,     0,     0,     0,   266,     0,   129,    45,    39,
       0,   280,   281,   282,   285,   271,     0,     0,    33,   283,
     284,     0,   267,     0,     0,     0,   268,     0,   128
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -294,  -294,  -294,  -294,  -294,  -294,   379,  -294,   472,  -294,
    -294,  -294,   171,  -294,  -294,  -294,  -294,  -294,  -293,  -294,
    -294,  -294,  -294,   110,    90,  -294,   108,  -294,   139,  -294,
    -102,  -294,   419,  -294,  -294,  -136,  -135,  -294,   421,   374,
    -294,   364,   371,  -294,  -294,  -294,  -294,   225,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -118,  -117,  -150,  -294,  -294,
    -294,  -123,  -294,  -101,   214
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    49,    74,    75,   123,    97,    98,   112,    99,
     308,    77,   101,   128,   309,    51,   342,   380,   127,   167,
     168,   339,   366,   367,    93,   114,    52,    53,    54,    80,
      81,    55,    56,    57,    58,    59,    60,    61,    62,   137,
     174,   116,   117,   356,   118,   141,   119,   265,   266,   267,
     268,   269,   270,   271,   272,   335,   336,   159,   160,   353,
     161,   162,   316,   163,   293
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     157,   158,   132,   298,   138,   263,   264,     4,   -19,    -8,
      63,    -8,    -8,   129,    10,    11,   343,   125,   369,   126,
      94,    13,    95,    96,   371,   354,    16,   291,   292,    18,
     299,    20,   133,   134,   135,   175,    65,   295,   143,   302,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    64,   130,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   370,   388,    73,   372,
     296,   197,    -6,    66,   297,   136,   133,   134,   135,   144,
     349,   155,   350,    67,    76,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     263,   264,   330,    68,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   299,  -135,  -135,  -135,  -135,   102,
     311,   331,   113,   374,   391,   296,   317,   329,   292,   297,
     322,   314,   315,   134,   135,   351,   381,   352,   382,   323,
     115,   324,    69,   373,   146,   340,   323,    71,   324,   285,
     344,   286,    70,   166,   312,   332,   358,   375,   392,   325,
     103,    72,   147,   323,   287,   324,   345,    78,  -135,   288,
      79,  -135,  -135,   289,    86,  -135,  -135,   368,   290,  -135,
     109,     3,   327,   325,   328,    87,     4,     5,    88,     6,
       7,     8,     9,    10,    11,    12,   389,   287,   390,   387,
      13,    14,    15,   383,   384,    16,    17,    89,    18,    19,
      20,  -135,    21,    22,    23,   110,    92,   397,    90,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    91,   111,   306,   307,   100,   104,
     105,   106,   -22,   107,   108,   109,     3,   120,   121,   122,
     131,     4,     5,   139,     6,     7,     8,     9,    10,    11,
      12,   150,   133,   134,   135,    13,    14,    15,   145,    92,
      16,    17,   140,    18,    19,    20,   142,    21,    22,    23,
     110,    73,   149,   109,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,   169,
     111,   165,   170,   171,   151,   172,   176,   152,   153,   177,
     294,   284,   154,   300,   301,   155,   150,   133,   134,   135,
     303,   304,   150,   133,   134,   135,   305,   361,   150,   133,
     134,   135,   362,   319,    92,   320,   310,   321,   326,   363,
     364,   333,   273,   274,   275,   276,   337,   277,   357,   338,
     346,   365,   278,   279,   347,   348,   280,   354,   355,   287,
     281,   282,   283,   359,   360,   376,   155,   378,   377,   151,
     361,   386,   152,   153,   385,   151,   393,   154,   152,   153,
     155,   151,   394,   154,   152,   153,   155,   396,   395,   154,
       2,   398,   155,    50,    84,     3,   379,   124,   148,   341,
       4,     5,    85,     6,     7,     8,     9,    10,    11,    12,
     164,   313,   156,     0,    13,    14,    15,     0,   334,    16,
      17,   318,    18,    19,    20,     0,    21,    22,    23,     0,
     173,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     3,     0,
       0,     0,     0,     4,     0,     0,     0,    82,     0,     0,
      10,    11,     0,     0,     0,     0,     0,    13,     0,    15,
       0,     0,    16,    17,     0,    18,     0,    20,     0,     0,
       0,    83,     0,     0,     0,     0,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45
};

static const yytype_int16 yycheck[] =
{
     118,   118,   104,   153,   105,   141,   141,    10,    39,    20,
      40,    22,    23,    40,    17,    18,   309,    24,    68,    26,
      20,    24,    22,    23,    39,    40,    29,    39,    40,    32,
     153,    34,    40,    41,    42,   136,    16,    39,    39,   156,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    39,    93,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   136,   380,    99,   104,
      92,    94,   103,    40,    96,   103,    40,    41,    42,   100,
      77,   103,    79,    40,   135,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     266,   266,    39,     3,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   297,    39,    40,    41,    42,    92,
      68,    68,    92,    68,    68,    92,   287,    39,    40,    96,
      68,    39,    40,    41,    42,    77,    77,    79,    79,    77,
      92,    79,    39,   353,   114,   307,    77,    40,    79,    77,
     311,    79,    42,   123,   102,   102,   334,   102,   102,    97,
     133,    16,   114,    77,    92,    79,    97,    99,    92,    97,
      39,    95,    96,   101,    68,    99,   100,   339,   106,   103,
       4,     5,    77,    97,    79,     3,    10,    11,    40,    13,
      14,    15,    16,    17,    18,    19,    77,    92,    79,   376,
      24,    25,    26,    39,    40,    29,    30,    99,    32,    33,
      34,   135,    36,    37,    38,    39,   103,   395,    68,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    97,    69,   167,   168,    39,    68,
     104,    39,   135,    40,    39,     4,     5,    40,    40,    40,
      40,    10,    11,    68,    13,    14,    15,    16,    17,    18,
      19,    39,    40,    41,    42,    24,    25,    26,   102,   103,
      29,    30,    68,    32,    33,    34,    98,    36,    37,    38,
      39,    99,    99,     4,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   136,
      69,    68,   135,    93,    92,   134,    40,    95,    96,    39,
     107,    39,   100,    39,    39,   103,    39,    40,    41,    42,
      68,    99,    39,    40,    41,    42,    40,     5,    39,    40,
      41,    42,    10,    40,   103,    39,   102,    39,    93,    17,
      18,   136,    71,    72,    73,    74,    68,    76,   136,    12,
      93,    29,    81,    82,    93,    93,    85,    40,    39,    92,
      89,    90,    91,    68,    40,    68,   103,    40,   136,    92,
       5,    39,    95,    96,    93,    92,    68,   100,    95,    96,
     103,    92,    39,   100,    95,    96,   103,   102,   135,   100,
       0,   136,   103,     1,    55,     5,   366,    98,   114,   308,
      10,    11,    61,    13,    14,    15,    16,    17,    18,    19,
     119,   266,   135,    -1,    24,    25,    26,    -1,   135,    29,
      30,   287,    32,    33,    34,    -1,    36,    37,    38,    -1,
     136,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     5,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   178,     0,     5,    10,    11,    13,    14,    15,    16,
      17,    18,    19,    24,    25,    26,    29,    30,    32,    33,
      34,    36,    37,    38,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   179,
     185,   192,   203,   204,   205,   208,   209,   210,   211,   212,
     213,   214,   215,    40,    39,    16,    40,    40,     3,    39,
      42,    40,    16,    99,   180,   181,   135,   188,    99,    39,
     206,   207,    14,    38,   209,   215,    68,     3,    40,    99,
      68,    97,   103,   201,    20,    22,    23,   183,   184,   186,
      39,   189,    92,   133,    68,   104,    39,    40,    39,     4,
      39,    69,   185,   201,   202,   203,   218,   219,   221,   223,
      40,    40,    40,   182,   183,    24,    26,   195,   190,    40,
      93,    40,   207,    40,    41,    42,   103,   216,   240,    68,
      68,   222,    98,    39,   100,   102,   201,   203,   218,    99,
      39,    92,    95,    96,   100,   103,   135,   232,   233,   234,
     235,   237,   238,   240,   219,    68,   201,   196,   197,   136,
     135,    93,   134,   216,   217,   240,    40,    39,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    94,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   212,   213,   224,   225,   226,   227,   228,
     229,   230,   231,    71,    72,    73,    74,    76,    81,    82,
      85,    89,    90,    91,    39,    77,    79,    92,    97,   101,
     106,    39,    40,   241,   107,    39,    92,    96,   234,   238,
      39,    39,   233,    68,    99,    40,   205,   205,   187,   191,
     102,    68,   102,   224,    39,    40,   239,   240,   241,    40,
      39,    39,    68,    77,    79,    97,    93,    77,    79,    39,
      39,    68,   102,   136,   135,   232,   233,    68,    12,   198,
     207,   189,   193,   195,   240,    97,    93,    93,    93,    77,
      79,    77,    79,   236,    40,    39,   220,   136,   232,    68,
      40,     5,    10,    17,    18,    29,   199,   200,   207,    68,
     136,    39,   104,   234,    68,   102,    68,   136,    40,   200,
     194,    77,    79,    39,    40,    93,    39,   233,   195,    77,
      79,    68,   102,    68,    39,   135,   102,   232,   136
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   177,   178,   178,   178,   178,   180,   179,   181,   182,
     179,   183,   183,   183,   184,   184,   186,   187,   185,   188,
     185,   185,   190,   191,   189,   189,   192,   192,   192,   192,
     193,   193,   194,   193,   196,   195,   197,   195,   198,   198,
     198,   199,   199,   199,   199,   200,   201,   202,   202,   202,
     202,   202,   202,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   204,   204,   204,   204,   205,   206,
     206,   207,   207,   207,   207,   208,   208,   209,   209,   209,
     209,   209,   210,   211,   211,   211,   212,   212,   212,   212,
     212,   212,   212,   213,   213,   214,   214,   214,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     216,   216,   217,   217,   218,   218,   218,   220,   219,   219,
     219,   219,   219,   222,   221,   221,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   224,
     224,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     226,   226,   226,   226,   226,   226,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   228,   228,   229,   229,
     229,   229,   230,   230,   230,   230,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   232,   232,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   234,   234,   234,   234,
     236,   235,   237,   237,   238,   238,   238,   238,   238,   239,
     239,   239,   239,   239,   239,   239,   240,   240,   240,   241,
     241,   241,   241,   241
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     2,     1,
       1,     1,     1,     2,     1,     3,     2,     3,     2,     3,
       3,     4,     4,     3,     4,     4,     5,     7,     9,     3,
       0,     6,     2,     1,     3,     4,     4,     4,     2,     3,
       4,     4,     4,     5,     5,     4,     1,     1,     1,     1,
       2,     2,     3,     1
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
#line 235 "ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); func_header(".skip"); }
#line 1819 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 235 "ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1825 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 236 "ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); }
#line 1831 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 236 "ptx.y" /* yacc.c:1646  */
    { func_header(".skip"); }
#line 1837 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 236 "ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1843 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 239 "ptx.y" /* yacc.c:1646  */
    {func_header_info_int(".maxntid", (yyvsp[-4].int_value));
										func_header_info_int(",", (yyvsp[-2].int_value));
										func_header_info_int(",", (yyvsp[0].int_value)); }
#line 1851 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 242 "ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".minnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .minnctapersm ignored. \n"); }
#line 1857 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 243 "ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".maxnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .maxnctapersm ignored. \n"); }
#line 1863 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 250 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[-1].int_value)); func_header_info("(");}
#line 1869 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 250 "ptx.y" /* yacc.c:1646  */
    {func_header_info(")");}
#line 1875 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 250 "ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1881 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 251 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); }
#line 1887 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 251 "ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1893 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 252 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); add_function_name(""); g_func_decl=0; (yyval.ptr_value) = reset_symtab(); }
#line 1899 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 255 "ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); }
#line 1905 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 255 "ptx.y" /* yacc.c:1646  */
    {func_header_info("(");}
#line 1911 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 255 "ptx.y" /* yacc.c:1646  */
    { g_func_decl=0; func_header_info(")"); }
#line 1917 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 256 "ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); g_func_decl=0; }
#line 1923 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 259 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1929 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 260 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1935 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 261 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1941 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 262 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 2; g_func_decl=1; func_header(".func"); }
#line 1947 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 266 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1953 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 267 "ptx.y" /* yacc.c:1646  */
    {func_header_info(",");}
#line 1959 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 267 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1965 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 269 "ptx.y" /* yacc.c:1646  */
    { add_space_spec(param_space_unclassified,0); }
#line 1971 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 269 "ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1977 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 270 "ptx.y" /* yacc.c:1646  */
    { add_space_spec(reg_space,0); }
#line 1983 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 270 "ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1989 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 276 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(global_space); }
#line 1995 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 277 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(local_space); }
#line 2001 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 278 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(shared_space); }
#line 2007 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 279 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(const_space); }
#line 2013 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 285 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 2019 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 286 "ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 2025 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 287 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 2031 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 288 "ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 2037 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 294 "ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[0].double_value), 0); }
#line 2043 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 295 "ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[-1].double_value),1); }
#line 2049 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 296 "ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2055 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 297 "ptx.y" /* yacc.c:1646  */
    { target_header2((yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2061 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 298 "ptx.y" /* yacc.c:1646  */
    { target_header3((yyvsp[-4].string_value),(yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2067 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 299 "ptx.y" /* yacc.c:1646  */
    { target_header((yyvsp[0].string_value)); }
#line 2073 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 300 "ptx.y" /* yacc.c:1646  */
    { add_file((yyvsp[-1].int_value),(yyvsp[0].string_value)); }
#line 2079 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 302 "ptx.y" /* yacc.c:1646  */
    { add_pragma((yyvsp[-1].string_value)); }
#line 2085 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 303 "ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2091 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 306 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2097 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 307 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2103 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 308 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2109 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 309 "ptx.y" /* yacc.c:1646  */
    { add_constptr((yyvsp[-4].string_value), (yyvsp[-2].string_value), (yyvsp[0].int_value)); }
#line 2115 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 312 "ptx.y" /* yacc.c:1646  */
    { set_variable_type(); }
#line 2121 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 317 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[0].string_value),0,NON_ARRAY_IDENTIFIER); func_header_info((yyvsp[0].string_value));}
#line 2127 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 318 "ptx.y" /* yacc.c:1646  */
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
#line 2144 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 330 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-2].string_value),0,ARRAY_IDENTIFIER_NO_DIM); func_header_info((yyvsp[-2].string_value)); func_header_info("["); func_header_info("]");}
#line 2150 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 331 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-3].string_value),(yyvsp[-1].int_value),ARRAY_IDENTIFIER); func_header_info((yyvsp[-3].string_value)); func_header_info_int("[",(yyvsp[-1].int_value)); func_header_info("]");}
#line 2156 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 341 "ptx.y" /* yacc.c:1646  */
    { add_extern_spec(); }
#line 2162 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 344 "ptx.y" /* yacc.c:1646  */
    { add_alignment_spec((yyvsp[0].int_value)); }
#line 2168 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 346 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2174 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 347 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2180 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 351 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(const_space,(yyvsp[0].int_value)); }
#line 2186 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 352 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(global_space,0); }
#line 2192 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 353 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(local_space,0); }
#line 2198 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 354 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(param_space_unclassified,0); }
#line 2204 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 355 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(shared_space,0); }
#line 2210 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 356 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(surf_space,0); }
#line 2216 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 357 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(tex_space,0); }
#line 2222 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 364 "ptx.y" /* yacc.c:1646  */
    {  add_option(V2_TYPE); func_header_info(".v2");}
#line 2228 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 365 "ptx.y" /* yacc.c:1646  */
    {  add_option(V3_TYPE); func_header_info(".v3");}
#line 2234 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 366 "ptx.y" /* yacc.c:1646  */
    {  add_option(V4_TYPE); func_header_info(".v4");}
#line 2240 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 369 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S8_TYPE ); }
#line 2246 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 370 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S16_TYPE ); }
#line 2252 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 371 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S32_TYPE ); }
#line 2258 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 372 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S64_TYPE ); }
#line 2264 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 373 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U8_TYPE ); }
#line 2270 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 374 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U16_TYPE ); }
#line 2276 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 375 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U32_TYPE ); }
#line 2282 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 376 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U64_TYPE ); }
#line 2288 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 377 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F16_TYPE ); }
#line 2294 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 378 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F32_TYPE ); }
#line 2300 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 379 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F64_TYPE ); }
#line 2306 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 380 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( FF64_TYPE ); }
#line 2312 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 381 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B8_TYPE );  }
#line 2318 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 382 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B16_TYPE ); }
#line 2324 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 383 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B32_TYPE ); }
#line 2330 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 384 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B64_TYPE ); }
#line 2336 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 385 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB64_TYPE ); }
#line 2342 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 386 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB128_TYPE ); }
#line 2348 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 387 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( PRED_TYPE ); }
#line 2354 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 388 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( TEXREF_TYPE ); }
#line 2360 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 389 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SAMPLERREF_TYPE ); }
#line 2366 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 390 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SURFREF_TYPE ); }
#line 2372 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 393 "ptx.y" /* yacc.c:1646  */
    { add_array_initializer(); }
#line 2378 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 394 "ptx.y" /* yacc.c:1646  */
    { syntax_not_implemented(); }
#line 2384 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 400 "ptx.y" /* yacc.c:1646  */
    { add_label((yyvsp[-1].string_value)); }
#line 2390 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 403 "ptx.y" /* yacc.c:1646  */
    { set_return(); }
#line 2396 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 410 "ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2402 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 411 "ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2408 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 413 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),0, -1); }
#line 2414 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 414 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),1, -1); }
#line 2420 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 415 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,1); }
#line 2426 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 416 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,2); }
#line 2432 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 417 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,3); }
#line 2438 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 418 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,5); }
#line 2444 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 419 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,6); }
#line 2450 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 420 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,10); }
#line 2456 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 421 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,12); }
#line 2462 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 422 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,13); }
#line 2468 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 423 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,17); }
#line 2474 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 424 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,19); }
#line 2480 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 425 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,28); }
#line 2486 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 435 "ptx.y" /* yacc.c:1646  */
    { add_option(UNI_OPTION); }
#line 2492 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 436 "ptx.y" /* yacc.c:1646  */
    { add_option(WIDE_OPTION); }
#line 2498 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 437 "ptx.y" /* yacc.c:1646  */
    { add_option(ANY_OPTION); }
#line 2504 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 438 "ptx.y" /* yacc.c:1646  */
    { add_option(ALL_OPTION); }
#line 2510 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 439 "ptx.y" /* yacc.c:1646  */
    { add_option(BALLOT_OPTION); }
#line 2516 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 440 "ptx.y" /* yacc.c:1646  */
    { add_option(GLOBAL_OPTION); }
#line 2522 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 441 "ptx.y" /* yacc.c:1646  */
    { add_option(CTA_OPTION); }
#line 2528 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 442 "ptx.y" /* yacc.c:1646  */
    { add_option(SYS_OPTION); }
#line 2534 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 443 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_1D); }
#line 2540 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 444 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_2D); }
#line 2546 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 445 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_3D); }
#line 2552 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 446 "ptx.y" /* yacc.c:1646  */
    { add_option(SAT_OPTION); }
#line 2558 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 447 "ptx.y" /* yacc.c:1646  */
    { add_option(FTZ_OPTION); }
#line 2564 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 448 "ptx.y" /* yacc.c:1646  */
    { add_option(NEG_OPTION); }
#line 2570 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 449 "ptx.y" /* yacc.c:1646  */
    { add_option(APPROX_OPTION); }
#line 2576 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 450 "ptx.y" /* yacc.c:1646  */
    { add_option(FULL_OPTION); }
#line 2582 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 451 "ptx.y" /* yacc.c:1646  */
    { add_option(EXIT_OPTION); }
#line 2588 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 452 "ptx.y" /* yacc.c:1646  */
    { add_option(ABS_OPTION); }
#line 2594 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 454 "ptx.y" /* yacc.c:1646  */
    { add_option(TO_OPTION); }
#line 2600 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 455 "ptx.y" /* yacc.c:1646  */
    { add_option(HALF_OPTION); }
#line 2606 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 456 "ptx.y" /* yacc.c:1646  */
    { add_option(CA_OPTION); }
#line 2612 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 457 "ptx.y" /* yacc.c:1646  */
    { add_option(CG_OPTION); }
#line 2618 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 458 "ptx.y" /* yacc.c:1646  */
    { add_option(CS_OPTION); }
#line 2624 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 459 "ptx.y" /* yacc.c:1646  */
    { add_option(LU_OPTION); }
#line 2630 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 460 "ptx.y" /* yacc.c:1646  */
    { add_option(CV_OPTION); }
#line 2636 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 461 "ptx.y" /* yacc.c:1646  */
    { add_option(WB_OPTION); }
#line 2642 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 462 "ptx.y" /* yacc.c:1646  */
    { add_option(WT_OPTION); }
#line 2648 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 463 "ptx.y" /* yacc.c:1646  */
    { add_option(SHFL_OPTION); }
#line 2654 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 464 "ptx.y" /* yacc.c:1646  */
    { add_option(SHFR_OPTION); }
#line 2660 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 465 "ptx.y" /* yacc.c:1646  */
    { add_option(CLAMP_OPTION); }
#line 2666 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 466 "ptx.y" /* yacc.c:1646  */
    { add_option(WRAP_OPTION); }
#line 2672 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 468 "ptx.y" /* yacc.c:1646  */
    { add_option(SHIFTAMT_OPTION); }
#line 2678 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 469 "ptx.y" /* yacc.c:1646  */
    { add_option(CARRY_FLAG); }
#line 2684 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 470 "ptx.y" /* yacc.c:1646  */
    { add_option(UP_OPTION); }
#line 2690 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 471 "ptx.y" /* yacc.c:1646  */
    { add_option(DOWN_OPTION); }
#line 2696 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 472 "ptx.y" /* yacc.c:1646  */
    { add_option(BFLY_OPTION); }
#line 2702 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 473 "ptx.y" /* yacc.c:1646  */
    { add_option(IDX_OPTION); }
#line 2708 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 474 "ptx.y" /* yacc.c:1646  */
    { add_option(F4E_OPTION); }
#line 2714 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 475 "ptx.y" /* yacc.c:1646  */
    { add_option(B4E_OPTION); }
#line 2720 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 476 "ptx.y" /* yacc.c:1646  */
    { add_option(RC8_OPTION); }
#line 2726 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 477 "ptx.y" /* yacc.c:1646  */
    { add_option(ECL_OPTION); }
#line 2732 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 478 "ptx.y" /* yacc.c:1646  */
    { add_option(ECR_OPTION); }
#line 2738 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 479 "ptx.y" /* yacc.c:1646  */
    { add_option(RC16_OPTION); }
#line 2744 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 484 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_FINITE); }
#line 2750 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 485 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_INFINITE); }
#line 2756 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 486 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_NUMBER); }
#line 2762 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 487 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_NOTANUMBER); }
#line 2768 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 488 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_NORMAL); }
#line 2774 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 489 "ptx.y" /* yacc.c:1646  */
    { add_option(TESTP_SUBNORMAL); }
#line 2780 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 491 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_AND); }
#line 2786 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 492 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_OR); }
#line 2792 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 493 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_XOR); }
#line 2798 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 494 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_CAS); }
#line 2804 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 495 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_EXCH); }
#line 2810 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 496 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_ADD); }
#line 2816 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 497 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_INC); }
#line 2822 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 498 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_DEC); }
#line 2828 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 499 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MIN); }
#line 2834 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 500 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MAX); }
#line 2840 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 506 "ptx.y" /* yacc.c:1646  */
    { add_option(RN_OPTION); }
#line 2846 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 507 "ptx.y" /* yacc.c:1646  */
    { add_option(RZ_OPTION); }
#line 2852 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 508 "ptx.y" /* yacc.c:1646  */
    { add_option(RM_OPTION); }
#line 2858 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 509 "ptx.y" /* yacc.c:1646  */
    { add_option(RP_OPTION); }
#line 2864 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 512 "ptx.y" /* yacc.c:1646  */
    { add_option(RNI_OPTION); }
#line 2870 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 513 "ptx.y" /* yacc.c:1646  */
    { add_option(RZI_OPTION); }
#line 2876 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 514 "ptx.y" /* yacc.c:1646  */
    { add_option(RMI_OPTION); }
#line 2882 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 515 "ptx.y" /* yacc.c:1646  */
    { add_option(RPI_OPTION); }
#line 2888 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 518 "ptx.y" /* yacc.c:1646  */
    { add_option(EQ_OPTION); }
#line 2894 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 519 "ptx.y" /* yacc.c:1646  */
    { add_option(NE_OPTION); }
#line 2900 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 520 "ptx.y" /* yacc.c:1646  */
    { add_option(LT_OPTION); }
#line 2906 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 521 "ptx.y" /* yacc.c:1646  */
    { add_option(LE_OPTION); }
#line 2912 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 522 "ptx.y" /* yacc.c:1646  */
    { add_option(GT_OPTION); }
#line 2918 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 523 "ptx.y" /* yacc.c:1646  */
    { add_option(GE_OPTION); }
#line 2924 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 524 "ptx.y" /* yacc.c:1646  */
    { add_option(LO_OPTION); }
#line 2930 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 525 "ptx.y" /* yacc.c:1646  */
    { add_option(LS_OPTION); }
#line 2936 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 526 "ptx.y" /* yacc.c:1646  */
    { add_option(HI_OPTION); }
#line 2942 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 527 "ptx.y" /* yacc.c:1646  */
    { add_option(HS_OPTION); }
#line 2948 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 528 "ptx.y" /* yacc.c:1646  */
    { add_option(EQU_OPTION); }
#line 2954 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 529 "ptx.y" /* yacc.c:1646  */
    { add_option(NEU_OPTION); }
#line 2960 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 530 "ptx.y" /* yacc.c:1646  */
    { add_option(LTU_OPTION); }
#line 2966 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 531 "ptx.y" /* yacc.c:1646  */
    { add_option(LEU_OPTION); }
#line 2972 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 532 "ptx.y" /* yacc.c:1646  */
    { add_option(GTU_OPTION); }
#line 2978 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 533 "ptx.y" /* yacc.c:1646  */
    { add_option(GEU_OPTION); }
#line 2984 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 534 "ptx.y" /* yacc.c:1646  */
    { add_option(NUM_OPTION); }
#line 2990 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 535 "ptx.y" /* yacc.c:1646  */
    { add_option(NAN_OPTION); }
#line 2996 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 541 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); }
#line 3002 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 542 "ptx.y" /* yacc.c:1646  */
    { add_neg_pred_operand( (yyvsp[0].string_value) ); }
#line 3008 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 543 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); change_operand_neg(); }
#line 3014 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 548 "ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 3020 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 550 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3026 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 551 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1);}
#line 3032 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 552 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1); change_operand_neg();}
#line 3038 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 553 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2);}
#line 3044 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 554 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2); change_operand_neg();}
#line 3050 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 555 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-1);}
#line 3056 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 556 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(1);}
#line 3062 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 557 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(2);}
#line 3068 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 558 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-3);}
#line 3074 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 559 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(1);}
#line 3080 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 560 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(2);}
#line 3086 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 563 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3092 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 564 "ptx.y" /* yacc.c:1646  */
    { add_3vector_operand((yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3098 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 565 "ptx.y" /* yacc.c:1646  */
    { add_4vector_operand((yyvsp[-7].string_value),(yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 3104 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 566 "ptx.y" /* yacc.c:1646  */
    { add_1vector_operand((yyvsp[-1].string_value)); }
#line 3110 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 569 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand((yyvsp[-1].string_value)); }
#line 3116 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 574 "ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[-1].int_value),(yyvsp[0].int_value)); }
#line 3122 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 575 "ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[0].int_value),-1); }
#line 3128 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 578 "ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); }
#line 3134 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 579 "ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); change_memory_addr_space((yyvsp[-3].string_value)); }
#line 3140 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 580 "ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); }
#line 3146 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 581 "ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); add_memory_operand();}
#line 3152 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 582 "ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 3158 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 585 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(1); }
#line 3164 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 586 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(1); }
#line 3170 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 587 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(2); }
#line 3176 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 588 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[0].string_value)); change_double_operand_type(2); }
#line 3182 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 589 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(1); }
#line 3188 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 590 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(2); }
#line 3194 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 591 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-3].string_value),(yyvsp[0].int_value)); change_double_operand_type(3); }
#line 3200 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 594 "ptx.y" /* yacc.c:1646  */
    { add_literal_int((yyvsp[0].int_value)); }
#line 3206 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 595 "ptx.y" /* yacc.c:1646  */
    { add_literal_float((yyvsp[0].float_value)); }
#line 3212 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 596 "ptx.y" /* yacc.c:1646  */
    { add_literal_double((yyvsp[0].double_value)); }
#line 3218 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 599 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[0].string_value),0); }
#line 3224 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 600 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(1);}
#line 3230 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 601 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(2); }
#line 3236 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 602 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3242 "ptx.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 603 "ptx.y" /* yacc.c:1646  */
    { add_address_operand2((yyvsp[0].int_value)); }
#line 3248 "ptx.tab.c" /* yacc.c:1646  */
    break;


#line 3252 "ptx.tab.c" /* yacc.c:1646  */
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
#line 606 "ptx.y" /* yacc.c:1906  */


extern int ptx_lineno;
extern const char *g_filename;

void syntax_not_implemented()
{
	printf("Parse error (%s:%u): this syntax is not (yet) implemented:\n",g_filename,ptx_lineno);
	ptx_error(NULL);
	abort();
}
