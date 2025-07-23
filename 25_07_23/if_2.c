#include <stdio.h>

int isGood();
int isBad();

int main(){

	int a = 0;

	if(isGood())
		a = 1;
		a = 3;

	if(isBad())
		a = 2;

	printf("%d\n", a);

	return 0;

}

// 이 문제는 3이라는 결과 값이 나온다 if(isGood())의 조건식이 끝나고 무조건 a = 3;을 한다. 그후 if(isBad())는 거짓이므로 실행이 안된다.
// 이런식으로 햇갈릴 수 있기 때문에 중괄호({})는 꼭 해주자!!
int isGood(){
	return 1;
}

int isBad(){
	return 0;
}
