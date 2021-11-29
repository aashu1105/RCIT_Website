#include<stdio.h>

//create node
struct node
{
	int value;
	struct node *next;
};

void printlist(struct node *p)
{
	while(p!=NULL)
	{
		printf(" %d->",p->value);
		p=p->next;	
	}
}

int main()
{	//initilaize the nodes
	struct node *head;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	struct node *D=NULL;
	//memory allocation
	one=malloc(sizeof(struct node));
	two=malloc(sizeof(struct node));
	three=malloc(sizeof(struct node));
	D=malloc(sizeof(struct node));
	//assign values
	one->value=100;
	two->value=200;
	three->value=300;
	D->value=50;
	//connect the nodes
	head=one;
	one->next=D;
	D->next=two;
	two->next=three;
	three->next=NULL;
	//display the list
	printlist(head);
	printf("\n %d",&one);
	printf("\n %d",&D);
	printf("\n %d",&two);
	printf("\n %d",&three);
	
	return 0;	
}

