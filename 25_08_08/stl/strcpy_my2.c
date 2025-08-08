#include <stdio.h>

int length(const char* c){

        int i = 0;
        while(c[i] != '\0'){

                i++;

        }

        return i;

}

void strcpy_my(char* dest, char* src, size_t cap){

	// dest의 크기가 잘못되있거나 src의 길이 > dest 용량일 경우 오류
	if(0 >= cap || cap <= length(src)){
		printf("error\n");
		return;
	}

	int i = 0;
        while(1){

                dest[i] = src[i];
                if(src[i] == '\0'){
                        break;
                }
                ++i;

        }

}

int main(){

        char dest[20] = "hello World";
        char src[30] = "ByeByeByeByeByeByeBye";

        int i = length(dest);
        printf("%d\n", i);

        printf("before : %s\n", dest);
        strcpy_my(dest, src, sizeof(dest));
        printf("after : %s\n", dest);

        return 0;

}
