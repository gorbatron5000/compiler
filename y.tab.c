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
    0,    0,   35,   35,   12,   12,   12,    1,    1,    1,
    1,    1,    1,    1,   38,   38,   40,   40,   40,   39,
   19,   27,   27,   27,   27,   27,   31,   31,   31,   31,
   31,   31,   31,   31,   31,   31,   31,   31,   41,   41,
   41,   23,   24,   42,   42,   43,   43,   44,   45,   45,
   28,   29,   20,   20,   20,   21,   26,   26,   26,   25,
   25,   30,   13,   13,   32,   32,   32,   32,   32,   32,
   32,   32,   32,   32,   32,   32,   17,   17,   18,   46,
   47,   36,   37,   22,   22,   22,    9,   14,   15,   16,
   16,   34,    6,    3,    3,    4,    4,    8,    8,    8,
    7,    7,    7,   11,   11,   11,   11,   33,   33,   33,
   33,   33,   33,   10,   10,   10,   10,   10,   10,    5,
    5,    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    0,    2,    1,    2,    0,    5,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    0,    0,    1,    3,    4,
    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    6,    4,
    2,    0,    0,    1,    1,    2,    3,    2,    1,    3,
    1,    1,    0,    1,    3,    3,    0,    2,    2,    0,
    4,    1,    1,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    8,   11,    0,    0,
    0,    0,    0,    0,    4,    2,    6,    8,   14,    0,
    1,    0,    1,    1,    4,    1,    4,    1,    3,    3,
    1,    3,    3,    1,    2,    2,    2,    1,    1,    1,
    1,    1,    1,    1,    4,    2,    2,    3,    3,    1,
    1,    1,    1,    0,
};
static const YYINT yydefred[] = {                         0,
   34,   44,   52,   45,   27,   30,   32,   28,   29,   31,
   33,   35,   51,    0,    3,    0,   37,   38,    0,    0,
   36,    0,    4,    0,    0,    0,   21,    0,    0,    2,
    0,    0,   82,   58,   59,    0,    0,    0,    0,    0,
   55,    0,   56,    0,   40,    0,    0,   62,    0,    0,
    0,    0,   80,    0,    0,    0,   48,   39,    0,    0,
    0,   61,    0,   47,   77,    0,   85,   50,    0,    0,
    0,    0,    0,    0,    0,  120,  121,  123,    0,   82,
  108,  110,  111,  109,  112,  113,    0,    0,    0,  114,
   63,    0,    0,  124,    0,  101,    0,    0,  124,  124,
    0,    0,    0,    0,  122,   91,   15,  124,    0,    0,
    0,    0,    0,    0,    7,  124,  124,    0,    0,    0,
    0,   12,    0,   69,   70,   71,   67,   68,   72,   73,
   74,   75,   76,  116,  117,   66,    0,   65,    0,    0,
   78,   10,   13,   14,    9,    0,    8,   11,    0,    0,
    0,    0,   18,    0,    0,    0,    0,    0,    0,    0,
    0,  119,    0,  118,   64,    0,  124,  124,    0,   20,
   83,    0,    0,  115,  124,    0,    0,   19,    6,    0,
    0,   87,   92,  124,   88,    0,   92,    0,  124,    0,
   92,   89,
};
static const YYINT yydgoto[] = {                         14,
   87,  122,   88,   89,   90,   91,   92,   93,   94,   95,
   96,   97,   98,   99,  100,  107,   15,   24,  101,   27,
   28,   46,   38,   32,   43,   29,    0,   17,   18,   49,
   19,  140,  102,  185,   20,   40,  179,  103,  104,  154,
   21,   22,   51,   52,   57,   60,   66,
};
static const YYINT yysindex[] = {                       -85,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -43,    0,    0,  -16,  -85,
    0, -283,    0,   -7,  -16,  -16,    0,   14, -244,    0,
    0,  -26,    0,    0,    0,  -16,  -25,  -23,  -41,  -85,
    0, -211,    0,  -85,    0,   97,  -16,    0,   53,  -16,
   27,   95,    0,  112,  -25,  120,    0,    0,  -85,  113,
  -85,    0,  -16,    0,    0,   52,    0,    0,  -33,   -1,
  139,  140,  143, -145, -145,    0,    0,    0,  145,    0,
    0,    0,    0,    0,    0,    0,  -33, -131, -112,    0,
    0,  -13,   63,    0,  154,    0,   66,  134,    0,    0,
  135, -145,  136,  137,    0,    0,    0,    0,   -1,   -1,
  -37,  -37,  -16,  -33,    0,    0,    0, -145, -145,   -1,
   -1,    0, -109,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   -1,    0, -108,   -1,
    0,    0,    0,    0,    0,  -37,    0,    0,   -1,  144,
  158,  -37,    0,   45,   79,   -1,   -1,  -37,  -37,  -13,
  -13,    0,  114,    0,    0,  164,    0,    0,  -16,    0,
    0, -112,   63,    0,    0,   -1,   18,    0,    0,   18,
  147,    0,    0,    0,    0,   -1,    0,  167,    0,   18,
    0,    0,
};
static const YYINT yyrindex[] = {                       209,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  170,    0,    0,  -39,  209,
    0,   88,    0,    0,  -92,  -92,    0,  -29,    0,    0,
  -21,    0,    0,    0,    0,  -39,   29,    0,    0,  175,
    0,    0,    0,    0,    0,    0,  -92,    0,    0,  -92,
    0,    0,    0,  176,   29,  159,    0,    0,   94,  111,
  175,    0,  -92,    0,    0,    0,    0,    0,  -57,  161,
    0,    0,    0,    0,    0,    0,    0,    0,  131,    0,
    0,    0,    0,    0,    0,    0,  -57,  -34,  -28,    0,
    0,   72,    8,    0,   98,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  161,    0,
    5,   33,  -38,  -57,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   40,    0,    0,    0,    0,
    0,   62,    0,    0,    0,    0,    0,   69,   77,   89,
  108,    0,    0,    0,    0,    0,    0,    0,  -92,    0,
    0,  -14,   36,    0,    0,  161,  162,    0,    0,  162,
    0,    0,    0,    0,    0,  190,    0,    0,    0,  162,
    0,    0,
};
static const YYINT yygindex[] = {                       215,
 -162,  285,    0,   81,    0,  -96,   48,   84,    0,  361,
    0,  -79,   26,    0,    0,  -49,    0,    0,    4,  208,
  100,  186,    0,    0,  193,   46,    0,    0,    0,    0,
   -4,    0,    0, -148,    0,  171,    0,    0,    0,    0,
    0,    0,  191,    0,  189,    0,    0,
};
#define YYTABLESIZE 518
static const YYINT yytable[] = {                         86,
   53,   16,   17,   16,   81,   17,   93,  115,  139,   82,
   54,   83,   94,  151,  182,   23,   41,  183,   41,   53,
   41,   26,   31,   16,   93,   25,   95,  191,  118,   54,
   94,   86,   33,  119,  155,   47,   81,   41,  188,   50,
  163,   82,  192,   83,   95,  106,  106,  106,   96,  106,
   86,  106,  166,  137,   50,   81,   47,   36,   93,  150,
   82,   37,   83,  106,   94,   42,   96,    5,   60,   60,
   34,   35,   60,  107,  107,  107,   97,  107,   95,  107,
  105,  105,  105,   45,  105,  170,  105,   60,  169,   80,
   84,  107,   85,   48,   97,  106,   39,  106,  105,   44,
   96,   42,  104,  104,  104,  120,  104,  121,  104,  102,
  102,  102,   98,  102,   98,  102,   98,  103,  103,  103,
  104,  103,   84,  103,   85,  107,  181,  102,   97,   99,
   98,   99,  105,   99,  106,  103,  187,   53,  104,  104,
  104,   84,  104,   85,  104,   55,   54,   99,  100,   56,
  100,   58,  100,   59,  104,   61,  104,   76,   77,   78,
  105,  102,   56,   63,   98,  165,  100,  160,  161,  103,
  116,   65,  122,  122,   69,  122,  122,  122,  108,  109,
    1,   99,  110,    2,  113,    3,    4,    5,  117,  122,
  141,  122,  142,  145,  147,  148,  162,  164,  168,  139,
  100,  106,  167,  171,  175,  184,  174,  189,    1,   79,
   43,  106,  153,   57,  138,   84,   86,   49,   46,   90,
   16,  122,    6,    7,    8,    9,   10,   11,   12,   13,
   90,   70,    1,   81,   30,    2,  172,    3,    4,    5,
  173,   71,  123,   41,  137,   72,   67,   62,   73,   64,
  114,   68,    0,    0,    0,    0,    0,  134,  135,    0,
    0,   74,   75,    0,    0,    0,   57,   57,  178,   76,
   77,   78,   79,   94,    6,    7,    8,    9,   10,   11,
   12,   13,   70,    1,   41,    0,    2,   95,    3,    4,
    5,    0,   71,   74,   75,    0,   72,    0,    0,   73,
    0,   76,   77,   78,  105,  106,  106,    0,   96,   96,
    0,    0,   74,   75,    0,    0,    0,    0,    0,    0,
   76,   77,   78,   79,    0,    6,    7,    8,    9,   10,
   11,   12,   13,  107,  107,    0,   97,   97,    0,    0,
  105,  105,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  104,  104,    0,    0,    0,    0,    0,  102,
  102,    0,   98,   98,    0,    0,    0,  103,  103,    0,
    0,    0,    0,  143,  144,    0,    0,    0,    0,   99,
   99,    0,  149,    0,    0,    0,    0,    0,  104,  104,
  156,  157,    0,    0,    0,    0,    0,    0,  100,  100,
  122,    0,    0,  122,  122,  122,  122,  122,  122,  122,
  122,  122,  122,    0,    0,  122,  122,    0,    0,    0,
  122,  122,  122,  123,  111,  112,  124,  125,  126,  127,
  128,  129,  130,  131,  132,  133,    0,    0,  134,  135,
    0,  176,  177,  136,    0,    0,    0,    0,    0,  180,
    0,    0,  146,    0,    0,    0,    0,    0,  186,    0,
  152,    0,    0,  190,    0,    0,    0,    0,  158,  159,
  152,  152,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  152,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  152,
    0,    0,    0,    0,    0,    0,  152,  152,
};
static const YYINT yycheck[] = {                         33,
   40,   59,   41,    0,   38,   44,   41,   87,   46,   43,
   40,   45,   41,  110,  177,   59,   38,  180,   40,   59,
   42,   38,  306,   20,   59,   42,   41,  190,   42,   59,
   59,   33,   40,   47,  114,   40,   38,   59,  187,   44,
  137,   43,  191,   45,   59,   41,   42,   43,   41,   45,
   33,   47,  149,   91,   59,   38,   61,   44,   93,  109,
   43,  306,   45,   59,   93,   91,   59,  125,   40,   41,
   25,   26,   44,   41,   42,   43,   41,   45,   93,   47,
   41,   42,   43,  125,   45,   41,   47,   59,   44,  123,
  124,   59,  126,  305,   59,   70,  123,   93,   59,  123,
   93,  123,   41,   42,   43,   43,   45,   45,   47,   41,
   42,   43,   41,   45,   43,   47,   45,   41,   42,   43,
   59,   45,  124,   47,  126,   93,  176,   59,   93,   41,
   59,   43,   93,   45,  109,   59,  186,   41,   41,   42,
   43,  124,   45,  126,   47,   93,   47,   59,   41,   50,
   43,  125,   45,   59,   93,   44,   59,  303,  304,  305,
  306,   93,   63,   44,   93,  140,   59,  120,  121,   93,
  302,   59,   42,   43,  123,   45,   46,   47,   40,   40,
  266,   93,   40,  269,   40,  271,  272,  273,  301,   59,
  125,   61,   59,   59,   59,   59,  306,  306,   41,   46,
   93,  176,   59,  125,   41,   59,   93,   41,    0,   40,
  123,  186,  113,  306,   61,   41,   41,   59,  125,   59,
   59,   91,  308,  309,  310,  311,  312,  313,  314,  315,
   41,  265,  266,  123,   20,  269,  156,  271,  272,  273,
  157,  275,  280,   36,   91,  279,   61,   55,  282,   59,
   80,   63,   -1,   -1,   -1,   -1,   -1,  295,  296,   -1,
   -1,  295,  296,   -1,   -1,   -1,  306,  306,  169,  303,
  304,  305,  306,  302,  308,  309,  310,  311,  312,  313,
  314,  315,  265,  266,  306,   -1,  269,  302,  271,  272,
  273,   -1,  275,  295,  296,   -1,  279,   -1,   -1,  282,
   -1,  303,  304,  305,  306,  301,  302,   -1,  301,  302,
   -1,   -1,  295,  296,   -1,   -1,   -1,   -1,   -1,   -1,
  303,  304,  305,  306,   -1,  308,  309,  310,  311,  312,
  313,  314,  315,  301,  302,   -1,  301,  302,   -1,   -1,
  301,  302,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  301,  302,   -1,   -1,   -1,   -1,   -1,  301,
  302,   -1,  301,  302,   -1,   -1,   -1,  301,  302,   -1,
   -1,   -1,   -1,   99,  100,   -1,   -1,   -1,   -1,  301,
  302,   -1,  108,   -1,   -1,   -1,   -1,   -1,  301,  302,
  116,  117,   -1,   -1,   -1,   -1,   -1,   -1,  301,  302,
  280,   -1,   -1,  283,  284,  285,  286,  287,  288,  289,
  290,  291,  292,   -1,   -1,  295,  296,   -1,   -1,   -1,
  300,  301,  302,  280,   74,   75,  283,  284,  285,  286,
  287,  288,  289,  290,  291,  292,   -1,   -1,  295,  296,
   -1,  167,  168,  300,   -1,   -1,   -1,   -1,   -1,  175,
   -1,   -1,  102,   -1,   -1,   -1,   -1,   -1,  184,   -1,
  110,   -1,   -1,  189,   -1,   -1,   -1,   -1,  118,  119,
  120,  121,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  137,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  149,
   -1,   -1,   -1,   -1,   -1,   -1,  156,  157,
};
#define YYFINAL 14
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYUNDFTOKEN 365
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,"'&'",0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,
0,0,0,0,0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'","'|'","'}'","'~'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"AUTO","BREAK","CASE","CONST",
"CONTINUE","DEFAULT","DO","REGISTER","RETURN","SIGNED","SIZEOF","STATIC",
"STRUCT","SWITCH","TYPEDEF","UNION","VOID","VOLATILE","WHILE","ELSE","ENUM",
"EXTERN","FOR","DEREF","GOTO","IF","MULEQ","DIVEQ","MODEQ","ADDEQ","SUBEQ",
"LSHIFTEQ","RSHIFTEQ","ANDEQ","XOREQ","OREQ","LSHIFT","RSHIFT","INCR","DECR",
"GTEQ","LTEQ","EQ","NEQ","LAND","LOR","TRUE","FALSE","NUMBER","IDENTIFIER",
"NOT","INT","FLOAT","CHAR","SHORT","LONG","DOUBLE","UNSIGNED","ENUMERATOR",0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,"illegal-symbol",
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
"compoundtype : struct_or_union B '{' '}'",
"compoundtype : struct_or_union IDENTIFIER",
"A :",
"B :",
"struct_or_union : STRUCT",
"struct_or_union : UNION",
"struct_declarations : struct_declaration ';'",
"struct_declarations : struct_declaration ';' struct_declarations",
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
"multiplicative_expression : prefix_expression",
"multiplicative_expression : multiplicative_expression '*' postfix_expression",
"multiplicative_expression : multiplicative_expression '/' postfix_expression",
"prefix_expression : postfix_expression",
"prefix_expression : prefix_op postfix_expression",
"prefix_expression : INCR postfix_expression",
"prefix_expression : DECR postfix_expression",
"prefix_op : '&'",
"prefix_op : '|'",
"prefix_op : '+'",
"prefix_op : '-'",
"prefix_op : '~'",
"prefix_op : '!'",
"postfix_expression : terminal",
"postfix_expression : postfix_expression '[' expression ']'",
"postfix_expression : postfix_expression INCR",
"postfix_expression : postfix_expression DECR",
"postfix_expression : postfix_expression '.' IDENTIFIER",
"postfix_expression : postfix_expression DEREF IDENTIFIER",
"terminal : TRUE",
"terminal : FALSE",
"terminal : IDENTIFIER",
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
#line 281 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
#line 553 "y.tab.c"

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
#line 37 "c.y"
	{ print_rtls(); }
