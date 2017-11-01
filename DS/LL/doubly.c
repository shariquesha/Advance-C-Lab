//Implementation of doubly linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//defining node
struct node
{
	int data;
	struct node *next;
	struct node *back;
}*head,*tail,*p,*q,*r;

int pos=0,count=0;
//traversal from begining of the list
void tr_beg()
{
	printf("\ntraversal from begining:\n");
	p=head;
	while(p!=tail)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("%d\t",p->data);

}

//traversal from end of the list
void tr_end()
{
	printf("\ntraversal from end:\n");
	p=tail;
	while(p!=head)
	{
		printf("%d\t",p->data);
		p=p->back;
	
	}
	printf("%d\t",p->data);
}

//insert at begining
void ins_beg()
{
	if(head==NULL)
	{
		p=(struct node*)malloc(sizeof(struct node));
		printf("\nenter data\n");
		scanf("%d",&p->data);
	    head=p;
		tail=p;
	}
	else
	{
		q=(struct node*)malloc(sizeof(struct node));
		printf("\nenter data\n");
		scanf("%d",&q->data);
		q->next=head;
		head->back=q;
		head=q;
		
	}
		tr_beg();
}

//insert at end
void in_end()
{
	if(head==NULL)
	{
		p=(struct node*)malloc(sizeof(struct node));
		printf("\nenter data:\n");
		scanf("%d",&p->data);
		head=p;
		tail=p;
	}
	else
	{
		q=(struct node*)malloc(sizeof(struct node));
		printf("\nenter data:\n");
		scanf("%d",&q->data);
		tail->next=q;
		q->back=tail;
		tail=q;
	}
		tr_beg();
}

//Insert at any given position
void in_mid()
{
	p=head;
	printf("enter position:\n");
	scanf("%d",&pos);
	if(pos==1)
	ins_beg();
	else
 {
	while(count<pos-1)
	{
		q=p;
		p=p->next;
		count++;
	}
	r=(struct node*)malloc(sizeof(struct node));
	printf("enter data:\n");
	scanf("%d",&r->data);
	q->next=r;
	r->back=q;
	r->next=p;
	p->back=r;
 }
 	tr_beg();
}

//deletion form begining of the list 
void del_beg()
{
	if(tail==head)
	printf("Under flow\n");
	else
	{
     	p=head;
   	    head=p->next;
  	    p->next->back=head;
  	    free(p);
  	    	tr_beg();
   }
}

//deletion at the end of list
void del_end()
{       
    if(tail==head)
      printf("\nunder flow\n");
    else
     {
        p=tail;
	  	tail=p->back;
	  	p->back->next=tail;
	  		tr_beg();
	 }
}

//delete at any given position

void del_pos()
{
	  printf("enter position\n");
	  scanf("%d",&pos);
	  while(count<pos-1)
	  {
	  	q=p;
	  	p=p->next;
	  }
	  r=p->next;
	  q->next=r;
	  r->back=q;
	  
	  	tr_beg();

}

void main()
{
	int n;
	tail=head=NULL;
	printf("1-ins_beg\n2-ins_end\n3-ins_mid()\n4-del_beg()\n5-del_end()\n6-del_mid()\n7-tr_end()\n");
	while(1)
	{
		printf("\nenter your choice\n");
		scanf("%d",&n);
		switch(n)
		 {
		 	case 1:
		 	ins_beg();
		 	break;
		 	case 2:
		 	in_end();
		 	break;
		 	case 3:
		 	in_mid();
		    break;
		    case 4:
		    del_beg();
		    break;
		    case 5:
		    	del_end();
		    	break;
		    	case 6:
		    		del_pos();
		    		break;
		    		case 7:
		    			tr_end();
		    			break;
		 }
		 
    }
}
