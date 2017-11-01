//queue implementation using linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}
*rear,*p,*q;
//printing queue
void show()
{
	printf("queue is :\n");
	for(p=rear;p!=NULL;p=p->next)
	{
		printf("%d\t",p->data);
	}
}

//adding element to the rear of queue
void add()
{
	if(rear==NULL)
	{
		p=(node*)malloc(sizeof(node));
		printf("\nenter data:\n");
		scanf("%d",&p->data);
		rear=p;
		p->next=NULL;
	}
	else 
	{
		q=(node*)malloc(sizeof(node));
		printf("\nenter data:\n");
		scanf("%d",&q->data);
		q->next=rear;
		rear=q;
	}
	show();
}

//deleting element from front of queue
void del()
{
	if(rear==NULL)
	printf("under flow\n");
	else
	{
		p=rear;
		while(p->next->next!=NULL)
		{
			p=p->next;
		}
		
		if(p!=rear)
		p->next=NULL;
		else 
		rear=NULL;
	}
	show();
}

int main()
{
	int n;
	rear=NULL;
	printf("1-add\n2-del\n");
	while(1)
	{
		printf("\nenter choice\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				add();
				break;
				case 2:
					del();
					break;
					
		}
	}
}
