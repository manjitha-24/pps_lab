#include <stdio.h>

int main()
{
	float a,b,c;
	printf("enter three numbers:\n");
	scanf("%f%f%f",&a,&b,&c);
	if (a>b && a>c)
	printf("a  is the biggest");
    else if (b>a && b>c)
	printf("b is the biggest");
	else if (c>a && c>b)
	printf("c is the biggest");
	else
	printf("all are equal");
	return 1;
}
