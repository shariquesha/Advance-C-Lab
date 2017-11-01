//tree

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}*new_node,*temp,*root;


//insert new_node to root node
void insert(node *new_node,node *root)
{

	if(root==NULL)
	{
		printf("enter root\n");
		root=new_node;
	}
	else
	{
		if(new_node->data<root->data)
		{
			if(root->lchild==NULL)
			    root->lchild=new_node;
			else
				insert(new_node,root->lchild);
		}
		if(new_node->data>root->data)
		{
			if(root->rchild==NULL)
			  root->rchild=new_node;
			else
			  insert(new_node,root->rchild);
		}
	}
}

//preorder
void preorder(node *temp)
{
	if(temp!=NULL)
	{
		printf("%d\t",temp->data);
		preorder(temp->lchild);
		preorder(temp->rchild);
	}
}

// inorder
void inorder(node *temp)
{
	if(temp!=NULL)
	{
		inorder(temp->lchild);
		printf("%d\t",temp->data);
		inorder(temp->rchild);
	}
}

//post order

void postorder(node *temp)
{
	if(temp!=NULL)
	{
		postorder(temp->lchild);
		postorder(temp->rchild);
		printf("%d\t",temp->data);
	}
}
int main()
{
	int n;
	root=NULL;
	printf("1-insert node in tree\n2-inorder\n3-preorder\n4-post order\n");
	while(1)
	{
	   printf("enter your choice\n");
	   scanf("%d",&n);
	   switch(n)
	   {
	   	case 1:
	   new_node=(node*)malloc(sizeof(node));
	   new_node->lchild=NULL;
	   new_node->rchild=NULL;
	   printf("enter data:\n");
	   scanf("%d",&new_node->data);
	   insert(new_node,root);
	   break;	
	   case 2:
	   	inorder(root);
	   	break;
	   	case 3:
	   		preorder(root);
	   		break;
	   		case 4:
	   			postorder(root);
	   			break;
	   
	   }	
	}
	
}
