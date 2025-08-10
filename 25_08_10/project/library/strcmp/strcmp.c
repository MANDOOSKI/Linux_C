#include "header.h"

int strcmp_my(const char* str1, const char* str2){

	// dest, src가 null인지 확인
	if(!str1 || !str2){
		printf("error : source null\n");
		return 4000;
	}

	// 하나씩 비교하고, 같으면 다음 문자검사
	while(*str1 && (*str1 == *str2)){
		++str1;
		++str2;
	}
	
	return (unsigned char)*str1 - (unsigned char)*str2;

}
