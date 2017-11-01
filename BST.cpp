//Binary search tree INSERTION,DELETION,INORDER,POSTORDER,PREORDER traversals
#include<stdio.h>
#include<stdlib.h>
struct bst
{
	int data;
	struct bst *left;
	struct bst *right;
}*node,*p,*p1,*q,*r,*s,*header;
void insright(int);
void insleft(int);
void create_BST();
void preorder();
void inorder(struct bst *);
void postorder(struct bst *);
void preorder(struct bst *);
void deletion(int);
int main()
{
	int n,k,node;
	printf("1-create_BST\n2-Inorder Traversal\n3-Preorder traversal\n4-Post Order\n5-Deletion\n6-Exit\n");
	while(1)
	{
		printf("\nenter your choice:\n");
		scanf("%d",&k);
		switch(k)
		{
			case 1:
					create_BST();
					printf("Binary Search Tree is formed\n");
					break;
					case 2:
						p=header;
						printf("Inorder traversal is :\n");
						inorder(p);
						break;
						case 3:
							p=header;
							printf("Preorder traversal is :\n");
							preorder(p);
							break;
							
							case 4:
								p=header;
								printf("Postorder traversal is :\n");
								postorder(p);
								break;
								case 5:
									printf("enter node to be deleted:\n");
									scanf("%d",&node);
									p=header;
									deletion(node);
									printf("node is deleted\n");
									break;
					case 6:
						return 0;
		}
	}
}
void create_BST()
{
	int num,n;
	printf("Enter no. of data:\n");
    scanf("%d",&n);
    node=(struct bst*)malloc(sizeof(struct bst));
	printf("Enter data:\n");
	scanf("%d",&node->data);
	node->left=NULL;
	node->right=NULL;
	header=node;
	for(int i=0;i<n-1;i++)
	{
		p=header;
		sh:printf("enter data:\n");
		scanf("%d",&num);
		if(p->data==num)
		{
			goto sh;
			i--;
		}
		else if(p->data<num)
		insright(num);
		else
		insleft(num);
	}
}

void insright(int num)
{
	p=p->right;
	if(p==NULL)
	{
		p=(struct bst*)malloc(sizeof(struct bst));
		p->data=num;
		p->left=NULL;
		p->right=NULL;
	}
	else
	    if(num>p->data)
		insright(num);
		else
		insleft(num);
}
void insleft(int num)
{
	p=p->left;
	if(p==NULL)
	{
		p=(struct bst*)malloc(sizeof(struct bst));
		p->data=num;
		p->left=NULL;
		p->right=NULL;
	}
	else
	    if(num>p->data)
		insright(num);
		else
		insleft(num);
}
void inorder(struct bst* p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d\t",p->data);
		inorder(p->right);
	}
}
void postorder(struct bst* p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d\t",p->data);
	}
}
void preorder(struct bst *p)
{
	if(p!=NULL)
	{
		preorder(p->left);
		printf("%d\t",p->data);
		preorder(p->right);
	}
}
void deletion(int node)
{
	printf("deletion function executed\n");
	printf("data=%d",p->data);
	if(p->data!=node)
	{
		printf("finding node\n");
		if(p->data<node)
		{
			printf("right subtree\n");
			p=p->right;
			deletion(node);
		}
		else
		{
			printf("left subtree\n");
			p=p->left;
			deletion(node);
		}
	}
	else
	{
		printf("node found\n");
		if(p->left==NULL&&p->right==NULL)
		{
			printf("node has no child\n");
			p=NULL;
		}
				
			else if(p->left==NULL||p->right==NULL)
			{
				printf("node has at least one child\n");
				if(p->left==NULL)
				{printf("node has right child\n");
					p=p->right;
					p->right=NULL;
					p->left=NULL;
				}
				else
				{
					printf("node has left child\n");
					p=p->left;
					p->right=NULL;
					p->left=NULL;
				}
				
			}
			else if (p->left!=NULL&&p->right!=NULL)
			{
				printf("node have both child\n");
				p1=p;
				p=p->right;
				r=p;
				while(p->left!=NULL)
				p=p->left;
				q=p;
				p1=q;
				r->left=p->right;
				
			}
	}
}
