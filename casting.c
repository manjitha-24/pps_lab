/*a. Write a simple program that prints the results of all the operators available in C
(including pre/ post increment , bitwise and/or/not , etc.). Read required operand
values from standard input.*/


#include<stdio.h>
int main()
{
	char a;
	int b;
	printf("enter the value: ");
	scanf("%c",&a);
	b=(int)a;
	printf("the converted datatype is %d",b);
	return 0;
	
}
