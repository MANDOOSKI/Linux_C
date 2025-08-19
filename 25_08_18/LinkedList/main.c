#include <stdio.h>
#include "list.h"

int main(){

	i_llist myList;
	
	init(&myList);

	for(int i = 0; i < 10; ++i){
		int num = i + 1;
		char name[20] = {0};
		
		printf("이름을 입력해 주세요 : ___\b\b\b");
		if(scanf("%19s", name) != 1){
			fprintf(stderr, "입력오류\n");
			return 1;
		}


		push_back(&myList, num, name);
	}

	print_all(&myList);

	release(&myList);

	return 0;

}
