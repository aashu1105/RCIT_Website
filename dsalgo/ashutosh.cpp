#include<stdio.h>

int main()
{
	int a[5],i;
	printf("your number of array");
	//scanf("%d",&a);
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
    {
    	printf("\n%d\n",a[i]);
    	printf("%d\n",&a[i]);
	}
}
