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
#include "sem_rec.h"
#line 6 "c.y"
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
#line 40 "y.tab.c"

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
#define GOTO 280
#define IF 281
#define MULEQ 282
#define DIVEQ 283
#define MODEQ 284
#define ADDEQ 285
#define SUBEQ 286
#define LSHIFTEQ 287
#define RSHIFTEQ 288
#define ANDEQ 289
#define XOREQ 290
#define OREQ 291
#define LSHIFT 292
#define RSHIFT 293
#define INCR 294
#define DECR 295
#define GTEQ 296
#define LTEQ 297
#define EQ 298
#define NEQ 299
#define LAND 300
#define LOR 301
#define TRUE 302
#define FALSE 303
#define NUMBER 304
#define IDENTIFIER 305
#define NOT 306
#define INT 307
#define FLOAT 308
#define CHAR 309
#define SHORT 310
#define LONG 311
#define DOUBLE 312
#define UNSIGNED 313
#define ENUMERATOR 314
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,   33,   33,   12,   12,   12,    1,    1,    1,
    1,    1,    1,    1,   36,   36,   38,   38,   38,   37,
   20,   26,   26,   26,   26,   26,   30,   30,   30,   30,
   30,   30,   30,   30,   30,   30,   30,   30,   39,   39,
   39,   40,   40,   27,   28,   21,   21,   22,   25,   25,
   25,   24,   24,   29,   13,   13,   31,   31,   31,   31,
   31,   31,   31,   31,   31,   31,   31,   31,   17,   17,
   18,   41,   42,   34,   35,   23,   23,   23,    9,   14,
   15,   16,   16,   32,    6,    3,    3,    4,    4,    8,
    8,    8,    7,    7,    7,   10,   10,   10,   11,   11,
   11,   19,   19,    5,    5,    5,    5,    2,
};
static const YYINT yylen[] = {                            2,
    0,    2,    1,    2,    0,    5,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    0,    0,    1,    3,    4,
    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    4,    3,
    2,    1,    1,    1,    1,    1,    3,    3,    0,    2,
    2,    0,    4,    1,    1,    3,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    8,   11,
    0,    0,    0,    0,    0,    0,    4,    2,    6,    8,
   14,    0,    1,    0,    1,    1,    4,    1,    4,    1,
    3,    3,    1,    3,    3,    1,    2,    2,    1,    2,
    2,    0,    4,    1,    1,    2,    1,    0,
};
static const YYINT yydefred[] = {                         0,
   34,   42,   45,   43,   27,   30,   32,   28,   29,   31,
   33,   35,   44,    0,    3,    0,   37,   38,    0,    0,
   36,    0,    4,    0,    0,    0,   21,    0,    0,    2,
    0,    0,   74,   50,   51,    0,    0,    0,   40,    0,
   47,    0,   48,   39,    0,    0,   54,    0,   72,    0,
    0,    0,    0,   53,   69,    0,   77,    0,    0,    0,
    0,    0,    0,    0,  104,  105,  107,    0,   74,    0,
    0,    0,   99,   55,    0,    0,  108,    0,    0,    0,
    0,  108,  108,    0,    0,    0,  102,   83,   15,  108,
    0,    0,  100,  101,    0,    0,    0,    7,  108,  108,
    0,    0,    0,    0,   12,   61,   62,   63,   59,   60,
   64,   65,   66,   67,   68,   58,   57,    0,   97,   98,
   70,   10,   13,   14,    9,    8,   11,    0,    0,    0,
   93,   18,    0,    0,    0,    0,    0,   94,   95,    0,
    0,   56,    0,  108,  108,    0,   20,    0,   75,    0,
    0,  108,    0,    0,   19,  103,    6,    0,    0,   79,
   84,  108,   80,    0,   84,    0,  108,    0,   84,   81,
};
static const YYINT yydgoto[] = {                         14,
   70,  105,   71,   72,   73,   74,   75,   76,   77,   78,
   79,   80,   81,   82,   83,   89,   15,   24,   96,   84,
   27,   28,   45,   43,   29,    0,   17,   18,   48,   19,
  118,  163,   20,   40,  157,   85,   86,  133,   21,   22,
   52,   56,
};
static const YYINT yysindex[] = {                      -141,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -44,    0,    0,  -25, -141,
    0, -116,    0,  -19,  -25,  -25,    0,   36, -199,    0,
   -6,   -4,    0,    0,    0,  -25,   28,    1,    0, -141,
    0, -175,    0,    0,   94,  -25,    0,   43,    0,   93,
   28,   79, -141,    0,    0,   16,    0, -117, -161,  100,
  105,  107, -194, -194,    0,    0,    0,  110,    0, -117,
 -155, -149,    0,    0,   54,   42,    0,  -58, -239,   32,
  101,    0,    0,  102,  104,  115,    0,    0,    0,    0,
 -161, -161,    0,    0,  -25,   62, -117,    0,    0,    0,
 -161, -161, -161, -161,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -161,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -161,  116,  118,
    0,    0,   53, -161,   40, -161, -161,    0,    0,   54,
   54,    0,  135,    0,    0,  -25,    0,   86,    0, -149,
   42,    0, -161,   66,    0,    0,    0,   66,  121,    0,
    0,    0,    0, -161,    0,  140,    0,   66,    0,    0,
};
static const YYINT yyrindex[] = {                       182,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  143,    0,    0, -121,  182,
    0,    0,    0,    0, -121, -121,    0,   30,    0,    0,
  -38,    0,    0,    0,    0, -121,   63,    0,    0,  158,
    0,    0,    0,    0,    0, -121,    0,    0,    0,  159,
   63,   78,  158,    0,    0,    0,    0,  -50,  144,    0,
    0,    0,    0,    0,    0,    0,    0,   29,    0,  -50,
  -33,  -40,    0,    0,   -7,    5,    0,  -18,  -10,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  144,    0,    0,    0,  -39,  -31,  -50,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   -1,
    2,    0,    0,    0,    0, -121,    0,    0,    0,    9,
    7,    0,  144,  145,    0,    0,    0,  145,    0,    0,
    0,    0,    0,  161,    0,    0,    0,  145,    0,    0,
};
static const YYINT yygindex[] = {                       185,
  -89,  243,    0,   70,   49,  -29,   11,   74,    0,  106,
    0,  -13,  -37,    0,    0,  -71,    0,    0,    0,   39,
  176,  -28,  160,  163,   98,    0,    0,    0,    0,   38,
    0,  -92,    0,  146,    0,    0,    0,    0,    0,    0,
    0,    0,
};
#define YYTABLESIZE 410
static const YYINT yytable[] = {                         41,
   86,   17,  117,   41,   17,   69,   32,   85,   16,  106,
  106,  106,   26,  106,   23,  106,   25,   50,   86,  129,
   33,   88,   93,   93,   93,   85,   93,  106,   93,  106,
   96,   96,   96,   90,   96,   90,   96,   90,   16,   91,
   93,   91,   92,   91,   92,   88,   92,   89,   96,   87,
   96,   90,   86,   88,  119,  120,   98,   91,   16,   85,
   92,  106,  130,   88,  160,   89,  132,   87,  161,   46,
  102,  102,  166,  102,    5,  102,  170,   46,  169,   36,
  142,  159,   96,  135,  103,   90,  104,  102,   46,  102,
   46,   91,  165,  147,   92,  101,  146,   88,  143,   89,
  102,   87,   52,   52,  148,   37,   52,   65,   66,   67,
   87,   93,   94,  140,  141,   88,   38,  155,   42,  102,
   39,   52,   34,   35,    1,   44,   88,    2,   47,    3,
    4,    5,   63,   64,   49,   51,   53,   55,   58,   90,
   65,   66,   67,   87,   91,   99,   92,   59,    1,   95,
  100,    2,  134,    3,    4,    5,  121,   60,  145,  122,
  125,   61,  126,   62,  149,    6,    7,    8,    9,   10,
   11,   12,   13,  127,  144,  152,   63,   64,  156,  162,
  167,    1,   71,   49,   65,   66,   67,   68,   31,    6,
    7,    8,    9,   10,   11,   12,   13,  131,   76,   78,
   73,   82,   82,   16,   30,  150,  138,  139,  131,  131,
  151,   41,   57,   54,   97,    0,    0,    0,    0,    0,
    0,    0,    0,  106,  107,  108,  109,  110,  111,  112,
  113,  114,  115,  131,    0,    0,    0,    0,    0,  131,
  116,  131,  131,    0,    0,    0,    0,    0,    0,    0,
  106,  106,  106,  106,  106,  106,  106,  106,  106,  106,
   86,    0,  106,  106,    0,   49,   41,  106,  106,  106,
    0,   96,   96,   96,   96,   96,   96,   96,   96,   96,
   96,   93,   93,    0,    0,    0,    0,    0,   96,   96,
   96,    0,   90,   90,    0,    0,    0,    0,   91,   91,
    0,   92,   92,    0,   88,   88,   89,   89,    0,   87,
  102,  102,  102,  102,  102,  102,  102,  102,  102,  102,
    0,    0,  102,  102,  123,  124,    0,  102,  102,  102,
   59,    1,  128,    0,    2,    0,    3,    4,    5,    0,
   60,  136,  137,    0,   61,    0,   62,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   63,
   64,    0,    0,    0,    0,    0,    0,   65,   66,   67,
   68,    0,    6,    7,    8,    9,   10,   11,   12,   13,
    0,    0,    0,    0,    0,    0,  153,  154,    0,    0,
    0,    0,    0,    0,  158,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  164,    0,    0,    0,    0,  168,
};
static const YYINT yycheck[] = {                         38,
   41,   41,   61,   42,   44,  123,  123,   41,   59,   41,
   42,   43,   38,   45,   59,   47,   42,   46,   59,   91,
   40,   59,   41,   42,   43,   59,   45,   59,   47,   61,
   41,   42,   43,   41,   45,   43,   47,   45,    0,   41,
   59,   43,   41,   45,   43,   41,   45,   41,   59,   41,
   61,   59,   93,   91,  294,  295,   70,   59,   20,   93,
   59,   93,   92,   59,  154,   59,   95,   59,  158,   40,
   42,   43,  165,   45,  125,   47,  169,   40,  168,   44,
  118,  153,   93,   97,   43,   93,   45,   59,   59,   61,
   53,   93,  164,   41,   93,   42,   44,   93,  128,   93,
   47,   93,   40,   41,  134,  305,   44,  302,  303,  304,
  305,   63,   64,  103,  104,  153,  123,  146,   91,   91,
  125,   59,   25,   26,  266,  125,  164,  269,  304,  271,
  272,  273,  294,  295,   41,   93,   44,   59,  123,   40,
  302,  303,  304,  305,   40,  301,   40,  265,  266,   40,
  300,  269,   91,  271,  272,  273,  125,  275,   41,   59,
   59,  279,   59,  281,  125,  307,  308,  309,  310,  311,
  312,  313,  314,   59,   59,   41,  294,  295,   93,   59,
   41,    0,   40,  305,  302,  303,  304,  305,  305,  307,
  308,  309,  310,  311,  312,  313,  314,   92,   41,   41,
  123,   41,   59,   59,   20,  136,  101,  102,  103,  104,
  137,   36,   53,   51,   69,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  282,  283,  284,  285,  286,  287,  288,
  289,  290,  291,  128,   -1,   -1,   -1,   -1,   -1,  134,
  299,  136,  137,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  282,  283,  284,  285,  286,  287,  288,  289,  290,  291,
  301,   -1,  294,  295,   -1,  305,  305,  299,  300,  301,
   -1,  282,  283,  284,  285,  286,  287,  288,  289,  290,
  291,  300,  301,   -1,   -1,   -1,   -1,   -1,  299,  300,
  301,   -1,  300,  301,   -1,   -1,   -1,   -1,  300,  301,
   -1,  300,  301,   -1,  300,  301,  300,  301,   -1,  301,
  282,  283,  284,  285,  286,  287,  288,  289,  290,  291,
   -1,   -1,  294,  295,   82,   83,   -1,  299,  300,  301,
  265,  266,   90,   -1,  269,   -1,  271,  272,  273,   -1,
  275,   99,  100,   -1,  279,   -1,  281,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  294,
  295,   -1,   -1,   -1,   -1,   -1,   -1,  302,  303,  304,
  305,   -1,  307,  308,  309,  310,  311,  312,  313,  314,
   -1,   -1,   -1,   -1,   -1,   -1,  144,  145,   -1,   -1,
   -1,   -1,   -1,   -1,  152,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  162,   -1,   -1,   -1,   -1,  167,
};
#define YYFINAL 14
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 314
#define YYUNDFTOKEN 359
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",
0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"AUTO","BREAK","CASE","CONST","CONTINUE","DEFAULT","DO",
"REGISTER","RETURN","SIGNED","SIZEOF","STATIC","STRUCT","SWITCH","TYPEDEF",
"UNION","VOID","VOLATILE","WHILE","ELSE","ENUM","EXTERN","FOR","GOTO","IF",
"MULEQ","DIVEQ","MODEQ","ADDEQ","SUBEQ","LSHIFTEQ","RSHIFTEQ","ANDEQ","XOREQ",
"OREQ","LSHIFT","RSHIFT","INCR","DECR","GTEQ","LTEQ","EQ","NEQ","LAND","LOR",
"TRUE","FALSE","NUMBER","IDENTIFIER","NOT","INT","FLOAT","CHAR","SHORT","LONG",
"DOUBLE","UNSIGNED","ENUMERATOR",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"compoundtype : struct_or_union IDENTIFIER '{' '}'",
"compoundtype : struct_or_union '{' '}'",
"compoundtype : struct_or_union IDENTIFIER",
"struct_or_union : STRUCT",
"struct_or_union : UNION",
"enumerator : ENUMERATOR",
"typedefname : TYPEDEF",
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
"postfix_expression : prefix_expression INCR",
"postfix_expression : prefix_expression DECR",
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
#line 253 "c.y"

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
#line 499 "y.tab.c"

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
	{}
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
#line 94 "c.y"
	{}
