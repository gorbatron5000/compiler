#include "stdlib.h"

struct entry {
   int op;
};

struct list {
   void *lhs, *rhs;
   struct list *next;
};

void newlist(void *lhs, struct list *rhs, int op)
{
   struct list *new = malloc(sizeof(struct list));

   if (op)
      new->lhs = lhs;
   else
      new->lhs = rhs;
}

int main()
{
   newlist(NULL,(struct list *){ NULL, NULL, NULL },1);
}
