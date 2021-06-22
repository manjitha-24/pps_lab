#include<stdio.h>
int main()
{
	char operator;
	int a,b;
	
	printf("\n Enter any operator from (%,+,-,/,*):");
	scanf("%c",&operator);
	printf("\n Enter any two operands:");
	scanf("%i%i",&a,&b);
	switch(operator)
	{
		case '+':
			printf("%i+%i=%i",a,b,a+b);
			break;
		case '-':
			printf("%i-%i=%i",a,b,a-b);
			break;
		case '/':
		    printf("%i/%i=%i",a,b,(float)a/b);
			break;
		case '*':
		    printf("%i*%i=%i",a,b,a*b);
			break;
		case '%':
		    printf("%i % %i= %i",a,b,a%b);
			break;			
		     	
		
	}

	
}
