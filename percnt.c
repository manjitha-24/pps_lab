#include<stdio.h>
int main()
{
	int marks;
	printf("\n Enter the percentage obtained:");
	scanf("%d",&marks);
	if (marks < 40)
	printf("\n failed");
	else if (marks < 60)
	printf("\n second class");
	else if (marks < 70)
	printf("\n first class");
	else
	printf("\n distinction");
	return 0;
	}
