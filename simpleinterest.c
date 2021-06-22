#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,interest;
	printf("enter p,t,r: \n");
	scanf("%f%f%f",&p,&t,&r);
	interest=(p*t*r)/100;
	printf("interest is: %f",interest);
}
