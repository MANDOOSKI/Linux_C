#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int release(i_llist* list){

	if(!list) return ERR_NULL_LIST;

	i_data* del = list->head;
	
	while(del){
		i_data* temp = del->next;
		free(del);
		del = temp;
	}
	list->head = NULL;
	list->tail = NULL;
	list->i_count = 0;

	return 0;

}
