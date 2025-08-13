#include <stdio.h>
#include <stddef.h>
#include "string.h"

size_t strlen_my(const char* c){

	if(!c){
		printf("error : character null\n");
		return 4000;
	}

	size_t i = 0;
	while(!c){
		++i;
	}

	return i;

}