break;
case 2:
#line 38 "c.y"
	{}
break;
case 3:
#line 41 "c.y"
	{}
break;
case 4:
#line 42 "c.y"
	{}
break;
case 5:
#line 45 "c.y"
	{}
break;
case 6:
#line 46 "c.y"
	{}
break;
case 7:
#line 47 "c.y"
	{}
break;
case 8:
#line 50 "c.y"
	{}
break;
case 9:
#line 51 "c.y"
	{}
break;
case 10:
#line 52 "c.y"
	{}
break;
case 11:
#line 53 "c.y"
	{}
break;
case 12:
#line 54 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 13:
#line 55 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 14:
#line 56 "c.y"
	{ backpatch(yystack.l_mark[-1].rtl->falselist, yystack.l_mark[0].rtl); }
break;
case 15:
#line 59 "c.y"
	{ ret(yystack.l_mark[0].rtl); }
break;
case 17:
#line 62 "c.y"
	{}
break;
case 18:
#line 63 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 19:
#line 64 "c.y"
	{ param(yystack.l_mark[0].decl); }
break;
case 20:
#line 67 "c.y"
	{ call(yystack.l_mark[-3].str); }
break;
case 21:
#line 70 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 22:
#line 73 "c.y"
	{}
break;
case 23:
#line 74 "c.y"
	{}
