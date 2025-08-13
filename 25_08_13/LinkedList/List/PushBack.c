#include <stdio.h>
#include <stdlib.h>
#include "Linked_list.h"

int i_push_back(I_l_list* il, int data){
	
	// 노드를 생성
	I_node* new_Node = (I_node*)malloc(sizeof(I_node));
	
	// 노드 생성 실패
	if(new_Node == NULL){
		printf("error : Memory allocation failed.\n");
		return 4002;
	}

	// 새로운 노드 초기화
	new_Node->data = data;
	new_Node->prev = NULL;
	new_Node->next = NULL;

	// 새로운 연결형 리스트일 경우
	if(il->fir == NULL){
		il->fir = new_Node;
		il->end = new_Node;
	}
	// 그렇지 않으면
	else{
		il->end->next = new_Node;
		new_Node->prev = il->end;
		il->end = new_Node;
	}
	++il->i_count;

}
