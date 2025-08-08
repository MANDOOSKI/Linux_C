#include <stdio.h>

int main(){

	int array[5];

	array[3] = 0x55;
	*(array + 3) = 0x77;

	return 0;

}
