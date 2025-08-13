#include <stdio.h>
#include <stdlib.h>
#include "Linked_list.h"

int i_release(I_l_list* il){

	if(!il){
		printf("error : Linked List Null\n");
		return 4003;
	}

	I_node* cur = il->end;
	I_node* prev;

	while(cur){
		prev = cur->prev;
		free(cur);
		cur = prev;
	}

	il->fir = NULL;
	il->end = NULL;
	il->i_count = 0;

	return 0;

}
