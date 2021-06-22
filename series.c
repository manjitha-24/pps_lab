#include<stdio.h>
#include<math.h>
int main()
{
	float x,res;
	printf("enter the value of x: ");
	scanf("%f",&x);
	printf("1-x/2+x^2/4-x^3/6: ");
	res=(1-x/2+(x*x)/4-(x*x*x)/6);
	printf("the result is:%f",res);
	return 1;
	}
