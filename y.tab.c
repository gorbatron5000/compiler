/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "c.y"
#include "scan.h"
#include "symboltable.h"
#include "rtls.h"
#line 7 "c.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
   char *str;
   int num;
   struct list *rtl;
   struct type *type;
   struct symbol *decl;
   struct jumplist *jump;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 41 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define AUTO 257
#define BREAK 258
#define CASE 259
#define CONST 260
#define CONTINUE 261
#define DEFAULT 262
#define DO 263
#define REGISTER 264
#define RETURN 265
#define SIGNED 266
#define SIZEOF 267
#define STATIC 268
#define STRUCT 269
#define SWITCH 270
#define TYPEDEF 271
#define UNION 272
#define VOID 273
#define VOLATILE 274
#define WHILE 275
#define ELSE 276
#define ENUM 277
#define EXTERN 278
#define FOR 279
#define DEREF 280
#define GOTO 281
#define IF 282
#define MULEQ 283
#define DIVEQ 284
#define MODEQ 285
#define ADDEQ 286
#define SUBEQ 287
#define LSHIFTEQ 288
#define RSHIFTEQ 289
#define ANDEQ 290
#define XOREQ 291
#define OREQ 292
#define LSHIFT 293
#define RSHIFT 294
#define INCR 295
#define DECR 296
#define GTEQ 297
#define LTEQ 298
#define EQ 299
#define NEQ 300
#define LAND 301
#define LOR 302
#define TRUE 303
#define FALSE 304
#define NUMBER 305
#define IDENTIFIER 306
#define NOT 307
#define INT 308
#define FLOAT 309
#define CHAR 310
#define SHORT 311
#define LONG 312
#define DOUBLE 313
#define UNSIGNED 314
#define ENUMERATOR 315
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,   33,   33,   12,   12,   12,    1,    1,    1,
    1,    1,    1,    1,   36,   36,   38,   38,   38,   37,
   20,   26,   26,   26,   26,   26,   30,   30,   30,   30,
   30,   30,   30,   30,   30,   30,   30,   30,   39,   39,
   39,   41,   40,   40,   42,   42,   43,   44,   44,   27,
   28,   21,   21,   21,   22,   25,   25,   25,   24,   24,
   29,   13,   13,   31,   31,   31,   31,   31,   31,   31,
   31,   31,   31,   31,   31,   17,   17,   18,   45,   46,
   34,   35,   23,   23,   23,    9,   14,   15,   16,   16,
   32,    6,    3,    3,    4,    4,    8,    8,    8,    7,
    7,    7,   10,   10,   10,   10,   10,   11,   11,   11,
   19,   19,    5,    5,    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    0,    2,    1,    2,    0,    5,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    0,    0,    1,    3,    4,
    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    6,    3,
    2,    0,    1,    1,    2,    2,    2,    1,    3,    1,
    1,    0,    1,    3,    3,    0,    2,    2,    0,    4,
    1,    1,    3,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    8,   11,    0,    0,    0,
    0,    0,    0,    4,    2,    6,    8,   14,    0,    1,
    0,    1,    1,    4,    1,    4,    1,    3,    3,    1,
    3,    3,    1,    2,    2,    3,    3,    1,    2,    2,
    0,    4,    1,    1,    2,    1,    0,
};
static const YYINT yydefred[] = {                         0,
   34,   43,   51,   44,   27,   30,   32,   28,   29,   31,
   33,   35,   50,    0,    3,    0,   37,   38,    0,    0,
   36,    0,    4,    0,    0,    0,   21,    0,    0,    2,
    0,    0,   81,   57,   58,    0,    0,    0,   40,    0,
   54,    0,   55,    0,    0,    0,   61,    0,    0,    0,
    0,   79,    0,    0,    0,   47,   39,   45,   46,    0,
    0,   60,    0,   76,    0,   84,   49,    0,    0,    0,
    0,    0,    0,    0,  113,  114,  116,    0,   81,    0,
    0,    0,  108,   62,    0,    0,  117,    0,  103,    0,
    0,  117,  117,    0,    0,    0,  111,   90,   15,  117,
    0,    0,  109,  110,    0,    0,    0,    7,  117,  117,
    0,    0,    0,    0,   12,    0,   68,   69,   70,   66,
   67,   71,   72,   73,   74,   75,  104,  105,   65,   64,
    0,    0,   77,   10,   13,   14,    9,    8,   11,    0,
    0,    0,    0,   18,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  107,  106,   63,    0,  117,  117,    0,
   20,    0,   82,    0,    0,  117,    0,    0,   19,  112,
    6,    0,    0,   86,   91,  117,   87,    0,   91,    0,
  117,    0,   91,   88,
};
static const YYINT yydgoto[] = {                         14,
   80,  115,   81,   82,   83,   84,   85,   86,   87,   88,
   89,   90,   91,   92,   93,   99,   15,   24,  106,   94,
   27,   28,   45,   43,   29,    0,   17,   18,   48,   19,
  132,  177,   20,   40,  171,   95,   96,  145,   21,   22,
   38,   50,   51,   56,   60,   65,
};
static const YYINT yysindex[] = {                       136,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -32,    0,    0,   75,  136,
    0, -106,    0,    2,   75,   75,    0,    7, -253,    0,
    0,  -36,    0,    0,    0,   75,    3,  -27,    0,  136,
    0, -203,    0,  136,   63,   75,    0,   17,   75,   15,
  -56,    0,   79,    3,   83,    0,    0,    0,    0,   92,
  136,    0,   75,    0,   29,    0,    0, -116, -128,  114,
  118,  124, -134, -134,    0,    0,    0,  134,    0, -116,
 -140, -120,    0,    0,  -24,  -17,    0,  100,    0,   57,
  126,    0,    0,  127,  132,  142,    0,    0,    0,    0,
 -128, -128,    0,    0,   75,  111, -116,    0,    0,    0,
 -128, -128, -128, -128,    0, -123,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -103, -128,    0,    0,    0,    0,    0,    0,    0, -128,
  145,  164,  -33,    0,   81, -128,   82, -128, -128,  -33,
  -33,  -24,  -24,    0,    0,    0,  165,    0,    0,   75,
    0,  115,    0, -120,  -17,    0, -128,  160,    0,    0,
    0,  160,  150,    0,    0,    0,    0, -128,    0,  170,
    0,  160,    0,    0,
};
static const YYINT yyrindex[] = {                       212,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  174,    0,    0,  -29,  212,
    0,    0,    0,    0,  -88,  -88,    0,  -34,    0,    0,
  -30,    0,    0,    0,    0,  -29,  -40,    0,    0,  178,
    0,    0,    0,    0,    0,  -88,    0,    0,  -88,    0,
    0,    0,  179,  -40,  106,    0,    0,    0,    0,   98,
  178,    0,  -88,    0,    0,    0,    0,  -37,  163,    0,
    0,    0,    0,    0,    0,    0,    0,   69,    0,  -37,
   49,   41,    0,    0,   25,   36,    0,   20,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  163,    0,    0,    0,  -39,   -2,  -37,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -10,    0,    0,    0,    0,    0,    0,    5,
   13,   28,   33,    0,    0,    0,    0,    0,    0,  -88,
    0,    0,    0,   44,   40,    0,  163,  166,    0,    0,
    0,  166,    0,    0,    0,    0,    0,  182,    0,    0,
    0,  166,    0,    0,
};
static const YYINT yygindex[] = {                       204,
  -63,  301,    0,   86,  -58,   -1,   30,   78,    0,  199,
    0,  -71,    6,    0,    0,  -81,    0,    0,    0,   14,
  192,  -25,  169,  181,  122,    0,    0,    0,    0,   80,
    0,  -47,    0,  157,    0,    0,    0,    0,    0,    0,
    0,  186,    0,  175,    0,    0,
};
#define YYTABLESIZE 482
static const YYINT yytable[] = {                         59,
   59,   17,   58,   59,   17,   53,   79,   41,  108,   41,
   52,   41,  131,   16,  103,  104,   32,  111,   59,  141,
   53,   16,  112,   55,   53,  113,   23,  114,   41,   52,
  100,  100,  100,   16,  100,  147,  100,   55,  115,  115,
  115,   33,  115,  115,  115,  101,  101,  101,  100,  101,
   36,  101,   37,  102,  102,  102,  115,  102,  115,  102,
  100,  100,  100,  101,  100,   97,  100,   97,   98,   97,
   98,  102,   98,   99,   98,   99,   95,   99,  100,  144,
   96,   93,  100,   97,   94,  173,   98,    5,   39,   92,
  115,   99,   42,   42,   95,   44,  179,  101,   96,   93,
  142,   47,   94,   52,  174,  102,   98,   92,  175,   54,
  111,  111,   26,  111,  111,  111,   25,   97,  183,   46,
   98,  161,   61,   49,  160,   99,   63,  111,   95,  111,
   49,  180,   96,   93,  169,  184,   94,  156,  157,   57,
   46,   92,  152,  153,  162,  131,   34,   35,   69,    1,
   64,   68,    2,  100,    3,    4,    5,  101,   70,  111,
  130,  109,   71,  102,   48,   72,   73,   74,   75,   76,
   77,   97,   98,  105,   75,   76,   77,   97,   73,   74,
  110,  133,  154,   98,  134,  137,   75,   76,   77,   78,
  138,    6,    7,    8,    9,   10,   11,   12,   13,   31,
  139,  146,  155,  158,  159,  166,  163,  170,  176,    1,
  181,    1,    2,   78,    3,    4,    5,   56,   83,   85,
   80,   89,   89,   30,   16,   59,  165,   41,   59,   66,
   59,   59,   59,  164,   62,  107,   59,   67,    0,    0,
    0,    0,    0,    0,    0,    0,  116,    0,    0,    0,
    0,    6,    7,    8,    9,   10,   11,   12,   13,    0,
    0,  127,  128,    0,    0,    0,   56,   59,   59,   59,
   59,   59,   59,   59,   59,   41,   56,  115,    0,    0,
  115,  115,  115,  115,  115,  115,  115,  115,  115,  115,
  100,  100,  115,  115,    0,    0,    0,  115,  115,  115,
  143,    0,    0,    0,    0,  101,  101,    0,    0,  150,
  151,  143,  143,  102,  102,    0,    0,    0,    0,    0,
  100,  100,    0,    0,    0,   97,   97,    0,   98,   98,
    0,    0,    0,   99,   99,    0,   95,   95,  143,    0,
   96,   96,   93,    0,  143,   94,  143,  143,  111,    0,
    0,  111,  111,  111,  111,  111,  111,  111,  111,  111,
  111,    0,    0,  111,  111,    0,    0,    0,  111,  111,
  111,   48,    0,    0,   48,    0,   48,   48,   48,  116,
    0,    0,  117,  118,  119,  120,  121,  122,  123,  124,
  125,  126,  135,  136,  127,  128,    0,    0,    0,  129,
  140,    1,    0,    0,    2,    0,    3,    4,    5,  148,
  149,    0,    0,   48,   48,   48,   48,   48,   48,   48,
   48,    0,    0,    0,   69,    1,    0,    0,    2,    0,
    3,    4,    5,    0,   70,    0,    0,    0,   71,    0,
    0,   72,    0,    6,    7,    8,    9,   10,   11,   12,
   13,    0,    0,    0,   73,   74,    0,    0,  167,  168,
    0,    0,   75,   76,   77,   78,  172,    6,    7,    8,
    9,   10,   11,   12,   13,    0,  178,    0,    0,    0,
    0,  182,
};
static const YYINT yycheck[] = {                         40,
   41,   41,   59,   44,   44,   40,  123,   38,   80,   40,
   40,   42,   46,    0,   73,   74,  123,   42,   59,  101,
   46,   59,   47,   49,   59,   43,   59,   45,   59,   59,
   41,   42,   43,   20,   45,  107,   47,   63,   41,   42,
   43,   40,   45,   46,   47,   41,   42,   43,   59,   45,
   44,   47,  306,   41,   42,   43,   59,   45,   61,   47,
   41,   42,   43,   59,   45,   41,   47,   43,   41,   45,
   43,   59,   45,   41,   69,   43,   41,   45,   59,  105,
   41,   41,   93,   59,   41,  167,   59,  125,  125,   41,
   93,   59,  123,   91,   59,  123,  178,   93,   59,   59,
  102,  305,   59,   41,  168,   93,  101,   59,  172,   93,
   42,   43,   38,   45,   46,   47,   42,   93,  182,   40,
   93,   41,   44,   44,   44,   93,   44,   59,   93,   61,
   51,  179,   93,   93,  160,  183,   93,  132,  140,  125,
   61,   93,  113,  114,  146,   46,   25,   26,  265,  266,
   59,  123,  269,   40,  271,  272,  273,   40,  275,   91,
   61,  302,  279,   40,   59,  282,  295,  296,  303,  304,
  305,  306,  167,   40,  303,  304,  305,  306,  295,  296,
  301,  125,  306,  178,   59,   59,  303,  304,  305,  306,
   59,  308,  309,  310,  311,  312,  313,  314,  315,  306,
   59,   91,  306,   59,   41,   41,  125,   93,   59,  266,
   41,    0,  269,   40,  271,  272,  273,  306,   41,   41,
  123,   59,   41,   20,   59,  266,  149,   36,  269,   61,
  271,  272,  273,  148,   54,   79,   51,   63,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  280,   -1,   -1,   -1,
   -1,  308,  309,  310,  311,  312,  313,  314,  315,   -1,
   -1,  295,  296,   -1,   -1,   -1,  306,  308,  309,  310,
  311,  312,  313,  314,  315,  306,  306,  280,   -1,   -1,
  283,  284,  285,  286,  287,  288,  289,  290,  291,  292,
  301,  302,  295,  296,   -1,   -1,   -1,  300,  301,  302,
  102,   -1,   -1,   -1,   -1,  301,  302,   -1,   -1,  111,
  112,  113,  114,  301,  302,   -1,   -1,   -1,   -1,   -1,
  301,  302,   -1,   -1,   -1,  301,  302,   -1,  301,  302,
   -1,   -1,   -1,  301,  302,   -1,  301,  302,  140,   -1,
  301,  302,  302,   -1,  146,  302,  148,  149,  280,   -1,
   -1,  283,  284,  285,  286,  287,  288,  289,  290,  291,
  292,   -1,   -1,  295,  296,   -1,   -1,   -1,  300,  301,
  302,  266,   -1,   -1,  269,   -1,  271,  272,  273,  280,
   -1,   -1,  283,  284,  285,  286,  287,  288,  289,  290,
  291,  292,   92,   93,  295,  296,   -1,   -1,   -1,  300,
  100,  266,   -1,   -1,  269,   -1,  271,  272,  273,  109,
  110,   -1,   -1,  308,  309,  310,  311,  312,  313,  314,
  315,   -1,   -1,   -1,  265,  266,   -1,   -1,  269,   -1,
  271,  272,  273,   -1,  275,   -1,   -1,   -1,  279,   -1,
   -1,  282,   -1,  308,  309,  310,  311,  312,  313,  314,
  315,   -1,   -1,   -1,  295,  296,   -1,   -1,  158,  159,
   -1,   -1,  303,  304,  305,  306,  166,  308,  309,  310,
  311,  312,  313,  314,  315,   -1,  176,   -1,   -1,   -1,
   -1,  181,
};
#define YYFINAL 14
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYUNDFTOKEN 364
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"'&'",0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,
0,0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"AUTO","BREAK","CASE","CONST","CONTINUE","DEFAULT",
"DO","REGISTER","RETURN","SIGNED","SIZEOF","STATIC","STRUCT","SWITCH","TYPEDEF",
"UNION","VOID","VOLATILE","WHILE","ELSE","ENUM","EXTERN","FOR","DEREF","GOTO",
"IF","MULEQ","DIVEQ","MODEQ","ADDEQ","SUBEQ","LSHIFTEQ","RSHIFTEQ","ANDEQ",
"XOREQ","OREQ","LSHIFT","RSHIFT","INCR","DECR","GTEQ","LTEQ","EQ","NEQ","LAND",
"LOR","TRUE","FALSE","NUMBER","IDENTIFIER","NOT","INT","FLOAT","CHAR","SHORT",
"LONG","DOUBLE","UNSIGNED","ENUMERATOR",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : start",
"start :",
"start : global_declaration start",
"global_declaration : function",
"global_declaration : declaration ';'",
"statements :",
"statements : '{' P statements '}' Q",
"statements : statement statements",
"statement : return ';'",
"statement : declaration ';'",
"statement : assignment ';'",
"statement : call ';'",
"statement : if_statement lbl",
"statement : while_statement lbl",
"statement : for_statement lbl",
"return : RETURN opt_expression",
"return :",
"call_list :",
"call_list : var",
"call_list : call_list ',' var",
"call : IDENTIFIER '(' call_list ')'",
"declaration : type_specifier vars",
"storage_specifier : AUTO",
"storage_specifier : REGISTER",
"storage_specifier : STATIC",
"storage_specifier : EXTERN",
"storage_specifier : TYPEDEF",
"type_specifier : VOID",
"type_specifier : CHAR",
"type_specifier : SHORT",
"type_specifier : INT",
"type_specifier : LONG",
"type_specifier : FLOAT",
"type_specifier : DOUBLE",
"type_specifier : SIGNED",
"type_specifier : UNSIGNED",
"type_specifier : compoundtype",
"type_specifier : enumerator",
"type_specifier : typedefname",
"compoundtype : struct_or_union IDENTIFIER A '{' struct_declarations '}'",
"compoundtype : struct_or_union '{' '}'",
"compoundtype : struct_or_union IDENTIFIER",
"A :",
"struct_or_union : STRUCT",
"struct_or_union : UNION",
"struct_declarations : struct_declaration ';'",
"struct_declarations : struct_declaration struct_declarations",
"struct_declaration : type_specifier struct_member",
"struct_member : var",
"struct_member : var ',' struct_member",
"enumerator : ENUMERATOR",
"typedefname : TYPEDEF",
"vars :",
"vars : var",
"vars : var ',' vars",
"var : addresses IDENTIFIER arrays",
"addresses :",
"addresses : '*' addresses",
"addresses : '&' addresses",
"arrays :",
"arrays : '[' num ']' arrays",
"num : NUMBER",
"assignment : expression",
"assignment : postfix_expression assign_oper assignment",
"assign_oper : '='",
"assign_oper : NEQ",
"assign_oper : ADDEQ",
"assign_oper : SUBEQ",
"assign_oper : MULEQ",
"assign_oper : DIVEQ",
"assign_oper : MODEQ",
"assign_oper : LSHIFTEQ",
"assign_oper : RSHIFTEQ",
"assign_oper : ANDEQ",
"assign_oper : XOREQ",
"assign_oper : OREQ",
"function : declaration E '(' P param_list ')' F ';'",
"function : declaration E '(' P param_list ')' F G '{' statements '}'",
"E :",
"F :",
"G :",
"P :",
"Q :",
"param_list :",
"param_list : type_specifier var ',' param_list",
"param_list : type_specifier var",
"if_statement : IF '(' expression ')' lbl statement",
"while_statement : WHILE '(' lbl expression ')' lbl statement jump",
"for_statement : FOR '(' opt_expression ';' lbl opt_expression ';' lbl opt_expression jump ')' lbl statement jump",
"opt_expression :",
"opt_expression : assignment",
"jump :",
"expression : logical_or",
"logical_or : logical_and",
"logical_or : logical_or LOR lbl logical_and",
"logical_and : additive_expression",
"logical_and : logical_and LAND lbl additive_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression '+' multiplicative_expression",
"additive_expression : additive_expression '-' multiplicative_expression",
"multiplicative_expression : postfix_expression",
"multiplicative_expression : multiplicative_expression '*' postfix_expression",
"multiplicative_expression : multiplicative_expression '/' postfix_expression",
"postfix_expression : prefix_expression",
"postfix_expression : postfix_expression INCR",
"postfix_expression : postfix_expression DECR",
"postfix_expression : postfix_expression '.' IDENTIFIER",
"postfix_expression : postfix_expression DEREF IDENTIFIER",
"prefix_expression : terminal",
"prefix_expression : INCR terminal",
"prefix_expression : DECR terminal",
"arrayref :",
"arrayref : arrayref '[' expression ']'",
"terminal : TRUE",
"terminal : FALSE",
"terminal : IDENTIFIER arrayref",
"terminal : NUMBER",
"lbl :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 271 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
#line 534 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 38 "c.y"
	{ print_rtls(); }
