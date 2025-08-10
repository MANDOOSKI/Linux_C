#include <stdio.h>

size_t length(const char* c){

	// null일경우 error
	if(!c){
		printf("error : null(1)");
		return 1;
	}

        size_t i = 0;
        while(c[i] != '\0'){
                ++i;
        }

        return i;

}

int strcpy_my(char* dest, const char* src, size_t cap){

        // null인 경우 error
	if(!dest || !src){
		printf("error : null(1)\n");
		return 1;
	}
	
	// 용량문제, 용량이 부족(dest < src길이)거나 용량설정이 잘못되있거나
        size_t len = length(src);
        if(0 == cap || cap < len + 1){
                printf("error: capacity(2)\n");
                return 2;
        }

        while(*src){
                *dest++ = *src++;
        }
        *dest = '\0';

	return 0;

}

int main(){

        char dest[20] = "hello World";
        char src[20] = "ByeBye";

        size_t i = length(dest);
        printf("dest length : %zu\n", i);

        printf("before : %s\n", dest);
        strcpy_my(dest, src, sizeof(dest));
        printf("after : %s\n", dest);

        return 0;

}
