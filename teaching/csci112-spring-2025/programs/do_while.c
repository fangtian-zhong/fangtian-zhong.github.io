#include<stdio.h>

int main(){
	int status;
	int num;
	printf("Read a number: ");
	
	do{
	  status = scanf("%d", &num);   
	}while(status>0&&num%2!=0);
        return 0;

}
