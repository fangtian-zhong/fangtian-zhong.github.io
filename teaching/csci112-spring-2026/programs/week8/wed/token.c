#include<stdio.h>
#include<string.h>

int main(){
   char *last, *first, *middle;
   char pres[20] = "Adams, John Quincy";
   char pres_copy[20];
   strcpy(pres_copy, pres);
   first=strtok(pres_copy, ",");
   printf("%s\n", pres_copy);
   middle=strtok(NULL, " ");
   last = strtok(NULL, "\0");
   printf("%s\n", first);
   printf("%s\n", middle);
   printf("%s\n", last);
   return 0;
}
