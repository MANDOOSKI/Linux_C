#include <stdio.h>

void test(){
	printf("func test\n");
}

int main(){

	void (*fp)();

	fp = test;
	fp();

	printf("test : %p, &test : %p, fp : %p\n",test, &test, fp);

	return 0;

}
