#include <stdio.h>
#include <string.h>

typedef struct student{
        int s_id;
        char name[20];
}std;

void std_func(std* st){

        st->s_id = 2025001;
        strcpy(st->name, "Kanghyeon Han");

        printf("학번 : %d\n이름 : %s\n", st->s_id, st->name);
        printf("struct size : %ld\n", sizeof(st));

}

int main(){

        std st;

	std_func(&st);

	printf("학번 : %d\n이름 : %s\n", st.s_id, st.name);
	printf("struct size : %ld\n", sizeof(st));
	
	printf("st : %ld\n", st);
	printf("&st : %ld\n", &st);

        return 0;

}
