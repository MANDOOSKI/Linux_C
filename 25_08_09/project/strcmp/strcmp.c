#include "header.h"

int strcmp_my(const char* dest, const char* src){

	// dest, src가 null인지 확인
	if(!dest || !src){
		printf("error : source null\n");
		return 4000;
	}

	return *dest - *src;

}
