#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a[15][15],i,j,k,l,n,temp=0,count;
	srand(time(NULL));
	printf("enter order:");
	scanf("\n%d",&n);
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
   	getch();
   }
   
