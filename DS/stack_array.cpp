#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 100
struct stack
{
	int st[size];
	int top;
}s;

 int sempty()
 {
 	if(s.top==-1)
    return 1;
    else 
    return 0;
 }
 int sfull()
 {
 	if(s.top >= size-1)
 	return 1;
 	else
 	return 0;
 }
 int push(int item)
 {
    s.top++;
 	s.st[s.top]=item;
 }
int pop()
 {
 	s.top--;	
	return(s.st[s.top]);
 }
void display()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("\n%d",s.st[i]);
	}
}
int main()
{
	int i,item;
	s.top=-1;
	printf("1-push()\n2-pop()\n3-display()\n4-exit\n");
	while(1)
	{
		printf("\nenter your choice\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			if(sfull())
			printf("stack is full\n");
			else
			{
			printf("enter item to be pushed\n");
			scanf("%d",&item);
			push(item);
			}
			break;
	    case 2:
	    	if(sempty())
	    	printf("stack is empty\n");
	    	else
	    	{
	    		pop();
	    		printf("item poped\n");
	    	}
	    	break;
	    case 3:
	    	if(sempty()){
	    		printf("stack empty\n");
	    	}
	    	display();
	    	break;
	    case 4:
	    	exit(1);
	    	break;
	    default :
	       printf("wrong choice\n");
	}
	}
}
