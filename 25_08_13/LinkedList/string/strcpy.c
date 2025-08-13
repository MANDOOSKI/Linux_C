#include <stdio.h>
#include "string.h"

int strcpy_my(char* dest, const char* src, size_t cap){
	// 오류 검사
	// dest와 src 둘 중 하나라도 값이 없으면 오류
	if(!dest || !src){
		printf("error : string null\n");
		return 4001;
	}

	// 용량 오류
	// cap가 0이거나 cap < src의 길이 + 1 이면 오류
	size_t len = strlen_my(src);
	if(0 == cap || cap < len + 1){
		printf("error : capacity error\n");
		return 4002;
	}

	while(*src){
		*dest++ = *src++;
	}
	*dest = '\0';

	return 0;

}
