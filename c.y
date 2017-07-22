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
       LAND LOR TRUE FALSE NUMBER IDENTIFIER NOT INT_ FLOAT_

%type <rtl> statement lbl logical_or logical_and terminal expression
            multiplicative_expression additive_expression if_statement
            postfix_expression prefix_expression statements assignment
            while_statement for_statement opt_expression function
%type <decl> declaration vars var opt_declaration
%type <type> arrays
%type <num> num M type assign_oper
%type <jump> jump

%%

start:
   statements { print_rtls(); };

statements:
   {} |
   '{' statements '}' {} |
   statement statements {};

statement:
   declaration ';' {} |
   assignment ';' {} |
   function { } |
   if_statement lbl    { backpatch($1->falselist, $2); } |
   while_statement lbl { backpatch($1->falselist, $2); } |
   for_statement lbl   { backpatch($1->falselist, $2); };

declaration:
   type vars {};

type:
   INT_   { identtype = INT;   identwidth = 4; } |
   FLOAT_ { identtype = FLOAT; identwidth = 8; };

vars:
   var {} |
   var ',' vars {};

var:
   IDENTIFIER M arrays { $$ = symbol($3); };

M:
   { strcpy(ident, yylval.str); };

arrays:
   {} |
   '[' num ']' arrays { $$ = type($4, $2); };

num:
   NUMBER { $$ = atoi(yylval.str); };

assignment:
   expression {} |
   postfix_expression assign_oper assignment { assign($1, $3, $2); };

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
   declaration '(' opt_declaration ')' '{' statements '}' { func($1, $3); };

opt_declaration:
   {} |
   declaration { $$ = $1; };

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
   FOR '(' opt_expression ';' lbl opt_expression ';' lbl opt_expression jump ')' lbl statement jump
               {  make_jumps($6);
                  backpatch($6->truelist, $12);
                  backpatch($10, $5);
                  backpatch($14, $8);
                  $$ = makelist();
                  $$->falselist = $6->falselist; };

opt_expression:
   {} |
   expression { $$ = $1; };

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
   terminal      { $$ = $1; } |
   INCR terminal {} |
   DECR terminal {};

terminal:
   TRUE       { $$ = terminal(); } |
   FALSE      { $$ = terminal(); } |
   IDENTIFIER { $$ = terminal(); };

lbl:
   { $$ = gtlabel(); };

%%

int main() {
   yyparse();
}

int yyerror(const char *d) {
   fprintf(stderr, "failed to parse\n");
}
