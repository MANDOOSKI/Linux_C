#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int release(List* list){

	if(NULL == list) return ERR_NULL_LIST;

	human* del = list->phead;
	while(del){
		human* temp = del->next;
		free(del);
		del = temp;
	}
	list->phead = NULL;
	list->count = 0;

	return 0;

}
