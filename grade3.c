#include <stdio.h>
#define size 5
void main(){
	int grade[size], i;
	
	printf("5���� ������ �Է��Ͻÿ�:\n");

	for(i=0;i<size;i++){
		scanf("%d", &grade[i]);
	}

	for(i=0;i<size;i++){
		printf("grade[%d]=%d\n",i,grade[i]);
	}
}
		