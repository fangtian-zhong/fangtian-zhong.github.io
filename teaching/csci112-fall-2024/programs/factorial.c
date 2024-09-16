#include<stdio.h>

int main(){
    //factorial (n) = n * (n-1)*(n-2)...1
    int n;
    printf("Please read n: ");
    scanf("%d", &n);
    int fact=1;
    int i=n;
    while(i>0){
       fact*=i;
       i--;
    }
    printf("fact=%d\n", fact);
    return 0;

}
