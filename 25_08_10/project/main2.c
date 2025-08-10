#include <stdio.h>
#include <string.h>

int main(){

	char str[20] = "abc";
	char str_c[20] = "bbcf";

	printf("%d\n", strcmp(str, str_c));

	return 0;

}
