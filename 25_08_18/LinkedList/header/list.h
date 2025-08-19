#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define ERR_NULL_LIST 1000
#define ERR_INVALID_INT 1001
#define ERR_INVALID_NAME 1002
#define ERR_ALLOC 1003
#define ERR_LEN 1004

typedef struct data{
	
	int num;
	char name[20];
	struct data* next;

}i_data;

typedef struct linkedlist{
	
	i_data* head;
	i_data* tail;
	int i_count;

}i_llist;

int init(i_llist* list);
int push_back(i_llist* list, int data, const char* name);
int print_all(const i_llist* list);
int release(i_llist* list);

#endif