break;
case 40:
#line 95 "c.y"
	{}
break;
case 41:
#line 96 "c.y"
	{}
break;
case 42:
#line 99 "c.y"
	{}
break;
case 43:
#line 100 "c.y"
	{}
break;
case 44:
#line 103 "c.y"
	{}
break;
case 45:
#line 106 "c.y"
	{}
break;
case 46:
#line 109 "c.y"
	{ yyval.decl = yystack.l_mark[0].decl; }
break;
case 47:
#line 110 "c.y"
	{ yyval.decl = yystack.l_mark[-2].decl; }
break;
case 48:
#line 113 "c.y"
	{ yyval.decl = symbol(yystack.l_mark[-1].str, join(yystack.l_mark[0].type, yystack.l_mark[-2].type)); }
break;
case 49:
#line 116 "c.y"
	{ yyval.type = type(NULL, 1, identtype); }
break;
case 50:
#line 117 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, POINTER); }
break;
case 51:
#line 118 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, 1, ADDRESS); }
break;
case 52:
#line 121 "c.y"
	{}
break;
case 53:
#line 122 "c.y"
	{ yyval.type = type(yystack.l_mark[0].type, yystack.l_mark[-2].num, ARRAY); }
break;
case 54:
#line 125 "c.y"
	{ yyval.num = atoi(yylval.str); }
