#include<stdio.h>
#include<math.h>

int main(){
	double x;
	printf("read a floating number: ");
	scanf("%lf", &x);
        printf("ceil=%f\n", ceil(x));
	printf("log=%f\n", log(x));
	printf("sqrt=%f\n", sqrt(x));
	return 0;
}
