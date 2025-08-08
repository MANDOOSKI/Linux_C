#include <stdio.h>
#define MAX 10000

int main(){

	int a;
	int *pa;

	a = 3;
	printf("a = %d\n", a);
	printf("a = %p\n", &a);

	pa = &a;
	printf("pa = %p\n", pa);
	printf("*pa = %d\n", *pa);
	printf("&pa = %p\n", &pa);


	return 0;

}