break;
case 55:
#line 128 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 56:
#line 129 "c.y"
	{ binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, yystack.l_mark[-1].num); }
break;
case 57:
#line 132 "c.y"
	{ yyval.num = '='; }
break;
case 58:
#line 133 "c.y"
	{ yyval.num = NEQ; }
break;
case 59:
#line 134 "c.y"
	{ yyval.num = ADDEQ; }
break;
case 60:
#line 135 "c.y"
	{ yyval.num = SUBEQ; }
break;
case 61:
#line 136 "c.y"
	{ yyval.num = MULEQ; }
break;
case 62:
#line 137 "c.y"
	{ yyval.num = DIVEQ; }
break;
case 63:
#line 138 "c.y"
	{ yyval.num = MODEQ; }
break;
case 64:
#line 139 "c.y"
	{ yyval.num = LSHIFTEQ; }
break;
case 65:
#line 140 "c.y"
	{ yyval.num = RSHIFTEQ; }
break;
case 66:
#line 141 "c.y"
	{ yyval.num = ANDEQ; }
break;
case 67:
#line 142 "c.y"
	{ yyval.num = XOREQ; }
break;
case 68:
#line 143 "c.y"
	{ yyval.num = OREQ; }
break;
case 69:
#line 146 "c.y"
	{}
