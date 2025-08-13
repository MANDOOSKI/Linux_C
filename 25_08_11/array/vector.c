#include <stdio.h>
#include <stdlib.h>

typedef struct int_Vector{

	int* pInt;
	int i_count;
	int i_maxCount;

}I_vec;

void init(I_vec* vec){

	vec->pInt = (int*)malloc(sizeof(int)*2);
	vec->i_count = 0;
	vec->i_maxCount = 2;

}

void rellocate(I_vec* vec){

        int* pNew = (int*)malloc(vec->i_maxCount * 2 * sizeof(int));

        for(int i = 0; i < vec->i_count; ++i){
                pNew[i] = vec->pInt[i];
        }
        free(vec->pInt);

        vec->pInt = pNew;

        vec->i_maxCount *= 2;

}

void push_back(I_vec* vec, int data){

	if(vec->i_count >= vec->i_maxCount){
		printf("[info] new allocate\n");
		rellocate(vec);
	}

	vec->pInt[vec->i_count++] = data;

}

void release(I_vec* vec){

	free(vec->pInt);
	vec->i_count = 0;
	vec->i_maxCount = 0;

}

int main(){

	I_vec myVec;
	init(&myVec);

	for(int i = 0; i < 10; ++i){
		push_back(&myVec, i);
	}

	for(int i = 0; i < myVec.i_count; ++i){
		printf("%d\n", myVec.pInt[i]);
	}

	release(&myVec);

	return 0;

}
