#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "rtls.h"
#include "symboltable.h"
#include "scan.h"
#include "asm.h"
#include "y.tab.h"

int regs[NUMREGS];
int stacktop;
struct op opers[] = { {'+', "add"}, {'-', "sub"}, {'*', "mul"}, {'/', "div"}, {'=', "mov" } };

int initregs()
{
   int i;
   for (i = 0; i < 2; i++)
      regs[i] = TAKEN;
}

int gtrg(int scratch)
{
   int i;
   for (i = 0; i < NUMREGS; i++)
      if (regs[i] != TAKEN) {
         regs[i] = TAKEN;
         return i;
      }

   printf("run out of available registers\n");
   exit(1);
}

void releasereg(int rgnum)
{
   regs[rgnum] = FREE;
}

int get_stack_offset(struct symbol *entry)
{
   int i;
   for (i = 0; i < stacktop; i++)
      if (!strcmp(entry->id, stack[i].symbol))
         return stack[i].offset;

   printf("entry not found: %s\n", entry->id);
   exit(1);
}

char *optostr(int op)
{
   int i;
   for (i = 0; i < NUMOPS; i++)
      if (opers[i].val == op)
         return opers[i].str;

   printf("operator %c not found\n", op);
   exit(1);
}

int load(struct symbol *ent)
{
   int ret = gtrg(0);
   if (ent->storage == LOCAL)
      printf("lw $%d, %d($%d)\n", ret, get_stack_offset(ent), SPREG);
   else if (ent->storage == IMMEDIATE)
      printf("li $%d, %s\n", ret, ent->id);
   return ret;
}

void store(struct symbol *dst, int r1)
{
   printf("sw $%d, %d($%d)\n", r1, get_stack_offset(dst), SPREG);
   releasereg(r1);
}

int binaryop(int r1, int r2, int op)
{
   int ret = gtrg(0);
   printf("%s $%d, $%d, $%d\n", optostr(op), ret, r1, r2);
   releasereg(r1);
   releasereg(r2);
   return ret;
}

void fixentry()
{
   struct list *ptr;
   int stacksize = 0;

   for (ptr = rtls; ptr; ptr = ptr->next)
      if (ptr->type == SYMBOL || ptr->type == TEMPORARY) {
         stack[stacktop].symbol = ptr->dst->id;
         stack[stacktop++].offset = stacksize;
         stacksize += ptr->dst->type->width;
      }
}

void assign_registers()
{
   struct list *ptr;
   for (ptr = rtls; ptr; ptr = ptr->next);
}

void print_num(int reg)
{
   printf("addi $a0, $%d, 0\n", reg);
   printf("li $v0, 1\n");
   printf("syscall\n");
   printf("li $a0, 10\n");
   printf("li $v0, 11\n");
   printf("syscall\n");
}

void print_asm()
{
   struct list *ptr;
   int r1, r2, r3;

   initregs();
   fixentry();

   for (ptr = rtls; ptr; ptr = ptr->next) {
      if (ptr->type == LABEL)
         printf("%s:\n", ptr->sptr->label);
      else if (ptr->type == BINST) {
         r1 = load(ptr->sptr->lhs->dst);
         r2 = load(ptr->sptr->rhs->dst);
         r3 = binaryop(r1, r2, ptr->sptr->op);
         store(ptr->dst, r3);
      }
      else if (ptr->type == COPY) {
         r1 = load(ptr->sptr->rhs->dst);
         store(ptr->dst, r1);
      }
      else if (ptr->type == RETURN) {
         r1 = RETREG;
         r2 = load(ptr->dst);
         printf("addi $%d, $%d, 0\n", r1, r2);
         print_num(RETREG);
         printf("jr $ra\n");
      }
      else if (ptr->type == ENTERFUNC) {
         printf(".globl %s\n", ptr->sptr->label);
         printf("%s:\n", ptr->sptr->label);
      }
      else if (ptr->type == EXITFUNC) {
         printf("# %s\n", ptr->sptr->label);
      }
      else if (ptr->type == JUMP && ptr->sptr->test) {
         r1 = load(ptr->sptr->test->dst);
         printf("bne $%d,$0,%s\n", r1, ptr->sptr->target->sptr->label);
      }
      else if (ptr->type == JUMP) {
         printf("j %s\n", ptr->sptr->target->sptr->label);
      }
      /*
      else if (ptr->type == JUMP) {
         if (ptr->sptr->test)
            printf("if %s goto %s\n", ptr->sptr->test->dst->id,
                                      ptr->sptr->target->sptr->label);
         else
            printf("goto %s\n", ptr->sptr->target->sptr->label);
      }
      else if (ptr->type == COPY)
         printf("%s = %s;\n", ptr->sptr->lhs->dst->id,
                              ptr->sptr->rhs->dst->id);
      else if (ptr->type == FUNC || ptr->type == ASM || ptr->type == CALL)
         printf("%s\n", ptr->sptr->label);
      else if (ptr->type == PARAM)
         printf("param(%s)\n", ptr->dst->id);
      else if (ptr->type == CVT)
         printf("%s = CVT(%s, %s);\n", ptr->dst->id,
                                       ptr->sptr->src->id,
                                       toktostr(ptr->sptr->oper));
      else if (ptr->type == RETURN)
         printf("return(%s)\n", ptr->dst ? ptr->dst->id : "");
      else if (ptr->type == LOAD)
         printf("%s = *%s\n", ptr->sptr->lhs->dst->id,
                              ptr->sptr->rhs->dst->id);
      else if (ptr->type == UNARY)
         printf("%s = %c%s\n", ptr->dst->id, ptr->sptr->oper,
                               ptr->sptr->src->id);

      */
   }
}
