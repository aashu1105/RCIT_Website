#include<stdio.h>
int main()
{
  int n,stack[n],ch,top=-1,x;
  printf("enter your month number");
  scanf("%d",&n);

void push();
void pop();
void display();
void exit();


do
{
	

   
   switch(ch)
   {
   case 1: push();
   	break;
   	case 2: pop();
   	break;
   	case 3:display();
   	break;
   	case 4: exit();
   	break;
   	default:
   	 printf("invalid number you chosen");
   }
}while(ch!=4);
return 0;
   
void push()
{
	if(top>=n-1)
	{
		printf("your stack is full");
	}
	else
	{
		printf("enter the element");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
}

