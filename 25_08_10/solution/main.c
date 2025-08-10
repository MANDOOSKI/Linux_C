#include <stdio.h>

int solution(int price, int money, int count){

	int sum = 0;
	for(int i = i; i <= count; ++i){
		sum += price * i;	
	}
	
	return money > sum ? 0 : sum - money;

}

int main(){

	int price = 0;
	int money = 0;
	int count = 0;
	int result = 0;

	printf("놀이기구의 가격, 현재 가진돈, 탈 횟수 순으로 입력해 주세요. ex) 3 20 4 : ");
	scanf("%d %d %d", &price, &money, &count);

	result = solution(price, money, count);
	printf("부족한 금액 : %d\n", result);

	return 0;

}
