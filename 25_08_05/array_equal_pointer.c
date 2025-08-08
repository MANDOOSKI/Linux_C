#include <stdio.h>

int main(){

	int array[5];
	array[3] = 0x55;
	printf("array[3] = %d\n", array[3]);
	printf("*(array + 3) = %d\n", *(array + 3));

	return 0;

}
