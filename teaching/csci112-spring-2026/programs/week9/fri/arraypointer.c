#include<stdio.h>

int main(){
	char stringarr[][10]={"tulip", "marigold", "petunia", "rose", "daisy"};
        char (*pstr)[10] = stringarr;
	char *pstringarr[10]={"tulip", "marigold", "petunia", "rose", "daisy"};
	char** pparr=pstringarr;
	for(int i=0;i<5;i++){
	   printf("%p\n", stringarr+i);	
	   printf("%s\n", *(stringarr+i));
           **(pstr+i) ='T';
	   printf("%p\n", pstr+i);
	   printf("%s\n", pstr[i]);
	   printf("%p\n", pstringarr+i);
	   printf("%s\n", *(pstringarr+i));
	   pstringarr[i][0] = 'G';
	   printf("%p\n", pparr+i);
	   printf("%s\n", *(pparr+i));
	}
        return 0;
}
