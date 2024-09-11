#include<stdio.h>

int main(){
	double income;
	printf("Please tell me your income: ");
	scanf("%lf", &income);
        double tax;
	if(income <= 11600){
	  tax = income * 0.1;
	}
	else if(income <= 47150){
	  tax = (income-11600)*0.12+11600*0.1;
	}
	else if(income <= 100525){
	  tax = (income - 47150)*0.22+(47150-11600)*0.12+11600*0.1;
	}
	else if(income <= 191950){
	  tax = (income - 100525)*0.24 + (100525-47150)*0.22+(47150-11600)*0.12+11600*0.1;
	}
	else if(income <= 243725){
	  tax = (income - 191950)*0.32+ (191950-100525)*0.24+(100525-47150)*0.22+(47150-11600)*0.12+11600*0.1;
	}
	else{
	  tax = (income - 243725)*0.35+(244725-191950)*0.32+(191950-100525)*0.24+(100525-47150)*0.22+(47150-11600)*0.12+11600*0.1;
	}
        printf("%f\n", tax);
	return 0;
}
