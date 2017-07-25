%{
#include "scan.h"
#include "sem_rec.h"
%}

%union {
   char *str;
   int num;
   struct list *rtl;
   struct type *type;
   struct symbol *decl;
   struct jumplist *jump;
};

%token AUTO BREAK CASE CONST CONTINUE DEFAULT DO REGISTER
       RETURN SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION
       VOID VOLATILE WHILE ELSE ENUM EXTERN FOR
       GOTO IF MULEQ DIVEQ MODEQ ADDEQ SUBEQ LSHIFTEQ RSHIFTEQ
       ANDEQ XOREQ OREQ LSHIFT RSHIFT INCR DECR GTEQ LTEQ EQ NEQ
       LAND LOR TRUE FALSE NUMBER IDENTIFIER NOT INT FLOAT
       CHAR SHORT LONG DOUBLE UNSIGNED TYPEDEF ENUMERATOR

%type <rtl> statement lbl logical_or logical_and terminal expression
            multiplicative_expression additive_expression if_statement
            postfix_expression prefix_expression statements assignment
            while_statement for_statement opt_expression function E
            arrayref
%type <decl> declaration vars var param_list
%type <type> arrays addresses storage_specifier enumerator typedefname
%type <num> num type_specifier assign_oper
%type <jump> jump
%type <str> IDENTIFIER NUMBER

%%

start:
   { print_rtls(); } |
   global_declaration start {};

global_declaration:
   function {} |
   declaration ';' {};

statements:
   {} |
   '{' P statements '}' Q {} |
   statement statements {};

statement:
   return ';' {} |
   declaration ';' {} |
   assignment ';' {} |
   call ';' {} |
   if_statement lbl    { backpatch($1->falselist, $2); } |
   while_statement lbl { backpatch($1->falselist, $2); } |
   for_statement lbl   { backpatch($1->falselist, $2); };

return:
   RETURN opt_expression { ret($2); } |

call_list:
   {} |
   var { param($1); } |
   call_list ',' var { param($3); };

call:
   IDENTIFIER '(' call_list ')' { call($1); };

declaration:
   type_specifier vars { $$ = $2; };

storage_specifier:
   AUTO {} |
   REGISTER {} |
   STATIC {} |
   EXTERN {} |
   TYPEDEF {};

type_specifier:
   VOID {} |
   CHAR {} |
   SHORT{} |
   INT   { identtype = INT;   identwidth = 4; } |
   LONG {} |
   FLOAT { identtype = FLOAT; identwidth = 8; } |
   DOUBLE {} |
   SIGNED {} |
   UNSIGNED {} |
   compoundtype {} |
   enumerator {} |
   typedefname {};

compoundtype:
   struct_or_union IDENTIFIER '{' '}' {} |
   struct_or_union '{' '}' {} |
   struct_or_union IDENTIFIER {};

struct_or_union:
   STRUCT {} |
   UNION {};

enumerator:
   ENUMERATOR {};

typedefname:
   TYPEDEF {};

vars:
   var { $$ = $1; } |
   var ',' vars { $$ = $1; };

var:
   addresses IDENTIFIER arrays { $$ = symbol($2, join($3, $1)); };

addresses:
   { $$ = type(NULL, 1, identtype); } |
   '*' addresses { $$ = type($2, 1, POINTER); } |
   '&' addresses { $$ = type($2, 1, ADDRESS); };

arrays:
   {} |
   '[' num ']' arrays { $$ = type($4, $2, ARRAY); };

num:
   NUMBER { $$ = atoi(yylval.str); };

assignment:
   expression { $$ = $1; } |
   postfix_expression assign_oper assignment { binst($1, $3, $2); };

