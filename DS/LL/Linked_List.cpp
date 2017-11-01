//Linked List
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//#include<windows.h>

struct node
{
	int roll;
	char name[20];
	int age;
	struct node *next;
}*p,*q,*head,*new1 ;
void creat_list()
{
	int i,n;
	printf("How many no. to enter :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			head=(node *)malloc(sizeof(node));
			p=head;
		}
		else 
		{
			p->next=(node *)malloc(sizeof(node));
		    p=p->next;
		}
		printf("Enter name,roll age :");
		scanf("%s %d %d",p->name,&p->roll,&p->age);
	}
	p->next=NULL;
}
void display()
{
	
	int count=1;
	p=head;
	if(head==NULL)
	creat_list();
	else
	for(p=head;p!=NULL;p=p->next)
	{
		printf("\nNode %d: \t %s %d %d",count,p->name,p->roll,p->age);
		count++;
	}
}
void ins_end()
{
	p=head;
	if(head==NULL)
	{
		printf("list is empty\nfirst create list\n");
		creat_list();
	}
	while(p!=NULL)
	{
		q=p;
		p=p->next;
	}
	new1=(node *)malloc(sizeof(node));
	printf("\nInsert at end\nenter name roll age");
	scanf("%s %d %d",new1->name,&new1->roll,&new1->age);
    if(p==NULL)
  {
    q->next=new1;
	new1->next=NULL;
  }
	display();
}

void ins_beg()
{
	p=head;
	if(head==NULL)
  {
	printf("\nlist is empty first creat list\n");
	creat_list();
  } 
	else
   {
   	new1=(node *)malloc(sizeof(node));
   	printf("enter name roll age\n");
   	scanf("%s %d %d",new1->name,&new1->roll,&new1->age);
   	head=new1;
   	new1->next=p;
   }
   display();
}
void ins_mid()
{
	int pos,n=0;
	p=head;
	if(head==NULL)
	{
		printf("list is empty\nfirst create list\n");
		creat_list();
	}
       else
	{
		printf("enter position where node to inserted\n");
		scanf("%d",&pos);
		if(pos==1)
		ins_beg();
		else
		{
				while(n<pos-1)
		{
		    q=p;
			p=p->next;
			n++;
		}
		new1=(node *)malloc(sizeof(node));
		printf("enter name roll age\n");
		scanf("%s %d %d",new1->name,&new1->roll,&new1->age);
		q->next=new1;
		new1->next=p;

		}
	
	}	display();
}
void del_beg()
{
	p=head;
	if(head==NULL)
	{
		printf("list is empty\ncreate first\n");
		creat_list();
	}
	else
	{
		head=p->next;
		free(p);
	}
	display();
}
void del_end()
{
	p=head;
	if(head==NULL)
	{
		printf("list is empty\ncreate first\n");
		creat_list();
	}
	else
	{
		while(p!=NULL)
		{
			q=p;
			p=p->next;
		}
		
		q->next=NULL;
		free(p);
	}
	display();
}
void del_mid()
{
	int pos,n=0;
		p=head;
	if(head==NULL)
	{
		printf("list is empty\ncreate first\n");
		creat_list();
	}
	else
	{
		printf("enter position of node to be deleted\n");
		scanf("%d",&pos);
		if(pos==1)
		{
			del_beg();
		}
		else
		{
					while(n<pos-1)
		{
			q=p;
			p=p->next;
			n++;
		}
		q->next=p->next;
		free(p);

		}
	}
	display();
}
int main()
{
	int n;
	printf("1-creat_list\n2-display\n3-ins_end\n4-ins_beg\n5-in_mid\n6-del_beg\n7-del_end\n8-del_mid\n9-exit\n");
	while(1)
	{
		printf("\nenter your choice\n");
	scanf("%d",&n);
	switch(n)
	{
	 case 1:
       creat_list();
	   break;
     case 2:
	   display();
	   break;
	 case 3:
	   ins_end();
	   break;
	 case 4:
	 	ins_beg();
	 	break;
	 case 5:
	 	ins_mid();
	 	break;
	 case 6:
	 	del_beg();
		 break;
	 case 7:
	 	del_end();
		 break;
	 case 8:
	 	del_mid();
		 break;
	 case 9:
	 	exit(1);
	}

	}
	getch();
}
