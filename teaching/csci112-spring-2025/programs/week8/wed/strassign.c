#include<stdio.h>
#include<string.h>

int main(){
	char s1[12];
	strcpy(s1, "hello world");
	printf("%s\n", s1);
	char s2[10];
	strncpy(s2, "hello world", 9);
	s2[9]='\0';
        printf("%s\n", s2);
	return 0;
}
