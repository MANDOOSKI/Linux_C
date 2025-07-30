#include <stdio.h>

int sum(int a, int b){

	int c = 0;
	c = a + b;

	return c;

}

int main(){

	int a = 3, b = 4;

	printf("a + b = %d\n", sum(a, b));

	return 0;

}
