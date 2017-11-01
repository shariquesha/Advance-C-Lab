//stack using linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack
{
  int data;
  struct stack *next;
} *p,*s,*top;

void push()
{
 	  if(top==NULL)
	  {
	  	top=(stack *)malloc(sizeof(struct stack));
	    printf("enter item\n");
	    scanf("%d",&top->data);
	    top->next=NULL;
	  }
	  else
	  {
	  	s=(stack *)malloc(sizeof(struct stack));
	    printf("enter item\n");
	    scanf("%d",&s->data);
	    s->next=top;
	    top=s;
	  }

}
void display()
{
	p=top;
	 while(p!=NULL)
	  {
	  	printf("\n%d",p->data);
	  	p=p->next;
	  }
	  
}
void pop()
{
	if(top==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		p=top;
		top=top->next;
		free(p);
	}
}
int sempty()
{
	if(top==NULL)
	return 1;
	else 
	return 0;
}
int main()
	{
		int i;
	 	top=NULL;
		printf("1-push\n2-pop\n3-display\n4-exit\n");
		while(1)
		{
			printf("\nenter your choice\n");
			scanf("%d",&i);
			switch(i)
			{
				case 1:
				push();
				break;
			case 2:
				if(sempty())
				printf("stack is empty\n");
				else
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);break;
				

			}
		}  
	 
	}    

