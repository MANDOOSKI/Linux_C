#include <stdio.h>
#include "list.h"

int print_all(const i_llist* list){
	
	if(!list) return ERR_NULL_LIST;

	i_data* temp = list->head;

	while(temp){
		printf("====================\n");
		printf("num : %d\n", temp->num);
		printf("name : %s\n", temp->name);
		printf("====================\n");
		temp = temp->next;
	}

	return 0;

}
