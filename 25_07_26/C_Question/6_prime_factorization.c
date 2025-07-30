// 임의의 자연수 N을 입력 받아 N을 소인수 분해 한 결과를 출력하여라.
// 예를 들어서 N = 18 일 경우
// N = 18 = 2 * 3 * 3

#include <stdio.h>

int main(){

	int n = 0;
	printf("N을 입력해 주세요 : ");
	scanf("%d", &n);

	printf("%d = ", n);

	for(int i = 2; i <= n; ++i){
		if(n % i == 0){
			printf("%d", i);
			n /= i;

			if(n % i == 0){
				printf(" * ");
			}
			else{
				if(n > i){
					printf(" * ");
				}
			}
		}
	}
	
	printf("\n");

	return 0;

}
