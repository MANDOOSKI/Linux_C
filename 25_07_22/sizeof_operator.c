// sizeof 연산자
#include <stdio.h>

int main(){

	int a = 0;
	unsigned int b = 0;
	char c = 0;
	unsigned char d = 0;
	float e = 0;
	//unsigned float f = 0;
	double g = 0;
	//unsigned double h = 0;
	
	// float과 double은 unsigned가 없다.

	printf("int : %zu byte\n", sizeof(a));
	printf("unsigned int : %zu byte\n", sizeof(b));
	printf("char : %zu byte\n", sizeof(c));
	printf("unsigned char : %zu byte\n", sizeof(d));
	printf("float : %zu byte\n", sizeof(e));
//	printf("unsigned float : %zu byte\n", sizeof(f));
	printf("double : %zu byte\n", sizeof(g));
//	printf("unsigned double : %zu byte\n", sizeof(h));

	return 0;

}
