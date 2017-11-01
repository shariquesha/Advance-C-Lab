//stack implementation using linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//defining node
struct node
{
	int data;
	struct node *next;
}*p,*top,*q;

//printing stack
void show()
{
	printf("stack is:\n");
	p=top;
	while(p!=NULL)
	{
		printf("\n%d",p->data);
		p=p->next;
	}
}

//pushing a element in stack
void push()
{
	if(top==NULL)
	{
		p=(node*)malloc(sizeof(node));
		printf("\nenter data:\n");
		scanf("%d",&p->data);
		top=p;
		p->next=NULL;
	}
	else
	{
		q=(node*)malloc(sizeof(node));
		printf("\nenter data:\n");
		scanf("%d",&q->data);
		q->next=top;
		top=q;
	}
	show();
}

//Deleting an element from stack
void pop()
{
	if(top==NULL)
	printf("under flow\n");
	else
	top=top->next;
	show();
}

int main()
{
	int n;
	top=NULL;
	printf("1-push\n2-pop\n");
	while(1)
	{
	  printf("\nenter choice\n");
	  scanf("%d",&n);
		switch(n)
		{
			case 1:
				push();
				break;
				case 2:
					pop();
					break;
		}
	}
}
