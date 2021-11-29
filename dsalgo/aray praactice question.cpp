#include<stdio.h>

int main()
{
	int n[5],count=0,c=0,t=0;
	int i;
	printf("enter your array number");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
	
	if(n[i]%2==0)
	 {
	 	count++;
	 }
	 else if(n[i]%2!=0)
	 {
	 	c++;
	 }
    }
	 if(count==5)
	 {
	 	printf("its even");
	 }
	 else if(c==5)
	 {
	 	printf("its odd");
	 	
	 }
	 else
	 {
	 	printf("its mixed");
	 }
}

