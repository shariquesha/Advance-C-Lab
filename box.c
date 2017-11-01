#include<stdio.h>
#include<conio.h>
main()
{
	int a[50][50],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||i==n-1)
			a[i][j]=196;
			else if(j==0||j==n-1)
		     a[i][j]=179;
		     else
		     a[i][j]=0;
		}
	}
	a[0][0]=218;a[0][n-1]=191;a[n-1][0]=192;a[n-1][n-1]=217;
		for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%c",a[i][j]);
		}
	}
	
	
}
	

