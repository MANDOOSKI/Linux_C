#include <stdio.h>

int main(){
	
	int a = 0;
	char b = 0;

	printf("정수를 입력하세요(%%d포멧) : ");
	scanf("%d", &a);

	printf("%%d로 입력받은 값 : %d\n", a);

	getchar();

	// scanf는 정수를 입력을 해도 문자로 받은뒤 개행문자와 함께 buffer에 저장이된다. 이때 printf는 그 출력하려는 변수의 크기만큼 가져옴으로 개행문자(\n, \t ..) 같은게 남아 있을 수 있다. 그러므로 getchar(); 같은걸로 버퍼를 비워줘야한다.

	printf("정수를 입력하세요(%%c포멧) : ");
	scanf("%c", &b);

	printf("%%c로 입력받은 값 : %c\n", b);
	printf("아무것도 안떠서 다시한면 출력 : %c\n", b);

	getchar();

	return 0;

}
