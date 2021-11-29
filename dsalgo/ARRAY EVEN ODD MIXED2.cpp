#include<stdio.h>

int main()
{
	int a[5],i;
	printf("enetr you array frequency \n");
	for(i=0;i<5;i++)
	{
	
		scanf("%d",&a[i]);
	}
	if(a[0]%2==0 &&a[1]%2==0 &&a[2]%2==0 &&a[3]%2==0&& a[4]%2==0 )
	{
		printf("its even");
		
	}
	 else if(a[0]%2!=0 &&a[1]%2!=0 &&a[2]%2!=0 &&a[3]%2!=0&& a[4]%2!=0 )
	{
		printf("its odd");
    }
    else
    {
    	printf("its mixed");
	}
}