break;
case 2:
#line 39 "c.y"
	{}
break;
case 3:
#line 42 "c.y"
	{}
break;
case 4:
#line 43 "c.y"
	{}
break;
case 5:
#line 46 "c.y"
	{}
break;
case 6:
#line 47 "c.y"
	{}
break;
case 7:
#line 48 "c.y"
	{}
break;
case 8:
#line 51 "c.y"
	{}
break;
case 9:
#line 52 "c.y"
	{}
break;
case 10:
#line 53 "c.y"
	{}
break;
case 11:
#line 54 "c.y"
	{}
break;
case 12:
#line 55 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 13:
#line 56 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 14:
#line 57 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 15:
#line 60 "c.y"
	{ ret(yystack.l_mark[0].rtl); }
break;
case 17:
#line 63 "c.y"
	{}
break;
case 18:
#line 64 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 19:
#line 65 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 20:
#line 68 "c.y"
	{ call(yystack.l_mark[-3].str); }
break;
case 21:
#line 71 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 22:
#line 74 "c.y"
	{}
break;
case 23:
#line 75 "c.y"
	{}
break;
case 24:
#line 76 "c.y"
	{}
break;
case 25:
#line 77 "c.y"
	{}
break;
case 26:
#line 78 "c.y"
	{}
break;
case 27:
#line 81 "c.y"
	{}
