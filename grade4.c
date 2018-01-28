#include <stdio.h>
#define size 10
void main(){
	int grade[size], i,sum=0,avg;

	for(i=0;i<size;i++){
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &grade[i]);
	}

	for(i=0;i<size;i++){
		sum += grade[i];
	}

	avg = sum/size;

	printf("평균 = %d\n", avg);
}