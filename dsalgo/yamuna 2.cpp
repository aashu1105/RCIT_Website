#include<stdio.h>

int main()
{
    int n,arr[n];
    printf("enter your array size");
    scanf("%d",&n);
    printf("enter your array element\n");
    
    for(int i=0;i<n;i++)
    {
    	
    	scanf("%d",&arr[i]);
    	
	}
	 printf("display your array element");
	 
	for(int i=0;i<n;i++)
	{
	printf("\n %d",arr[i]);
    printf("\n %d",&arr[i]);
	}
	printf("\nfrequency of the array is  %d",n-1);
    return 0;
}
