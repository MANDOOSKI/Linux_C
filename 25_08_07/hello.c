#include <stdio.h>

int main(){

        char str[100] = "hello world\n";
        char* pstr = str;

        while(*pstr){

                putchar(*pstr++);
		
        }

        return 0;

}