break;
case 28:
#line 82 "c.y"
	{}
break;
case 29:
#line 83 "c.y"
	{}
break;
case 30:
#line 84 "c.y"
	{ identtype = INT; }
break;
case 31:
#line 85 "c.y"
	{}
break;
case 32:
#line 86 "c.y"
	{ identtype = FLOAT;}
break;
case 33:
#line 87 "c.y"
	{}
break;
case 34:
#line 88 "c.y"
	{}
break;
case 35:
#line 89 "c.y"
	{}
break;
case 36:
#line 90 "c.y"
	{ identtype = STRUCT; }
break;
case 37:
#line 91 "c.y"
	{}
break;
case 38:
#line 92 "c.y"
	{}
break;
case 39:
#line 96 "c.y"
	{ udtentry = get_udt(yystack.l_mark[-4].str); }
break;
case 40:
#line 97 "c.y"
	{}
break;
case 41:
#line 98 "c.y"
	{ udtentry = get_udt(yystack.l_mark[0].str); }
break;
case 42:
#line 100 "c.y"
	{ add_user_defined_type(yystack.l_mark[0].str); }
break;
case 43:
#line 103 "c.y"
	{}
break;
case 44:
#line 104 "c.y"
	{}
break;
case 45:
#line 107 "c.y"
	{}
