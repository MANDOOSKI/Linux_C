// 사용자로 부터 N 값을 입력 받고 1부터 N 까지의 곱을 출력하라.

#include<stdio.h>

int main(){

	int n = 0;
	int mul = 1;

	printf("N을 입력 : ");
	scanf("%d", &n);

	for(int i = 1; i <= n; ++i){
		mul *= i;
	}

	printf("N까지의 곱 : %d\n", mul);

	return 0;

}

