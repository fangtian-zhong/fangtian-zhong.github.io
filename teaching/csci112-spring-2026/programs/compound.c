#include<stdio.h>

int main(){
	int loop_variabl=0;
	int N;
	scanf(" %d", &N);
	while(loop_variabl<N){
	    printf("*");
	    printf("loop_v=%d\n",loop_variabl++);
	}

	return 0;
}
