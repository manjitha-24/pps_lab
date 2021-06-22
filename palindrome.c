/*Write a C program to find the sum of individual digits of a positive integer and test
given number is palindrome*/

#include<stdio.h>
int main()
{
	int num,m,sum=0,rev=0,original,rem;
	printf("enter the positive integer: ");
	scanf("%i",&num);
	original=num;
	while(num>0){          
		m=num%10;         
	    sum+=m;
	    num=num/10;                
	}
	printf("the sum of the digits of number is: %d",sum);
	 while (num != 0) {
        rem = num % 10;
        rev= rev * 10 + rem;
        num /= 10;
    }

    
    if (original == rev)
        printf("\n %d is a palindrome.",original);
    else
        printf("\n %d is not a palindrome.",original);

	
	return 0;
	
	
}
