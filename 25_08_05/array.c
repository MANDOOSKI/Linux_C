#include<stdio.h>

int main(){

	int a;
	int* pa;

	int array[1];

	pa = &a;
	*pa = 0x77;

	array[0] = 0x55;


	return 0;

}
