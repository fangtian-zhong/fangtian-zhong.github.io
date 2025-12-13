#include<stdio.h>

int main(){
       int sum=0;
       int score;
       int input_status;

       printf("Scores\n");
       while(input_status!=EOF){
          printf("%5d\n", score);
	  sum += score;
	  input_status =scanf("%d", &score);
       }

       printf("sum=%d\n", sum);
       return 0;
}
