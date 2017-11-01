#include<stdio.h>

int a[10][10],i,j,k,l,n;

void move(int i,int j)
{
	int temp;
	while(1)
	{
		if(i==n-1)
		  n=0;
		 temp=a[i][j];
		a[i][j]=a[i+1][j];
		a[i+1][j]=temp;
		i++;
		for(k=0;k<n;k++)
	{
		for(l=0;l<n;l++)
		{
			if(a[i][j]==1)
			printf("S\t");
			else
			printf(" \t");
		}
		printf("\n");
	}

	}
	
}

int main()
{
	printf("enter order:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
		a[0][1]=1;
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			printf("S\t");
			else
			printf(" \t");
		}
		printf("\n");
	}
	move(0,1);
}
