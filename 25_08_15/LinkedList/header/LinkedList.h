#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define ERR_NULL_LIST 1000
#define ERR_INVALID_ID 1001
#define ERR_INVALID_NAME 1002
#define ERR_ALLOC 1003
#define ERR_LEN 1004

typedef struct human{
	int id;
	char* name;
	struct human* next;
}human;

typedef struct Linked_List{
	human* phead;
	int count;
}List;

int init_List(List* list);
int push_back(List* list, int id, const char* name);
int release(List* list);

#endif