break;
case 24:
#line 75 "c.y"
	{}
break;
case 25:
#line 76 "c.y"
	{}
break;
case 26:
#line 77 "c.y"
	{}
break;
case 27:
#line 80 "c.y"
	{}
break;
case 28:
#line 81 "c.y"
	{}
break;
case 29:
#line 82 "c.y"
	{}
break;
case 30:
#line 83 "c.y"
	{ identtype = INT; }
break;
case 31:
#line 84 "c.y"
	{}
break;
case 32:
#line 85 "c.y"
	{ identtype = FLOAT;}
break;
case 33:
#line 86 "c.y"
	{}
break;
case 34:
#line 87 "c.y"
	{}
break;
case 35:
#line 88 "c.y"
	{}
break;
case 36:
#line 89 "c.y"
	{ identtype = STRUCT; }
break;
case 37:
#line 90 "c.y"
	{}
break;
case 38:
#line 91 "c.y"
	{}
break;
case 39:
#line 95 "c.y"
	{ udtentry = get_udt(yystack.l_mark[-4].str);
              yystack.l_mark[-3].decl->type->width = structsize;
              structsize = 0; }
break;
case 40:
#line 98 "c.y"
	{}
break;
case 41:
#line 99 "c.y"
	{ udtentry = get_udt(yystack.l_mark[0].str); }
