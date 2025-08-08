#include <stdio.h>

void swap(int* a, int* b);

int main(){

        char str[100] = "hello world\n";
	char* pstr = str;

	while(*pstr++){

		putchar(*pstr);

	}

        return 0;

}
