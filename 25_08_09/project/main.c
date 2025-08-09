#include "header.h"

int main(){

	char dest[30] = "Hi My name is KangHyeon";
	char src[30] = "Nice Meet you";

	printf("원본 : %s\n", dest);
	printf("소스 : %s\n", src);

	int i = 0;
	printf("무엇을 하시겠습니까? strcpy(1), strcmp(2), strlen(3)\n");
	scanf("%d", &i);

	switch(i){
		case 1:
			strcpy_my(dest, src, sizeof(dest));
			printf("결과물 : %s\n", dest);
			break;
		case 2:
			printf("값 : %d\n", strcmp_my(dest, src));
			break;
		case 3:
			break;
		default:
			break;
	}


	return 0;

}