break;
case 42:
#line 101 "c.y"
	{ yyval.decl = add_user_defined_type(yystack.l_mark[0].str); }
break;
case 43:
#line 102 "c.y"
	{ yyval.decl = add_user_defined_type("anon"); }
break;
case 44:
#line 105 "c.y"
	{}
break;
case 45:
#line 106 "c.y"
	{}
break;
case 46:
#line 109 "c.y"
	{}
break;
case 47:
#line 110 "c.y"
	{}
break;
case 48:
#line 113 "c.y"
	{}
break;
case 49:
#line 116 "c.y"
	{ add_member(yystack.l_mark[0].decl); }
break;
case 50:
#line 117 "c.y"
	{ add_member(yystack.l_mark[-2].decl); }
break;
case 51:
#line 120 "c.y"
	{}
break;
case 52:
#line 123 "c.y"
	{}
break;
case 53:
#line 126 "c.y"
	{}
break;
case 54:
#line 127 "c.y"
	{ add_symbol(yystack.l_mark[0].decl); yyval.decl = yystack.l_mark[0].decl; }
break;
case 55:
#line 128 "c.y"
	{ add_symbol(yystack.l_mark[-2].decl); yyval.decl = yystack.l_mark[-2].decl; }
break;
case 56:
#line 131 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-1].str, join(yystack.l_mark[0].type, yystack.l_mark[-2].type)); }
break;
case 57:
#line 134 "c.y"
	{ yyval.type = type(NULL, 1, identtype);
     if (identtype == STRUCT)
        yyval.type->width = udtentry->type->width;
   }
