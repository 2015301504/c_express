#include <stdio.h>
#define size 10
void main(){
	int grade[size], i,sum=0,avg;

	for(i=0;i<size;i++){
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &grade[i]);
	}

	for(i=0;i<size;i++){
		sum += grade[i];
	}

	avg = sum/size;

	printf("��� = %d\n", avg);
}