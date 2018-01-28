#include <stdio.h>
#define size 5
void main(){
	int grade[size], i;
	
	printf("5명의 점수를 입력하시오:\n");

	for(i=0;i<size;i++){
		scanf("%d", &grade[i]);
	}

	for(i=0;i<size;i++){
		printf("grade[%d]=%d\n",i,grade[i]);
	}
}
		