#include<stdio.h>
#include<string.h>
int main(){
	char k1[15]="John ";
	char k2[15]="Jacqueline ";
	char last[15]="Kennedy";

	strcat(k1, last);
	strcat(k2, last);
	printf("%s\n", k1);
	printf("%s\n", k2);
	return 0;
}