break;
case 70:
#line 148 "c.y"
	{ func(yystack.l_mark[-10].decl, yystack.l_mark[-6].decl, yystack.l_mark[-9].rtl); }
break;
case 71:
#line 150 "c.y"
	{ calledfunc = yystack.l_mark[0].decl; parameter = 1; yyval.rtl = empty(); }
break;
case 72:
#line 151 "c.y"
	{ parameter = 0; }
break;
case 73:
#line 152 "c.y"
	{ currfunc = calledfunc; }
break;
case 74:
#line 153 "c.y"
	{ increase_scope(); }
break;
case 75:
#line 154 "c.y"
	{ decrease_scope(); }
break;
case 76:
#line 157 "c.y"
	{ parameter = 0; }
break;
case 77:
#line 158 "c.y"
	{}
break;
case 78:
#line 159 "c.y"
	{}
break;
case 79:
#line 163 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-3].rtl->falselist; }
break;
case 80:
#line 170 "c.y"
	{ make_jumps(yystack.l_mark[-4].rtl);
                 backpatch(yystack.l_mark[-4].rtl->truelist, yystack.l_mark[-2].rtl);
                 backpatch(yystack.l_mark[0].jump, yystack.l_mark[-5].rtl);
                 yyval.rtl = makelist();
                 yyval.rtl->falselist = yystack.l_mark[-4].rtl->falselist; }
