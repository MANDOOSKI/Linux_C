// 다음 식을 만족하는 자연수 a,b,c의 개수를 구하여라
// i) a + b + c = 2000
// ii) a > b > c, a,b,c는 모두 자연수

#include <stdio.h>

int main(){

	int count = 0;

	for(int c = 1; c <667; ++c){
		for(int b = c + 1; b <= (2000 - c) / 2; ++b){
			int a = 2000 - b - c;

			if(a > b){
				++count;
			}
		}
	}

	printf("%d 개\n", count);

	return 0;

}
