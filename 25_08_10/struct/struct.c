#include <stdio.h>
#include <string.h>

struct student{
	int s_id;
	char name[20];
	char a;
};

int main(){

	struct student st1;
	st1.s_id = 2025001;
	strcpy(st1.name, "Kanghyeon Han");

	printf("학번 : %d\n이름 : %s\n", st1.s_id, st1.name);
	printf("struct size : %ld\n", sizeof(st1));

	return 0;

}