break;
case 58:
#line 138 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, POINTER); }
break;
case 59:
#line 139 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, ADDRESS); }
break;
case 60:
#line 142 "c.y"
	{}
break;
case 61:
#line 143 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num, ARRAY); }
break;
case 62:
#line 146 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 63:
#line 149 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 64:
#line 150 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 65:
#line 153 "c.y"
	{ yyval.num = '='; }
break;
case 66:
#line 154 "c.y"
	{ yyval.num = NEQ; }
break;
case 67:
#line 155 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 68:
#line 156 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 69:
#line 157 "c.y"
	{ yyval.num = MULEQ; }
break;
case 70:
#line 158 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 71:
#line 159 "c.y"
	{ yyval.num = MODEQ; }
break;
case 72:
#line 160 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 73:
#line 161 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 74:
#line 162 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 75:
#line 163 "c.y"
	{ yyval.num = XOREQ; }
break;
case 76:
#line 164 "c.y"
	{ yyval.num = OREQ; }
break;
case 77:
#line 167 "c.y"
	{}
break;
case 78:
#line 169 "c.y"
	{ func(yystack.l_mark[-10].decl, yystack.l_mark[-6].decl, yystack.l_mark[-9].rtl); }
break;
case 79:
#line 171 "c.y"
	{ calledfunc = yystack.l_mark[0].decl; parameter = 1; yyval.rtl = empty(); }
