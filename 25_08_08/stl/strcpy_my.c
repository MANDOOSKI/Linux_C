#include <stdio.h>

int length(const char* c){

	int i = 0;
	while(c[i] != '\0'){
		
		i++;
	
	}

	return i;	

}

void strcpy_my(char* dest, char* src){

	while(true){

		int i = 0;
		dest[i] = src[i];
		if(src[i] == '\0'){
			break;
		}
		++i;

	}

}

int main(){

        char dest[20] = "hello World";
        char src[20] = "Bye";

	int i = length(dest);
	printf("%d\n", i);

	printf("before : %s\n", dest);
	strcpy_my(dest, src);
	printf("after : %s\n", src);

        return 0;

}
