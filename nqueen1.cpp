//N queen
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,l,a[50][50],temp,n,count=0,b1,b2;
	printf("enter order\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				for(l=0;l<n;l++)
				{
					if(a[i][j]==0)
					count++;
				}
			}

			if(a[j][i]!=0&&count!=n*n)
			{
		      a[j][i]=1;
			  b1=i+j;b2=i-j;
		     for(k=0;k<n;k++)
		       {
		     	if(k!=j)
		     	a[k][i]=0;
		     	if(k!=i)
		     	a[j][k]=0;
			   }
			}
		   else break;
		    
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			printf("\tQ");
			else
			printf("\t-");
		}
	}
	printf("\n%d",count);
	getch();
}
