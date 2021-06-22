//compound interest
#include<stdio.h>
#include<math.h>
int main(){
	float principal,time,ci,rate;
	printf("enter the principal amount: ");
	scanf("%f",&principal);
	printf("time :");
	scanf("%f",&time);
	printf("rate of interest:");
	scanf("%f",&rate);
	ci=principal*(pow((1+rate/100),time));
	printf("compound interest is %.4f",ci);
	return 0;
}
