#include "header.h"

int strcmp_my(const char* dest, const char* src){

	// dest, src가 null인지 확인
	if(!dest || !src){
		printf("error : source null\n");
		return 4000;
	}

	// str1과 str2가 같으면 다음문자 비교
	while(*dest != '\0' && *dest == *src){
		++dest;
		++src;
	}

	return *(unsigned char*)dest - *(unsigned char*)src;

}
