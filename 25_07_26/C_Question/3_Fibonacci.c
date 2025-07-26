// 1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2번째
// 항으로 표현되는 수열 시작은 1,1,2,3,5,8,...)의 짝수 항들의 합을 구한다.

#include<stdio.h>

int main(){

	int fir = 1;
	int sec = 1;
	int next = 0;
	int sum = 0;
	
	while(next < 1000000){
		next = fir + sec;

		if(next % 2 == 0){
			sum += next;
		}
		fir = sec;
		sec = next;
	}

	printf("1000000 이하의 피보나치 수열의 짝수 항들의 합 : %d\n", sum);

	return 0;

}
