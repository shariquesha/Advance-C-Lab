// Linked List and Operations on Linked List
#include<stdio.h>
#include<stdlib.h>

//defining node structure
struct node
{
	int data;
	struct node *next;
}*p,*head,*q,*r;

int i,n,pos,count=1,temp=0;

//printing linked list
void show()
{
	int i;
	printf("\nlist is :\n");
	p=head;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
    }
}

//inserting at begining in linked list
void ins_beg()
{
	printf("how many data to enter.....?\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		 if(head==NULL)   // if list is empty
		 {
		 	//creating first node
		 	p=(node*)malloc(sizeof(node));
		 	printf("enter data :\n");
		 	scanf("%d",&p->data);
		 	head=p;
		 	p->next=NULL;
		 }
		 else
		 {
		 	q=(node*)malloc(sizeof(node));
		 	printf("\nenter data:\n");
		 	scanf("%d",&q->data);
		 	q->next=head;
		 	head=q;
		 }
		 show();
	}

}

//insert data at end of list
void ins_end()
{
	printf("how many data to enter....?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(head==NULL)    //if list is empty 
		{
			//creating first node
			p=(node*)malloc(sizeof(node));
			printf("enter data:\n");
			scanf("%d",&p->data);
			head=p;
			p->next=NULL;
		}
		else
		{
			p=head;
			q=(node*)malloc(sizeof(node));
			printf("\nenter data:\n");
			scanf("%d",&q->data);
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=q;
			q->next=NULL;
		}
		show();
	}
}

// insert any given position of the list 
void ins_mid()
{
	
	if(head==NULL)
	
	  printf("list is empty,Data Can't be inserted, first creat list\n");
	
	else
    {
            p=head;
		    printf("\nenter position where data is to be inserted \n");
		    scanf("%d",&pos);
		    if (pos==0)
		    ins_beg();
		    while(count<pos)
		    {
		    	r=p;
		    	p=p->next;
		    	count++;
		    }
		    r->next=(node*)malloc(sizeof(node));
			printf("enter data:\n");
			scanf("%d",&r->next->data);
			q=r->next;
			q->next=p;
			show();
	}
	
}

//Delete data at any given position
void del()
{
	if(head==NULL)
	{
		printf("Underflow \n");
		
	}
	else
	{
		printf("Enter position of element to be deleted\n");
		scanf("%d",&pos);
		p=head;
		while(count<pos)
		{
			r=p;
			p=p->next;
			count++;
		}
		r->next=p->next;
		show();
	}
	
}
// Delete element from begining of lined list
void del_beg()
{
	if(head==NULL)
	printf("Under flow\n");
	else
	{
		p=head;
		head=p->next;
		show();
	}
}
// delete element at the end of linked list
void del_end()
{
	if(head==NULL)
	printf("Under flow\n");
	else
	{
	  p=head;
	  while(p->next->next!=NULL)
	  {
	  	p=p->next;
	  }	
	  if(p==head)
	  head=NULL;
	  else
	  p->next=NULL;
	  
	}show();
}


//sorting of linked list elements
void sort()
{
	if(head==NULL)
	printf("Under flow\n");
	else
	{
		p=head;
		while(p!=NULL)
		{
		  if(p->data>p->next->data)
		  {
			temp=p->next->data;
			p->next->data=p->data;
			p->data=temp;
		  }
		  show();
		  p=p->next;
		}
	}
}


 int main()
{
	printf("1 \tinsert at begining\n2\tprint the list\n3\tinsert at end\n4\tinsert at middle\n5\tdelete from any position\n");
	printf("6\tdelete from begining\n7\tdelete at the end\n8\tsort the list\n");
	while(1)
	{
		printf("\nenter your selection\n");
	    scanf("%d",&i);
	switch(i)
	{
	case 1:	
	ins_beg();
	break;
	case 2:
	show();
	break;
	case 3:
	ins_end();
	break;
	case 4:
	ins_mid();
	break;
	case 5:
	del();
	break;
	case 6:
	del_beg();
	break;
	case 7:
	del_end();
	break;
	case 8:
	sort();
	break;

	}

	}	
	
}
