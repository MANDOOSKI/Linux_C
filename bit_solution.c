// 문제 1. 0011 0010 에서 0000 0010 부분을 0으로 바꾸는 코드를 작성하여라.
// 16진수 말고 2진수로 구현하여라.

#include <stdio.h>

void print_bit(unsigned char value){

	for(int i = 7; i >= 0; --i){
		printf("%d ", (value >> i) & 1);
	}

}

int main(){

	unsigned char origin_bit = 0b00110010;
	unsigned char change_bit = ~(0b00000010);

	printf("초기 값 : ");
	print_bit(origin_bit);
	puts("");

	printf("교체하고 싶은 값 : ");
	print_bit(~change_bit);
	puts("");

	origin_bit &= change_bit;

	printf("결과 : ");
	print_bit(origin_bit);
	puts("");

	return 0;

}
