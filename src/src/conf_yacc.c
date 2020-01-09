/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse confparse
#define yylex   conflex
#define yyerror conferror
#define yylval  conflval
#define yychar  confchar
#define yydebug confdebug
#define yynerrs confnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TDEFINE = 258,
     TUNDEF = 259,
     TIFDEF = 260,
     TIFNDEF = 261,
     TIFNHOST = 262,
     TIFHOST = 263,
     TELSE = 264,
     TENDIF = 265,
     TINCLUDE = 266,
     TBEGIN_CONFIG = 267,
     TEND_CONFIG = 268,
     TBEGIN_DB = 269,
     TEND_DB = 270,
     TEND_DBNOMD = 271,
     TID = 272,
     TSTRING = 273,
     TACLNOSYMLINKFOLLOW = 274,
     TWARNDEADSYMLINKS = 275,
     TSUMMARIZECHANGES = 276,
     TNEWLINE = 277,
     TVERBOSE = 278,
     TCONFIG_FILE = 279,
     TDATABASE = 280,
     TDATABASE_OUT = 281,
     TDATABASE_NEW = 282,
     TREPORT_URL = 283,
     TGZIPDBOUT = 284,
     TUMASK = 285,
     TTRUE = 286,
     TFALSE = 287,
     TRECSTOP = 288,
     TCONFIG_VERSION = 289,
     TSELRXRULE = 290,
     TEQURXRULE = 291,
     TNEGRXRULE = 292,
     TRIGHTS = 293,
     TUSER = 294,
     TGROUP = 295,
     TINODE = 296,
     TLINKCOUNT = 297,
     TSIZE = 298,
     TGROWINGSIZE = 299,
     TATIME = 300,
     TCTIME = 301,
     TMTIME = 302,
     TACL = 303,
     TXATTRS = 304,
     TSELINUX = 305,
     TTIGER = 306,
     TSHA1 = 307,
     TRMD160 = 308,
     TMD2 = 309,
     TMD4 = 310,
     TMD5 = 311,
     TSHA256 = 312,
     TSHA512 = 313,
     TWHIRLPOOL = 314,
     TL = 315,
     TR = 316,
     TGZIPHEADER = 317,
     TDBSPEC = 318,
     TUNKNOWN = 319,
     TNAME = 320,
     TERROR = 321,
     TEOF = 322
   };
#endif
/* Tokens.  */
#define TDEFINE 258
#define TUNDEF 259
#define TIFDEF 260
#define TIFNDEF 261
#define TIFNHOST 262
#define TIFHOST 263
#define TELSE 264
#define TENDIF 265
#define TINCLUDE 266
#define TBEGIN_CONFIG 267
#define TEND_CONFIG 268
#define TBEGIN_DB 269
#define TEND_DB 270
#define TEND_DBNOMD 271
#define TID 272
#define TSTRING 273
#define TACLNOSYMLINKFOLLOW 274
#define TWARNDEADSYMLINKS 275
#define TSUMMARIZECHANGES 276
#define TNEWLINE 277
#define TVERBOSE 278
#define TCONFIG_FILE 279
#define TDATABASE 280
#define TDATABASE_OUT 281
#define TDATABASE_NEW 282
#define TREPORT_URL 283
#define TGZIPDBOUT 284
#define TUMASK 285
#define TTRUE 286
#define TFALSE 287
#define TRECSTOP 288
#define TCONFIG_VERSION 289
#define TSELRXRULE 290
#define TEQURXRULE 291
#define TNEGRXRULE 292
#define TRIGHTS 293
#define TUSER 294
#define TGROUP 295
#define TINODE 296
#define TLINKCOUNT 297
#define TSIZE 298
#define TGROWINGSIZE 299
#define TATIME 300
#define TCTIME 301
#define TMTIME 302
#define TACL 303
#define TXATTRS 304
#define TSELINUX 305
#define TTIGER 306
#define TSHA1 307
#define TRMD160 308
#define TMD2 309
#define TMD4 310
#define TMD5 311
#define TSHA256 312
#define TSHA512 313
#define TWHIRLPOOL 314
#define TL 315
#define TR 316
#define TGZIPHEADER 317
#define TDBSPEC 318
#define TUNKNOWN 319
#define TNAME 320
#define TERROR 321
#define TEOF 322




/* Copy the first part of user declarations.  */
#line 1 "conf_yacc.y"
 

