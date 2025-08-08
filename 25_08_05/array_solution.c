#include <stdio.h>

int swap(int *pa);
int main(){

	int a[10] = {0};

	printf("a[3] = %d\n", a[3]);
	swap(a);
	printf("a[3] = %d\n", a[3]);

	return 0;

}
int swap(int *pa){

	*(pa + 3) = 99;

	return 1;

}
