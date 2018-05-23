#ifndef _Soldier_h
#define _Soldier_h

#include "defs.h"
typedef  Soldier* PSOLDIER;
PSOLDIER Soldier_Duplicate(PSOLDIER Soldier);
void Soldier_Print(PSOLDIER Soldier);
PSOLDIER Soldier_Create(char *id, char *pos);

#endif