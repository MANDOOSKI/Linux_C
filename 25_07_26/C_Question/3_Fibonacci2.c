//1000000 이하의 피보나치수열(N번째항이N- 1번째항과N- 2번째 
//항으로표현되는수열, 시작은1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다.

#include <stdio.h>

int sum_fibo(int fir, int sec, int limit, int sum){

	int next = fir + sec;
	if(next > 1000000){
		return sum;
	}
	if(next % 2 == 0){
		sum += next;
	}

	return sum_fibo(sec, next, limit, sum);

}

int main(){

	int sum = sum_fibo(1, 1, 1000000, 0);

	printf("1000000 이하의 피보나치 수열의 짝수 항들의 합 : %d\n", sum);

	return 0;

}
