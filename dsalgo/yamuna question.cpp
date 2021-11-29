#include<stdio.h>
int main()
{
	int n,arr[n];
        printf("enter size of array");
        scanf("%d",&n);
        for(int i=0;i<n;i++);
        {
        	 scanf("%d",&arr[i]);
		}
        for(int i=0;i<n;i++);
        {
        	
		if(arr[i]==n-1)
		{
			printf("\nfrequency of array is %d",arr[i]);
		}
	}
	
	return 0;
     
}
