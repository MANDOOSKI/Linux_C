#include <stdio.h>

void print_bit(unsigned char value){
	
	unsigned char printVal = 0;

	for(int i = 7; i >= 0; --i){
		printVal = value & (1<<i);
		printf("%d ", printVal >>= i);
	}
}

int main(){

	unsigned char a = 0b00010101;

	print_bit(a);
	puts("");

	return 0;
	
}