break;
case 46:
#line 108 "c.y"
	{}
break;
case 47:
#line 111 "c.y"
	{}
break;
case 48:
#line 114 "c.y"
	{ add_member(yystack.l_mark[0].decl); }
break;
case 49:
#line 115 "c.y"
	{}
break;
case 50:
#line 118 "c.y"
	{}
break;
case 51:
#line 121 "c.y"
	{}
break;
case 52:
#line 124 "c.y"
	{}
break;
case 53:
#line 125 "c.y"
	{ add_symbol(yystack.l_mark[0].decl); yyval.decl = yystack.l_mark[0].decl; }
break;
case 54:
#line 126 "c.y"
	{ add_symbol(yystack.l_mark[-2].decl); yyval.decl = yystack.l_mark[-2].decl; }
break;
case 55:
#line 129 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-1].str, join(yystack.l_mark[0].type, yystack.l_mark[-2].type)); }
break;
case 56:
#line 132 "c.y"
	{ yyval.type = type(NULL, 1, identtype); }
break;
case 57:
#line 133 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, POINTER); }
break;
case 58:
#line 134 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, ADDRESS); }
break;
case 59:
#line 137 "c.y"
	{}
break;
case 60:
#line 138 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num, ARRAY); }
break;
case 61:
#line 141 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 62:
#line 144 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 63:
#line 145 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 64:
#line 148 "c.y"
	{ yyval.num = '='; }
