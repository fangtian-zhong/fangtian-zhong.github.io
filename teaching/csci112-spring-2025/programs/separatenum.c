#include<stdio.h>
void separate(double, int*, int*, double*);
int main(){
     double num = -35.817;
     printf("original value %f\n", num);
     int sign;
     int whole;
     double fraction;
     separate(num, &sign,&whole, &fraction);
     printf("%d %d %f\n", sign, whole, fraction);
     return 0;
}
void separate(double num, int* sign, int* whole, double* fraction){
         *sign = (num>=0)?1:-1;
	 *whole=(int)((num>=0)?num:-num);
	 *fraction = ((num>=0)?num:-num) - *whole;
}
