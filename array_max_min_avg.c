#include<stdio.h>
int main()
{
    int a[1000],i,n,min,max;
    float avg;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
     
    avg=(min+max)/2;}
    
    printf("\nminimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
    printf("\naverage of array is : %f",avg);
 
 
    return 0;
}
