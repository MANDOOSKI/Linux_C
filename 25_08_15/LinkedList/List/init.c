#include <stdio.h>
#include "LinkedList.h"

int init_List(List* list){
	if(list == NULL){
		return ERR_NULL_LIST;
	}

	list->phead = NULL;
	list->count = 0;

	return 0;
}
