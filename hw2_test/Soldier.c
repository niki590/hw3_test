#include "Soldier.h"

typedef struct Soldier_t {
	char POS[MAX_ID_LENGTH];
	char ID[MAX_ID_LENGTH];
}Soldier;

PSOLDIER Soldier_Create(char *id, char *pos)
{
	if (id == NULL)
	{
		printf(ARG_ERR_MSG);
		return NULL;
	}
	PSOLDIER new = (PSOLDIER)malloc(sizeof(Soldier));
	if (new == NULL)
	{
		printf(MALLOC_ERR_MSG);
		return NULL;
	}
	new->POS = malloc(strlen(pos)+1);
	new->ID = malloc(strlen(id) + 1);
	if ((new->POS == NULL) || (new->ID == NULL))
	{
		printf(MALLOC_ERR_MSG);
		return NULL;
	}
	strcpy(new->POS, pos);
	strcpy(new->ID, id);
	return new;
}
void Soldier_Delete(PSOLDIER sold)
{
	if (sold == NULL)
	{
		printf(ARG_ERR_MSG);
		return;
	}
	free(sold->ID);
	free(sold->POS);
	free(sold);
	return;
}
void Soldier_Print(PSOLDIER sold)
{
	if (sold == NULL)
	{
		printf(ARG_ERR_MSG);
		return;
	}
	printf()
}
PSOLDIER Soldier_Duplicate(PSOLDIER Soldier) {
	if (Soldier == NULL) {
		printf(ARG_ERR_MSG);
		return NULL;
	}
	PSOLDIER New_Soldier = Soldier_Create(Soldier->Pos, Soldier->ID);
	if (New_Soldier == NULL) {
		printf(MALLOC_ERR_MSG);
		return NULL;
	}
	return New_Soldier;
}


void Soldier_Print(PSOLDIER Soldier)
{
	if (Soldier == NULL) {
		printf(ARG_ERR_MSG);
		return ;
	}
	printf("%s , %s\n", Soldier->ID, Soldier->Pos);
}


