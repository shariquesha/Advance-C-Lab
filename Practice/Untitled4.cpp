//queue implementaion using array

#include<stdio.h>
#include<conio.h>

#define size 100
struct queue
{
	int data[size];
	int front;
	int rear;
}q;

//printing queue
void show()
{
	printf("queue is :\n");
	int i;
	for(i=q.rear;i<q.front;i++)
	{
		printf("%d\t",q.data[i]);
	}
}
//adding element into rear of queue
void add()
{
	printf("enter data:\n");
	scanf("%d",&q.data[q.rear-1]);
	q.rear--;
	show();
}

//deleting an element from front of queue
void del()
{
	if(q.front==q.rear)
	printf("under flow\n");
	else
	q.front--;
	show();
}

int main()
{
	int n;
	q.front=q.rear=size-1;
	printf("1-add\n2-del\n");
	while(1)
	{
		printf("\nenter your choice\n");
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
