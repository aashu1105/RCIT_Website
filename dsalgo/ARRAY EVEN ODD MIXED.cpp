#include<stdio.h>

int main()
{
	int n,i,a[n],even=0,odd=0;
	printf("enter your array size");
	scanf("%d",&a[n]);
	for(i=0;i<a[n];i++)
	{
		scanf("%d",&a[i]);
	}
     if(a[i]%2==0)
		{
			even++;
		}
		else if(a[i]%2!=0)
		{
			odd++;
		}
	if(a[i]==even)
	{
		printf("even");
	}
	else if(a[i]=odd)
	{
		printf("odd");
	}
	return 0;
	
}

