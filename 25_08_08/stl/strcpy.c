#include <stdio.h>
#include <string.h>

int main(){

	char dest[20] = "hello World";
	char src[20] = "Bye";

	printf("strcpy before : %s\n", dest);
	strcpy(dest, src);
	printf("strcpy after : %s\n", dest);

	return 0;

}
