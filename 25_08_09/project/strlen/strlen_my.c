#include "header.h"

size_t strlen_my(const char* s){

	if(!s){
		printf("error : string null(4000)");
		return 4000;
	}

	size_t i = 0;
	while(s[i] != '\0'){
		++i;
	}

	return i;

}
