#include<stdio.h>
#include<conio.h>
#define size 50
struct queue
{
	int q[size];
}front,rear;

void ins(int item)
{
	if(front==0)
	{
		q[front]=item;
	}
	else
	{
		front++;
		q[front]=item;
	}
	
}
void del()
{
	
}
void display()
{
	
}
int main()
{
	int i,item;
	front=0;
	printf("1-insr\n2-del\n3-display\n4-exit\n");
	while(1)
	{
		printf("enter your choice\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
			printf("enter item\n");
			scanf("%d",&item);
			ins();
			break;
			case 2:
			del();
			break;
			case 3:
			display();
			break;
			case 4:
			exit(1);
		}
	}
}