/*	
 * Copyright (C) 1999,2000,2001,2002 Rami Lehti, Pablo Virolainen
 * $Header: /cvsroot/aide/aide/src/conf_yacc.y,v 1.11 2010/02/17 20:06:57 rvdb Exp $
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "aide.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include "list.h"
#include "gen_list.h"
#include "db.h"
#include "db_config.h"
#include "symboltable.h"
#include "commandconf.h"

DB_ATTR_TYPE retval=0;
extern int conflex();
void conferror(const char*);

extern char conftext[];
extern long conf_lineno;




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 43 "conf_yacc.y"
{
  char* s;
  DB_ATTR_TYPE i;
}
/* Line 187 of yacc.c.  */
#line 286 "conf_yacc.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 299 "conf_yacc.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   269

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  133

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    69,    73,    76,    80,    82,    84,
      88,    92,    94,    96,    98,   100,   102,   104,   106,   108,
     110,   112,   114,   116,   118,   120,   122,   124,   126,   128,
     130,   132,   134,   136,   138,   140,   142,   144,   148,   151,
     152,   157,   158,   163,   164,   169,   170,   175,   178,   183,
     187,   190,   193,   196,   199,   202,   205,   207,   210,   213,
     216,   219,   222,   225,   228,   231,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    72,    73,    -1,    -1,    74,    -1,    75,
      -1,    76,    -1,    82,    -1,    83,    -1,    84,    -1,    86,
      -1,    88,    -1,    90,    -1,    93,    -1,    94,    -1,    95,
      -1,    96,    -1,    97,    -1,   106,    -1,    98,    -1,   104,
      -1,   105,    -1,   102,    -1,   103,    -1,   101,    -1,    99,
      -1,   100,    -1,    68,    -1,    23,    -1,    64,    -1,    14,
      -1,    15,    -1,     1,    -1,    36,    78,    77,    -1,    37,
      78,    77,    -1,    38,    77,    -1,    38,    78,    77,    -1,
      23,    -1,    68,    -1,    78,    69,    78,    -1,    78,    70,
      78,    -1,    79,    -1,    81,    -1,    80,    -1,    18,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,
      44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,
      61,    -1,    62,    -1,    49,    -1,    50,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,    57,    -1,    58,    -1,
      59,    -1,    60,    -1,     3,    18,    18,    -1,     4,    18,
      -1,    -1,     5,    18,    85,    92,    -1,    -1,     6,    18,
      87,    92,    -1,    -1,     8,    18,    89,    92,    -1,    -1,
       7,    18,    91,    92,    -1,    72,    10,    -1,    72,     9,
      72,    10,    -1,    18,    19,    78,    -1,    26,    18,    -1,
      27,    18,    -1,    28,    18,    -1,    24,    18,    -1,    29,
      18,    -1,    12,    18,    -1,    13,    -1,    20,    32,    -1,
      20,    33,    -1,    21,    32,    -1,    21,    33,    -1,    22,
      32,    -1,    22,    33,    -1,    30,    32,    -1,    30,    33,
      -1,    34,    18,    -1,    35,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   143,   143,   143,   145,   145,   145,   145,   145,   146,
     146,   146,   146,   147,   147,   147,   147,   147,   147,   148,
     148,   148,   148,   149,   149,   149,   149,   150,   154,   155,
     159,   163,   166,   171,   174,   177,   179,   182,   183,   188,
     189,   190,   192,   193,   194,   204,   204,   205,   205,   206,
     206,   207,   207,   208,   208,   208,   209,   209,   209,   210,
     212,   212,   212,   213,   213,   213,   214,   216,   218,   220,
     220,   227,   227,   234,   234,   241,   241,   248,   249,   251,
     253,   255,   257,   259,   261,   263,   270,   274,   282,   290,
     294,   298,   302,   306,   313,   319,   324
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TDEFINE", "TUNDEF", "TIFDEF", "TIFNDEF",
  "TIFNHOST", "TIFHOST", "TELSE", "TENDIF", "TINCLUDE", "TBEGIN_CONFIG",
  "TEND_CONFIG", "TBEGIN_DB", "TEND_DB", "TEND_DBNOMD", "TID", "TSTRING",
  "'='", "TACLNOSYMLINKFOLLOW", "TWARNDEADSYMLINKS", "TSUMMARIZECHANGES",
  "TNEWLINE", "TVERBOSE", "TCONFIG_FILE", "TDATABASE", "TDATABASE_OUT",
  "TDATABASE_NEW", "TREPORT_URL", "TGZIPDBOUT", "TUMASK", "TTRUE",
  "TFALSE", "TRECSTOP", "TCONFIG_VERSION", "TSELRXRULE", "TEQURXRULE",
  "TNEGRXRULE", "TRIGHTS", "TUSER", "TGROUP", "TINODE", "TLINKCOUNT",
  "TSIZE", "TGROWINGSIZE", "TATIME", "TCTIME", "TMTIME", "TACL", "TXATTRS",
  "TSELINUX", "TTIGER", "TSHA1", "TRMD160", "TMD2", "TMD4", "TMD5",
  "TSHA256", "TSHA512", "TWHIRLPOOL", "TL", "TR", "TGZIPHEADER", "TDBSPEC",
  "TUNKNOWN", "TNAME", "TERROR", "TEOF", "'+'", "'-'", "$accept", "lines",
  "line", "rule", "equrule", "negrule", "newlineoreof", "expr", "primary",
  "other", "hash", "definestmt", "undefstmt", "ifdefstmt", "@1",
  "ifndefstmt", "@2", "ifhoststmt", "@3", "ifnhoststmt", "@4",
  "ifstmtlist", "groupdef", "db_in", "db_out", "db_new", "verbose",
  "report", "beginconfigstmt", "endconfigstmt", "acl_no_symlink_follow",
  "warn_dead_symlinks", "summarize_changes", "gzipdbout",
  "recursion_stopper", "config_version", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    61,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    43,
      45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    75,    76,    76,    77,    77,    78,
      78,    78,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    82,    83,    85,
      84,    87,    86,    89,    88,    91,    90,    92,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     3,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     0,
       4,     0,     4,     0,     4,     0,     4,     2,     4,     3,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    32,     0,     0,     0,     0,     0,     0,
       0,    86,    30,    31,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    27,     2,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    19,    25,    26,
      24,    22,    23,    20,    21,    18,     0,    68,    69,    71,
      75,    73,    85,     0,    87,    88,    89,    90,    91,    92,
      83,    80,    81,    82,    84,    93,    94,    95,    96,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      55,    56,     0,    41,    43,    42,     0,    37,    38,    35,
       0,    67,     3,     3,     3,     3,    79,     0,     0,    33,
      34,    36,     0,    70,    72,    76,    74,    39,    40,     3,
      77,     0,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,   122,    32,    33,    34,    35,   109,   102,   103,   104,
     105,    36,    37,    38,   112,    39,   113,    40,   115,    41,
     114,   123,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
    -102,     3,  -102,  -102,     4,    26,    30,    38,    39,    40,
      41,  -102,  -102,  -102,     9,   -13,     2,    10,  -102,    42,
      43,    44,    45,    46,    14,    47,    48,   207,   207,   170,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,    50,  -102,  -102,  -102,
    -102,  -102,  -102,   207,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,   -18,  -102,  -102,  -102,   -18,  -102,  -102,  -102,
     -18,  -102,  -102,  -102,  -102,  -102,   -15,   207,   207,  -102,
    -102,  -102,    74,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,   140,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -102,     0,  -102,  -102,  -102,  -102,   -57,   -27,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -101,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       1,   106,   110,     2,     3,   107,     4,     5,     6,     7,
       8,     9,   124,   125,   126,    10,    11,    12,    13,    64,
      65,    14,    56,    15,    16,    17,    18,    19,    63,    20,
      21,    22,    23,    24,    66,    67,   116,    25,    26,    27,
      28,    29,    68,    69,    57,   119,    75,    76,    58,   120,
     108,   117,   118,   121,   117,   118,    59,    60,    61,    62,
      70,    71,    72,    73,    74,    77,    78,    30,   111,     0,
       0,    31,     0,     0,     0,     3,     0,     4,     5,     6,
       7,     8,     9,   129,   130,     0,    10,    11,    12,    13,
     127,   128,    14,     0,    15,    16,    17,    18,    19,     0,
      20,    21,    22,    23,    24,     0,     0,     0,    25,    26,
      27,    28,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     3,    31,     4,     5,     6,     7,     8,     9,     0,
     132,     0,    10,    11,    12,    13,     0,     0,    14,     0,
      15,    16,    17,    18,    19,     0,    20,    21,    22,    23,
      24,     0,     0,     0,    25,    26,    27,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,    31,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    79,     0,    96,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     0,     0,    96,    97,    98,    99,   100,   101
};

