#include<stdio.h>
int main()
{
	int num,rem,binary=0,i=1;
	printf("enter the number:");
	scanf("%i",&num);
	while(num!=0){
		rem=num%2;
		num/=2;
		binary+=i*rem;
		i*=10;
		
	}
	printf("the binary form is:%d",binary);
	return 0;
}
