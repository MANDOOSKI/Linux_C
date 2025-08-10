#include "header.h"

int strcpy_my(char* dest, const char* src, size_t cap){

	// dest, src가 null인지 확인
	if(!dest || !src){
		printf("error : source null\n");
		return 4001;
	}

	// 용량 관련 에러
	size_t len = strlen_my(src);
	if(0 == cap || len + 1 > cap){
		printf("error : capacity\n");
		return 4002;
	}

	while(*src){
		*dest++ = *src++;
	}
	*dest = '\0';

	return 0;

}
