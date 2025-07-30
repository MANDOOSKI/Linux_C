#include <stdio.h>

int main(){

	for(int i = 1; i < 21; ++i){
		printf("[%02d단]\n", i);
		for(int j = 1; j < 21; ++j){
			printf("%02d * %02d = %02d\n", i, j, i * j);
		}
	}

	return 0;

}
