#include<stdio.h>
int main()
{
	int n,num,i,res;
	printf("enter number till where u want the prime numbers: ");
	scanf("%d",&n);
	for(num=1;num<=n;num++){          
		res=0;
		
		for(i=2;i<=num/2;i++){
			
			if (num%i==0){
				res++;
				break;
			}
		}if(res==0){
			printf("\n%d",num);
		}
		}
		
		return 0;
}
