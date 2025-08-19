#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LinkedList.h"

int push_back(List* list, int id, const char* name){

	if(NULL == list) return ERR_NULL_LIST;
	if(0 == id) return ERR_INVALID_ID;
	if(NULL == name || *name == '\0') return ERR_INVALID_NAME;

	size_t len = strlen(name);
	if(50 < len) return ERR_LEN;

	human* node = (human*)malloc(sizeof(human));
	if(!node) return ERR_ALLOC;

	node->name = (char*)malloc(len);
	if(!node->name){
		free(node);	// 이 구문까지 넘어오는 경우는 node는 이미 동적할당 되었기 때문
		return ERR_ALLOC;
	}

	node->id = id;
	memcpy(node->name, name, len);
	node->name[len] = '\0';
	node->next = NULL;

	// 맨 처음으로 만들어질때
	if(NULL == list->phead){
		list->phead = node;
	} else{
		human* temp = list->phead;
		while(temp->next){
			temp = temp->next;
		}
		temp->next = node;
	}
	list->count++;

	return 0;

}
