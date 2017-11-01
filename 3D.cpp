
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10][10],i,j,k,n,temp,count=0,l;
	printf("enter order\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
		      a[i][j]=rand()%(n*n);
		      temp=a[i][j];
		      count=0;
		        for(k=0;k<=i;k++)
	          {
	 	                if(i==k)
	 	              {
	 	 	               for(l=0;l<j;l++)
		                   {
			                   if(temp==a[k][l])
			                       {
			  	                       count++;
			                       }
	     	               }
	 
	 	               }
	                    else 
		               {
		 	                  for(l=0;l<n;l++)
		                    {
			                   if(temp==a[k][l])
			                 {
				                  count++;
			                 }
			  
	      	                }

		               } 
			 
	          }


	           if(count==0)	      
		      	printf("%d\t",temp);
		      	else 
				  j--;
		    
		}
	}
	printf("\n\n\n\n\n\nTop view");
	for(i=n-1;i>=0;i--)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	printf("\n\n\n\n\n\n\nSide view");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=n-1;j>=0;j--)
		{
			printf("%d\t",a[i][j]);
		}
	}
}
	
