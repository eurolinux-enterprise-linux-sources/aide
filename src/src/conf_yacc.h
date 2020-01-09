/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 43 "conf_yacc.y"
{
  char* s;
  DB_ATTR_TYPE i;
}
/* Line 1489 of yacc.c.  */
#line 188 "conf_yacc.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE conflval;

