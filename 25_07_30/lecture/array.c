#include <stdio.h>

int main(){

	int arrayA[10];

	for(int i = 0; i < 10; ++i){
		arrayA[i] = i + 1;
	}

	for(int i = 0; i < 10; ++i){
		printf("array[%d] : %d\n", i, arrayA[i]);
	}

	return 0;

}
