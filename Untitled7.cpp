#include<stdio.h>

int q[10][10],i,j,k,l,n;


int main()
{
	int c;
	printf("enter order:\n");
	scanf("%d",&n);
	/*filling zero in all entries*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			q[i][j]=0;
		}
	}
	/* printing possible configuration */
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(q[i][j]==1)
			printf("Q\t");
			else
			printf("-\t");
		}
		printf("\n");
	}
}
