#include<stdio.h>

int main(){
	FILE* inp = fopen("input.txt", "r");
	int num;
	while(fscanf(inp, "%d",&num)){
	   printf("%d\n", num);
	}

	return 0;


}
