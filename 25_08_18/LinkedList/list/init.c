#include <stdio.h>
#include "list.h"

int init(i_llist* list){

	if(!list) return ERR_NULL_LIST;

	list->head = NULL;
	list->tail = NULL;
	list->i_count = 0;

	return 0;
}
