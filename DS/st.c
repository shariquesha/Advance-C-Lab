#include<stdio.h>
#include<conio.h>
void push(int n);
void pop();
int arr[100],top=-1;
char ch[500];
void main()
{
	int i,num,choice;
	exit(1);
	switch(choice)
	{
		case 1 :
		{
			printf("\nEnter the element:");
			scanf("%d",&num);
			push(num);
			break;
		}
		case 2 : 
		{
			pop();
			break;
		}
	}
	getch();
}
void push(int n)
{
	int i;
	top++;
	arr[top]=n;
	for(i=top;i>=0;i--)
	{
		printf("\n%d",arr[i]);
	}
}
void pop()
{
	int i;
	top--;
	for(i=top;i>=0;i--)
	{
		printf("\n%d",arr[i]);
	}
}
