#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "db.h"

int main(){
	if(run_mysql() != 0){
		printf("DB connection Error\n");
		return 1;
	}

	while(1){
		List hum;
		int count = 0;
		printf("몇 명의 정보를 입력하시겠습니까? : ");
		scanf("%d", &count);

		for(int i = 0; i < count; ++i){
			printf("이름을 입력해 주세요 : ");
		}

	}
	return 0;

}
