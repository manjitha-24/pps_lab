#include<stdio.h>
#include<math.h>
int main() {
	int x,n,sum=1,i;
	printf("1+x+x^2+...+x^n= ");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++){          
		sum+=pow(x,i);         
		
	}printf("sum: %d",sum);
	return 0;
}