break;
case 65:
#line 149 "c.y"
	{ yyval.num = NEQ; }
break;
case 66:
#line 150 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 67:
#line 151 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 68:
#line 152 "c.y"
	{ yyval.num = MULEQ; }
break;
case 69:
#line 153 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 70:
#line 154 "c.y"
	{ yyval.num = MODEQ; }
break;
case 71:
#line 155 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 72:
#line 156 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 73:
#line 157 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 74:
#line 158 "c.y"
	{ yyval.num = XOREQ; }
break;
case 75:
#line 159 "c.y"
	{ yyval.num = OREQ; }
break;
case 76:
#line 162 "c.y"
	{}
break;
case 77:
#line 164 "c.y"
	{ func(yystack.l_mark[-10].decl, yystack.l_mark[-6].decl, yystack.l_mark[-9].rtl); }
break;
case 78:
#line 166 "c.y"
	{ calledfunc = yystack.l_mark[0].decl; parameter = 1; yyval.rtl = empty(); }
break;
case 79:
#line 167 "c.y"
	{ parameter = 0; }
break;
case 80:
#line 168 "c.y"
	{ currfunc = calledfunc; }
break;
case 81:
#line 169 "c.y"
	{ increase_scope(); }
break;
case 82:
#line 170 "c.y"
	{ decrease_scope(); }
