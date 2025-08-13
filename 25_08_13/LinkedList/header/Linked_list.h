typedef struct I_Node{
	int data;
	struct I_Node* prev;
	struct I_Node* next;
}I_node;

typedef struct I_Linked_List{
	I_node* fir;
	I_node* end;
	int i_count;
}I_l_list;

void init_List(I_l_list* il);
int i_push_back(I_l_list* il, int data);
int i_release(I_l_list* il);
