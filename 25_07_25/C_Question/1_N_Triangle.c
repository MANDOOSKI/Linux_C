#include <stdio.h>

void print_triangle(const int* n){
        for(int i = 0; i < *n; ++i){
                for(int j = i; j < *n - 1; ++j){
                        printf(" ");
                }

                for(int k = 0; k < (i * 2) + 1; ++k){
                        printf("*");
                }
                puts("");
        }
}

void print_inverted_triangle(const int* n){
	for(int i = *n; i > 0; --i){
		for(int j = i; j < *n; ++j){
			printf(" ");
		}
		for(int k = 0; k < (i * 2) - 1; ++k){
			printf("*");
		}
		puts("");
	}
}

int main(){

	// 문제 1
	// N 줄인 삼각형을 출력한다. 단, 사용자로 부터 임의의 N을 입력 받는다.
	// 아래는 N = 3 일 때의 출력 예시 이다.
	//   *
	//  ***
	// *****
	//
	// 문제 2
	// 위와 동일한 형태를 취하되, 역 삼각형을 출력한다. 아래는 N = 3 일 때의 출력 예시 이다.
	// *****
	//  ***
	//   *

	int N = 0;
	int collect = 0;

	printf("몇줄의 삼각형을 출력하시겠습니까? : ");
	scanf("%d", &N);

	printf("삼각형(1), 역삼각형(2) 중 무엇을 출력하시겠습니까? : ");
	scanf("%d", &collect);

	switch(collect){
		case 1:
			print_triangle(&N);
			break;
		case 2:
			print_inverted_triangle(&N);
			break;
		default:
			printf("잘못 입력하였습니다. 프로그램을 다시 시작해 주세요.\n");
			return 1;
	}

	return 0;

}
