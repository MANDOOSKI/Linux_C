#include <stdio.h>

typedef struct human{
	int age;
	int sex;
	char name[20];
}human;

typedef struct student{
	human hum;
	int grade;
}student;

void information(student* std){

	printf("나이를 입력해 주세요 : ");
	scanf("%d", &std->hum.age);

	while('\n' != getchar()){}

	printf("성별을 입력해 주세요(남자 1, 여자 2) : ");
	scanf("%d", &std->hum.sex);

	while('\n' != getchar()){}

	printf("이름을 입력해 주세요: ");
	scanf("%19s", std->hum.name);

	printf("학년을 입력해 주세요 : ");
	scanf("%d", &std->grade);
}

int main(){

	student std1;

	information(&std1);

	printf("나이 : %d\n성별(남자 1, 여자 2) : %d\n이름 : %s\n학년 : %d\n", std1.hum.age, std1.hum.sex, std1.hum.name, std1.grade);
	

	return 0;

}
