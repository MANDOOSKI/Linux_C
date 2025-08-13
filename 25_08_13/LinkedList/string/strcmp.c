#include <stdio.h>
#include "string.h"

int strcmp_my(const char* str1, const char* str2){

	// 오류 검사
	// str1, str2 중 하나라도 없을 경우 error
	if(!str1 || !str2){
		printf("error : string null\n");
		return 4002;
	}

	// str1이 안끝나고, str1과 str2가 같으면 다음 문자 비교
	while(*str1 != '\0' && *str1 == *str2){
		++str1;
		++str2;
	}

	return *(unsigned char*)str1 - *(unsigned char*)str2;

}