break;
case 81:
#line 179 "c.y"
	{  make_jumps(yystack.l_mark[-8].rtl);
                  backpatch(yystack.l_mark[-8].rtl->truelist, yystack.l_mark[-2].rtl);
                  backpatch(yystack.l_mark[-4].jump, yystack.l_mark[-9].rtl);
                  backpatch(yystack.l_mark[0].jump, yystack.l_mark[-6].rtl);
                  yyval.rtl = makelist();
                  yyval.rtl->falselist = yystack.l_mark[-8].rtl->falselist; }
break;
case 82:
#line 187 "c.y"
	{}
break;
case 83:
#line 188 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 84:
#line 191 "c.y"
	{ yyval.jump = jump(); }
break;
case 85:
#line 194 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 86:
#line 197 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 87:
#line 199 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[-1].rtl); 
                 yyval.rtl->truelist = merge(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[0].rtl->truelist);
                 yyval.rtl->falselist = yystack.l_mark[0].rtl->falselist; }
break;
case 88:
#line 206 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 89:
#line 208 "c.y"
	{ make_jumps(yystack.l_mark[-3].rtl);
                 make_jumps(yystack.l_mark[0].rtl);
                 backpatch(yystack.l_mark[-3].rtl->truelist, yystack.l_mark[-1].rtl);
                 yyval.rtl->falselist = merge(yystack.l_mark[-3].rtl->falselist, yystack.l_mark[0].rtl->falselist);
                 yyval.rtl->truelist = yystack.l_mark[0].rtl->truelist; }
break;
case 90:
#line 215 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 91:
#line 217 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '+'); }
break;
case 92:
#line 219 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '-'); }
break;
case 93:
#line 222 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 94:
#line 224 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '*'); }
break;
case 95:
#line 226 "c.y"
	{ yyval.rtl = binst(yystack.l_mark[-2].rtl, yystack.l_mark[0].rtl, '/'); }
break;
case 96:
#line 229 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl; }
break;
case 97:
#line 230 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, INCR); }
break;
case 98:
#line 231 "c.y"
	{ yyval.rtl = postfix(yystack.l_mark[-1].rtl, DECR); }
break;
case 99:
#line 234 "c.y"
	{ }
break;
case 100:
#line 235 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), INCR); }
break;
case 101:
#line 236 "c.y"
	{ binst(yystack.l_mark[0].rtl, makeimmediate(1), DECR); }
break;
case 102:
#line 239 "c.y"
	{ yyval.rtl = arrayref(NULL, NULL); }
break;
case 103:
#line 240 "c.y"
	{ yyval.rtl = arrayref(yystack.l_mark[-4].str, yystack.l_mark[-1].rtl); }
break;
case 104:
#line 243 "c.y"
	{ yyval.rtl = terminal(TRUE, NULL); }
break;
case 105:
#line 244 "c.y"
	{ yyval.rtl = terminal(FALSE, NULL); }
break;
case 106:
#line 245 "c.y"
	{ yyval.rtl = yystack.l_mark[0].rtl ? binst(terminal(IDENTIFIER,yystack.l_mark[-1].str), yystack.l_mark[0].rtl, '+')
                                   : terminal(IDENTIFIER, yystack.l_mark[-1].str); }
break;
case 107:
#line 247 "c.y"
	{ yyval.rtl = terminal(NUMBER, yystack.l_mark[0].str); }
break;
case 108:
#line 250 "c.y"
	{ yyval.rtl = gtlabel(); }
break;
#line 1150 "y.tab.c"
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