break;
case 80:
#line 172 "c.y"
	{ parameter = 0; }
break;
case 81:
#line 173 "c.y"
	{ currfunc = calledfunc; }
break;
case 82:
#line 174 "c.y"
	{ increase_scope(); }
break;
case 83:
#line 175 "c.y"
	{ decrease_scope(); }
break;
case 84:
#line 178 "c.y"
	{ parameter = 0; }
break;
case 85:
#line 179 "c.y"
	{ add_symbol(yystack.l_mark[-2].decl); }
break;
case 86:
#line 180 "c.y"
	{ add_symbol(yystack.l_mark[0].decl); }
break;
case 87:
#line 184 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 88:
#line 191 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 89:
#line 200 "c.y"
	{ make_jumps(yystack.l_mark[-8].rtl);
                 backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 90:
#line 208 "c.y"
	{}
break;
case 91:
#line 209 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 92:
#line 212 "c.y"
	{ yyval.jump = jump(); }
break;
case 93:
#line 215 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 94:
#line 218 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 95:
#line 220 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 96:
#line 227 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 97:
#line 229 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 98:
#line 236 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 99:
#line 238 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 100:
#line 240 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 101:
#line 243 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 102:
#line 245 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 103:
#line 247 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 104:
#line 250 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 105:
#line 251 "c.y"
	{ yyval.rtl = unary(yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 106:
#line 252 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), INCR); }
break;
case 107:
#line 253 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), DECR); }
break;
case 108:
#line 256 "c.y"
	{ yyval.num = '&'; }
break;
case 109:
#line 257 "c.y"
	{ yyval.num = '|'; }
break;
case 110:
#line 258 "c.y"
	{ yyval.num = '+'; }
break;
case 111:
#line 259 "c.y"
	{ yyval.num = '-'; }
break;
case 112:
#line 260 "c.y"
	{ yyval.num = '~'; }
break;
case 113:
#line 261 "c.y"
	{ yyval.num = '!'; }
break;
case 114:
#line 264 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 115:
#line 265 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-3].rtl, yystack.l_mark[-1].rtl); }
break;
case 116:
#line 266 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 117:
#line 267 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 118:
#line 268 "c.y"
	{ yyval.rtl = access_member(yystack.l_mark[-2].rtl, yystack.l_mark[0].str); }
break;
case 119:
#line 269 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-2].rtl, DECR); }
break;
case 120:
#line 272 "c.y"
	{ yyval.rtl = terminal(TRUE, NULL); }
break;
case 121:
#line 273 "c.y"
	{ yyval.rtl = terminal(FALSE, NULL); }
break;
case 122:
#line 274 "c.y"
	{ yyval.rtl = terminal(IDENTIFIER, yystack.l_mark[0].str); }
break;
case 123:
#line 275 "c.y"
	{ yyval.rtl = terminal(NUMBER, yystack.l_mark[0].str); }
break;
case 124:
#line 278 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 1272 "y.tab.c"
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
