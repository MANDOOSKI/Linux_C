// 0011 0010에서 0000 0100 부분을 1으로 바꾸는 코드를 작성하여라.
// 더하기 연산이 아니라 bit연산을 통해 작성하여라.

#include <stdio.h>

void print_bit(unsigned char value){

	for(int i = 7; i >= 0; --i){
		printf("%d ", (value >> i) & 1);
	}

}

int main(){

	unsigned char origin_bit = 0b00110010;
	unsigned char change_bit = 0b00000100;
	// unsigned를 사용한 이유는 음수를 쓸것이 아니며, 쉬프트시 복잡해 질수 있음.
	
	printf("원본 : ");
	print_bit(origin_bit);
	puts("");

	printf("추가하고 싶은 부분 : ");
	print_bit(change_bit);
	puts("");

	origin_bit |= change_bit;

	printf("결과 : ");
	print_bit(origin_bit);
	puts("");

	return 0;

}
