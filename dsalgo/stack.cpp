#include<stdio.h>

int ch,n,x,i;
int	top=-1;
int stack[10];	
void push();
void pop();
void display();	
int main()

{
	printf("\n Enter the size of Stack");
	scanf("%d",&n);
	
	do
	{
		printf("\n 1. PUSH \n 2. POP \n 3. DISPLAY \n 4. EXIT");
		printf("\n Enter the choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: break;
			default: printf("\n enter correct choice");
		}
	}
	while(ch!=4);
	return 0;
}

void push()
{
	if(top>=n-1)
	{
		printf("\n OVERFLOW");
	}
	else
	{
		printf("\n enter the element to push");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top<=-1)
	{
		printf("\n UNDERFLOW");
	}
	else
	{
		printf("\n Element removed is %d",stack[top]);
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		printf("\n Elements present in the stack are:\n");
		for(i=top;i>=0;i--)
		{
			printf("\n %d",stack[i]);
		}
	}
	else
	{
		printf("\n empty stack");
	}
}


