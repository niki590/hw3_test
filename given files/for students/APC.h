#ifndef _APC_h
#define _APC_h
#include "Soldier.h"
#include "defs.h"
#include "soldier.h"

typedef struct APC_t* PAPC;
PAPC  APC_Create(char* ID);
void  APC_Delete(PAPC apcname);
Result APC_Print(PAPC apcname);
PAPC APC_Duplicate(PAPC apcname);
Result APC_Insert_Soldier(PAPC apcname, PSOLDIER solname);
PSOLDIER APC_Pop(PAPC apcname);



#endif
