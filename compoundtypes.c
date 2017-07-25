#include "compoundtypes.h"
#include "string.h"

struct symbol **udttable;
int udtmax, udts;

struct symbol *add_udt(struct symbol *ent)
{
   struct symbol **tmp;

   if (!udttable)
      udttable = malloc(sizeof(struct symbol*) * (udtmax = 100));

   if (udts + 1 >= udtmax) {
      tmp = udttable;
      udttable = malloc(sizeof(struct symbol*) * (udtmax *= 2));
      memcpy(udttable, tmp, sizeof(struct symbol*) * udts);
   }
   
   return (udttable[udts++] = ent);
}
