//Stack implementation using array
#include<stdio.h>

#define size 100

struct queue
{
	int data[size];
	int top;
}s;

//printing stack
void show()
{
	int i;
	printf("stack is :\n");
	for(i=s.top;i>=0;i--)
	{
		printf("%d\n",s.data[i]);
	}
}

//Pushing elements into stack
void push()
{
	s.top++;
	printf("enter element\n");
	scanf("%d",&s.data[s.top]);
	show();
}

//poping out top element from stack
void pop()
{
	s.top--;
	show();
}
int main()
{
	int n;
	s.top=-1;
	while(1)
	{
		printf("\n1-push\n2-pop\n");
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
