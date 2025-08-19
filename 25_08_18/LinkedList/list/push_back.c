#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

int push_back(i_llist* list, int data, const char* name){

	if(!list) return ERR_NULL_LIST;
	if(0 == data) return ERR_INVALID_INT;
	if(!name || *name == '\0') return ERR_INVALID_NAME;

	i_data* node = (i_data*)malloc(sizeof(i_data));
	if(!node) return ERR_ALLOC;

	size_t cap = sizeof(node->name);
	size_t len = strlen(name);
	if(cap <= len){
		free(node);       
		return ERR_LEN;
	}

	node->num = data;
	memcpy(node->name, name, len + 1);
	node->name[len] = '\0';
	node->next = NULL;

	if(!list->head){
		list->head = node;
		list->tail = node;
	} else {
		list->tail->next = node;
		list->tail = node;
	}
	list->i_count++;

	return 0;

}
