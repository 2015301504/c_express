#include <stdio.h>
#include <stdlib.h>
void main(){
	int grade[5],i;

	for(i=0;i<5;i++){
		grade[i] = rand() % 100;
	}
	for(i=0;i<5;i++){
		printf("grade[%d]=%d\n",i,grade[i]);
	}
}