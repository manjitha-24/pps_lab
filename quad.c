#include<stdio.h>
#include<math.h>
int main()
{
	 float a,b,c,dis,x1,x2;
	 printf("\n Enter the values a,b,c in ax^2+bx+c: ");
	 scanf("%f%f%f",&a,&b,&c);
	 dis = b*b-4*a*c;
	 x1 = ( -b + sqrt(dis))/(2*a);
     x2 = ( -b - sqrt(dis))/(2*a);
     printf("Roots are: %.2f , %.2f",x1,x2);
 
     return 0;
}