static const yytype_int16 yycheck[] =
{
       0,    28,    29,     0,     1,    23,     3,     4,     5,     6,
       7,     8,   113,   114,   115,    12,    13,    14,    15,    32,
      33,    18,    18,    20,    21,    22,    23,    24,    19,    26,
      27,    28,    29,    30,    32,    33,    63,    34,    35,    36,
      37,    38,    32,    33,    18,   102,    32,    33,    18,   106,
      68,    69,    70,   110,    69,    70,    18,    18,    18,    18,
      18,    18,    18,    18,    18,    18,    18,    64,    18,    -1,
      -1,    68,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
     117,   118,    18,    -1,    20,    21,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,     1,    68,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    -1,    18,    -1,
      20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    18,    -1,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    57,    58,    59,    60,    61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    72,     0,     1,     3,     4,     5,     6,     7,     8,
      12,    13,    14,    15,    18,    20,    21,    22,    23,    24,
      26,    27,    28,    29,    30,    34,    35,    36,    37,    38,
      64,    68,    73,    74,    75,    76,    82,    83,    84,    86,
      88,    90,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    18,    18,    18,    18,
      18,    18,    18,    19,    32,    33,    32,    33,    32,    33,
      18,    18,    18,    18,    18,    32,    33,    18,    18,    18,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    57,    58,    59,    60,
      61,    62,    78,    79,    80,    81,    78,    23,    68,    77,
      78,    18,    85,    87,    91,    89,    78,    69,    70,    77,
      77,    77,    72,    92,    92,    92,    92,    78,    78,     9,
      10,    72,    10
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 27:
#line 150 "conf_yacc.y"
    {
            newlinelastinconfig=1;
	    YYACCEPT;
          }
    break;

  case 29:
#line 155 "conf_yacc.y"
    {
          error(220,"Got @@dbspec.Stopping\n");
	  YYACCEPT;
          }
    break;

  case 30:
#line 159 "conf_yacc.y"
    {
	  error(220,"Got @@begin_db. Stopping\n");
	  YYACCEPT;
          }
    break;

  case 31:
#line 163 "conf_yacc.y"
    {
	  conferror("Error while reading configuration");
          }
    break;

  case 32:
#line 166 "conf_yacc.y"
    {
	  conferror("Error while reading configuration");
	  YYABORT;
          }
    break;

  case 33:
#line 172 "conf_yacc.y"
    { conf->selrxlst=append_rxlist((yyvsp[(1) - (3)].s),(yyvsp[(2) - (3)].i),conf->selrxlst); }
    break;

  case 34:
#line 175 "conf_yacc.y"
    { conf->equrxlst=append_rxlist((yyvsp[(1) - (3)].s),(yyvsp[(2) - (3)].i),conf->equrxlst); }
    break;

  case 35:
#line 178 "conf_yacc.y"
    { conf->negrxlst=append_rxlist((yyvsp[(1) - (2)].s),0,conf->negrxlst); }
    break;

  case 36:
#line 180 "conf_yacc.y"
    { conf->negrxlst=append_rxlist((yyvsp[(1) - (3)].s),0,conf->negrxlst); }
    break;

  case 38:
#line 183 "conf_yacc.y"
    {
            newlinelastinconfig=0;
	    YYACCEPT;
          }
    break;

  case 39:
#line 188 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (3)].i)  | (yyvsp[(3) - (3)].i) ; }
    break;

  case 40:
#line 189 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (3)].i)  & (~(yyvsp[(3) - (3)].i) ); }
    break;

  case 41:
#line 190 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 42:
#line 192 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ; }
    break;

  case 43:
#line 193 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ; }
    break;

  case 44:
#line 194 "conf_yacc.y"
    { if((retval=get_groupval((yyvsp[(1) - (1)].s))) != DB_ATTR_UNDEF) {
	    (yyval.i)=retval;
	  }
	  else {
		  conf_lineno++; // Hack
	    conferror("Error in expression");
	    YYABORT;
	  }
	  }
    break;

  case 45:
#line 204 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 46:
#line 204 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 47:
#line 205 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 48:
#line 205 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 49:
#line 206 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 50:
#line 206 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 51:
#line 207 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 52:
#line 207 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 53:
#line 208 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 54:
#line 208 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 55:
#line 208 "conf_yacc.y"
    {(yyval.i) = (yyvsp[(1) - (1)].i);}
    break;

  case 56:
#line 209 "conf_yacc.y"
    {(yyval.i) = (yyvsp[(1) - (1)].i);}
    break;

  case 57:
#line 209 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 58:
#line 209 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 59:
#line 210 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 60:
#line 212 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 61:
#line 212 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 62:
#line 212 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 63:
#line 213 "conf_yacc.y"
    {(yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 64:
#line 213 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 65:
#line 213 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 66:
#line 214 "conf_yacc.y"
    { (yyval.i) =(yyvsp[(1) - (1)].i) ;}
    break;

  case 67:
#line 216 "conf_yacc.y"
    { do_define((yyvsp[(2) - (3)].s),(yyvsp[(3) - (3)].s)); }
    break;

  case 68:
#line 218 "conf_yacc.y"
    { do_undefine((yyvsp[(2) - (2)].s)); }
    break;

  case 69:
#line 220 "conf_yacc.y"
    { 
  if(do_ifxdef(1,(yyvsp[(2) - (2)].s))==-1){
    error(0,"ifdef error\n");
    YYABORT; 
  };
 }
    break;

  case 71:
#line 227 "conf_yacc.y"
    { 
  if(do_ifxdef(0,(yyvsp[(2) - (2)].s))==-1){
    error(0,"ifndef error\n");
    YYABORT; 
  };
 }
    break;

  case 72:
#line 232 "conf_yacc.y"
    { error(220,"Ifndef statement ended\n");}
    break;

  case 73:
#line 234 "conf_yacc.y"
    { 
  if(do_ifxhost(1,(yyvsp[(2) - (2)].s))==-1){
    error(0,"ifhost error\n");
    YYABORT;
  };
 }
    break;

  case 75:
#line 241 "conf_yacc.y"
    { 
  if(do_ifxhost(0,(yyvsp[(2) - (2)].s))==-1){
    error(0,"ifnhost error\n");
    YYABORT; 
  };
 }
    break;

  case 77:
#line 248 "conf_yacc.y"
    { error(220,"Endif stmt matched\n");}
    break;

  case 78:
#line 249 "conf_yacc.y"
    {error(220,"Endifelse stmt matched\n");}
    break;

  case 79:
#line 251 "conf_yacc.y"
    { do_groupdef((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].i)); }
    break;

  case 80:
#line 253 "conf_yacc.y"
    { do_dbdef(DB_OLD,(yyvsp[(2) - (2)].s)); }
    break;

  case 81:
#line 255 "conf_yacc.y"
    { do_dbdef(DB_WRITE,(yyvsp[(2) - (2)].s)); }
    break;

  case 82:
#line 257 "conf_yacc.y"
    { do_dbdef(DB_NEW,(yyvsp[(2) - (2)].s)); }
    break;

  case 83:
#line 259 "conf_yacc.y"
    { do_verbdef((yyvsp[(2) - (2)].s)); }
    break;

  case 84:
#line 261 "conf_yacc.y"
    { do_repurldef((yyvsp[(2) - (2)].s)); }
    break;

  case 85:
#line 263 "conf_yacc.y"
    {
#ifdef WITH_MHASH
  conf->do_configmd=1;
  conf->old_confmdstr=strdup((yyvsp[(2) - (2)].s));
#endif
}
    break;

  case 86:
#line 270 "conf_yacc.y"
    {
  YYACCEPT;
}
    break;

  case 87:
#line 274 "conf_yacc.y"
    { 
#ifdef WITH_ACL
  conf->no_acl_on_symlinks=1;
#else
  error(0,"ACL-support not compiled in.\n");
#endif
}
    break;

  case 88:
#line 282 "conf_yacc.y"
    { 
#ifdef WITH_ACL
  conf->no_acl_on_symlinks=0;
#else
  error(0,"ACL-support not compiled in.\n");
#endif
}
    break;

  case 89:
#line 290 "conf_yacc.y"
    {
  conf->warn_dead_symlinks=1;
}
    break;

  case 90:
#line 294 "conf_yacc.y"
    {
  conf->warn_dead_symlinks=0;
}
    break;

  case 91:
#line 298 "conf_yacc.y"
    {
  conf->summarize_changes=1;
}
    break;

  case 92:
#line 302 "conf_yacc.y"
    {
  conf->summarize_changes=0;
}
    break;

  case 93:
#line 306 "conf_yacc.y"
    { 
#ifdef WITH_ZLIB
conf->gzip_dbout=1; 
#else 
 error(0,"Gzip-support not compiled in.\n");
#endif
}
    break;

  case 94:
#line 313 "conf_yacc.y"
    { 
#ifdef WITH_ZLIB
conf->gzip_dbout=0; 
#endif
}
    break;

  case 95:
#line 319 "conf_yacc.y"
    {
  /* FIXME implement me */  
  
}
    break;

  case 96:
#line 324 "conf_yacc.y"
    {
  conf->config_version=strdup((yyvsp[(2) - (2)].s));
}
    break;


/* Line 1267 of yacc.c.  */
#line 2077 "conf_yacc.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 328 "conf_yacc.y"



void conferror(const char *msg){
  error(0,"%li:%s:%s\n",conf_lineno-1,msg,conftext);

}

const char* aide_key_1=CONFHMACKEY_01;
const char* db_key_1=DBHMACKEY_01;


