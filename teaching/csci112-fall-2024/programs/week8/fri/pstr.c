#include<stdio.h>

int main(){
     char string[][10]={"str1", "str2", "str3", "str4"};
     char (*pstring)[10] = string;
     char *a[10] ={"str1", "str2", "str3", "str4"};
     char **pa = a; 
     for(int i=0;i < 4;i++){
         printf("%s\n", string[i]);
	 printf("%s\n", *(string+i));
	 printf("%s\n", pstring[i]);
         printf("%s\n", *(pstring+i));
         printf("%s\n", a[i]);
	 printf("%s\n", *(a+i));
	 printf("%s\n", pa[i]);
     }
     return 0;
}
