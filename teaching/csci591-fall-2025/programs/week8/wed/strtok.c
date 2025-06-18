#include<stdio.h>
#include<string.h>

int main(){
    char name[100]="Adams, John Quincy";
    char namecopy[100];
    char last[30], first[30],middle[30];
    strcpy(namecopy, name);
    last = strtok(namecopy, ",");
    printf("%s\n", namecopy);
    first = strtok(NULL, " ");
    middle = strtok(NULL, " ");
    printf("%s\n", last);
    printf("%s\n", first);
    printf("%s\n", middle);
    return 0;
}
