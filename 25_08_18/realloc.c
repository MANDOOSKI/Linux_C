#include <stdio.h>
#include <stdlib.h>

int main(){

	int* test;

	test = (int*)malloc(sizeof(int));


	test[0] = 5;

	printf("[0]%d\n", test[0]);
	printf("[0]의 주소 : %p\n", &test[0]);

	test = (int*)realloc(test, sizeof(int)*2);

	test[1] = 10;
	printf("[0]%d\n", test[0]);
	printf("[1]%d\n", test[1]);

	printf("[0]의 주소 : %p\n", &test[0]);
	printf("[1]의 주소 : %p\n", &test[1]);


	return 0;

}