break;
case 83:
#line 173 "c.y"
	{ parameter = 0; }
break;
case 84:
#line 174 "c.y"
	{}
break;
case 85:
#line 175 "c.y"
	{}
break;
case 86:
#line 179 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 87:
#line 186 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 88:
#line 195 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 89:
#line 203 "c.y"
	{}
break;
case 90:
#line 204 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 91:
#line 207 "c.y"
	{ yyval.jump = jump(); }
break;
case 92:
#line 210 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 93:
#line 213 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 94:
#line 215 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 95:
#line 222 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 96:
#line 224 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 97:
#line 231 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 98:
#line 233 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 99:
#line 235 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 100:
#line 238 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 101:
#line 240 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 102:
#line 242 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 103:
#line 245 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 104:
#line 246 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 105:
#line 247 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 106:
#line 248 "c.y"
	{ yyval.rtl = access_member(yystack.l_mark[-2].rtl, yystack.l_mark[0].str); }
break;
case 107:
#line 249 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-2].rtl, DECR); }
break;
case 108:
#line 252 "c.y"
	{ }
break;
case 109:
#line 253 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), INCR); }
break;
case 110:
#line 254 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), DECR); }
break;
case 111:
#line 257 "c.y"
	{ yyval.rtl = arrayref(NULL, NULL); }
break;
case 112:
#line 258 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-4].str, yystack.l_mark[-1].rtl); }
break;
case 113:
#line 261 "c.y"
	{ yyval.rtl = terminal(TRUE, NULL); }
break;
case 114:
#line 262 "c.y"
	{ yyval.rtl = terminal(FALSE, NULL); }
break;
case 115:
#line 263 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl ? binst(terminal(IDENTIFIER,yystack.l_mark[-1].str), yystack.l_mark[0].rtl, '+')
                                   : terminal(IDENTIFIER, yystack.l_mark[-1].str); }
break;
case 116:
#line 265 "c.y"
	{ yyval.rtl = terminal(NUMBER, yystack.l_mark[0].str); }
break;
case 117:
#line 268 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 1221 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
