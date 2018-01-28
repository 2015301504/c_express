#include <stdio.h>
#define size 5
int main(){
	int grade[size] = {10,20,30,40,50},i;

	for(i=0;i<size;i++){
		printf("grade[%d]=%d\n",i,grade[i]);
	}

	return 0;
}