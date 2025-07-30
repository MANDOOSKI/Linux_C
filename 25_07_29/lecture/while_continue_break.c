#include <stdio.h>

int main(){

	int a = 1;
	while(1){

		printf("종료 하려면 0을 입력해 주세요 : __\b\b");
		scanf("%d", &a);
		getchar();

		if(a == 0){
			printf("종료하겠습니다.\n");
			break;
		}
		else{
			printf("다시 돌아가세요\n");
			continue;
		}
	}

	return 0;

}
