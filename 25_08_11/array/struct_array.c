#include <stdio.h>
#include <string.h>
#define MAX 200

int g_h_total = 0;

typedef struct human{
	int num;
	char name[20];
}human;

void add_h(human* h){
	h[g_h_total].num = g_h_total + 1;
	strcpy(h[g_h_total++].name, "test");
}

void print_all(const human* h){
	int i = 0;
	while((h + i)){
		printf("[%d] : %d, %s\n", i, (h + i)->num, (h + i)->name);
		++i;
		if(i >= MAX) break;
	}
}

int main(){

	human h_num[MAX];

	for(int i = 0; i < MAX; ++i){
		add_h(h_num);
	}

	print_all(h_num);

	return 0;

}
