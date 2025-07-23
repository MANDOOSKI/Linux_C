#include <stdio.h>

int main(){

	int a = 0;
	int b = 2;

	if(0){
		a = 3;
	}else if(1){
		a = 5;
	}else if(a == 0){
		a = 4;
	}else{
		a = 100;
	}

	// if else는 if문이 거짓일 때 if else를 해 다른 조건식을해 그곳이
	// 참이면 if else문의 내용을 실행하고 조건문 종료.
	// 위에 코드처럼 밑에 else if 가 참이라도 종료한다.
	
	printf("a는 %d\n", a);

	return 0;

}
