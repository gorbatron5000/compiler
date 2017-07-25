#ifndef COMPOUNDTYPES_H
#define COMPOUNDTYPES_H

#include "scan.h"

extern struct symbol **udttable;
extern int udtmax, udts;

struct symbol *add_udt(struct symbol*);

#endif
