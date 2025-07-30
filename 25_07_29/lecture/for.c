#include <stdio.h>

int zero(){
	printf("call zero\n");
	return 1;
}

int main(){

	int a = 1;

	for(zero(); 0; ){
		printf("a : %d\n", a);
	}

	return 0;

}
