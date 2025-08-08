#include <stdio.h>
#define MAX 10000

int main(){

        int a;
        int* pa;
	int** ppa;

        a = 3;
        printf("a = %d\n", a);
        printf("a = %p\n", &a);

        pa = &a;
        printf("pa = %p\n", pa);
        printf("*pa = %d\n", *pa);
        printf("&pa = %p\n", &pa);

	ppa = &pa;
	printf("ppa = %p\n", ppa);
	printf("*ppa = %p\n", *ppa);
	printf("**ppa = %d\n", **ppa);

        return 0;

}