assign_oper:
   '='      { $$ = '='; } |
   NEQ      { $$ = NEQ; } |
   ADDEQ    { $$ = ADDEQ; } |
   SUBEQ    { $$ = SUBEQ; } |
   MULEQ    { $$ = MULEQ; } |
   DIVEQ    { $$ = DIVEQ; } |
   MODEQ    { $$ = MODEQ; } |
   LSHIFTEQ { $$ = LSHIFTEQ; } |
   RSHIFTEQ { $$ = RSHIFTEQ; } |
   ANDEQ    { $$ = ANDEQ; } |
   XOREQ    { $$ = XOREQ; } |
   OREQ     { $$ = OREQ; };

function:
   declaration E '(' P param_list ')' F ';' { add_parameters($1); } |
   declaration E '(' P param_list ')' F G '{' statements '}'
            { func($1, $5, $2); };

E: { f1 = $<decl>0; parameter = 1; $$ = empty(); };
F: { parameter = 0; };
G: { currfunc = f1; };
P: { increase_scope(); };
Q: { decrease_scope(); };

param_list:
   { parameter = 0; } |
   type_specifier var ',' param_list {} |
   type_specifier var {};

if_statement:
   IF '(' expression ')' lbl statement
               { make_jumps($3);
                 backpatch($3->truelist, $5);
                 $$ = makelist();
                 $$->falselist = $3->falselist; };

while_statement:
   WHILE '(' lbl expression ')' lbl statement jump
               { make_jumps($4);
                 backpatch($4->truelist, $6);
                 backpatch($8, $3);
                 $$ = makelist();
                 $$->falselist = $4->falselist; };

for_statement:
   FOR '(' opt_expression ';' lbl opt_expression ';' lbl
           opt_expression jump ')' lbl statement jump
               {  make_jumps($6);
                  backpatch($6->truelist, $12);
                  backpatch($10, $5);
                  backpatch($14, $8);
                  $$ = makelist();
                  $$->falselist = $6->falselist; };

opt_expression:
   {} |
   assignment { $$ = $1; };

jump:
   { $$ = jump(); };

expression:
   logical_or { $$ = $1; };

logical_or:
   logical_and { $$ = $1; } |
   logical_or LOR lbl logical_and
               { make_jumps($1);
                 make_jumps($4);
                 backpatch($1->falselist, $3); 
                 $$->truelist = merge($1->truelist, $4->truelist);
                 $$->falselist = $4->falselist; };

logical_and:
   additive_expression { $$ = $1; } |
   logical_and LAND lbl additive_expression
               { make_jumps($1);
                 make_jumps($4);
                 backpatch($1->truelist, $3);
                 $$->falselist = merge($1->falselist, $4->falselist);
                 $$->truelist = $4->truelist; };

additive_expression:
	multiplicative_expression { $$ = $1; } |
   additive_expression '+' multiplicative_expression
               { $$ = binst($1, $3, '+'); } |
   additive_expression '-' multiplicative_expression
               { $$ = binst($1, $3, '-'); };

multiplicative_expression:
   postfix_expression { $$ = $1; } |
   multiplicative_expression '*' postfix_expression
               { $$ = binst($1, $3, '*'); } |
   multiplicative_expression '/' postfix_expression
               { $$ = binst($1, $3, '/'); };

postfix_expression:
   prefix_expression      { $$ = $1; } |
   prefix_expression INCR { $$ = postfix($1, INCR); } |
   prefix_expression DECR { $$ = postfix($1, DECR); };

prefix_expression:
   terminal { } |
   INCR terminal { binst($2, makeimmediate(1), INCR); } |
   DECR terminal { binst($2, makeimmediate(1), DECR); };

arrayref:
   { $$ = arrayref(NULL, NULL); } |
   arrayref '[' expression ']' { $$ = arrayref($<str>0, $3); };

terminal:
   TRUE         { $$ = terminal(TRUE, NULL); } |
   FALSE        { $$ = terminal(FALSE, NULL); } |
   IDENTIFIER arrayref { $$ = $2 ? binst(terminal(IDENTIFIER,$1), $2, '+')
                                   : terminal(IDENTIFIER, $1); } |
   NUMBER     { $$ = terminal(NUMBER, $1); };

lbl:
   { $$ = gtlabel(); };

%%

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse %s\n", yylval.str);
}
