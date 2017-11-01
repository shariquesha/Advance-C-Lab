#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
main()
{
    char c,p;
	int a[50][50],b[50][50],i,j,k,l,flag=0,n,temp,count=0;
	srand(time(NULL));
	printf("want to play game\npress any key for for continue and n for exit\n");
	p=getch();
	if(p=='n')
	return 0;
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
   	
  for(k=0;k<100;k++)
	{
       	
	   for(i=0;i<n;i++)
		 {
			for(j=0;j<n;j++)
			{
				if(a[i][j]==0)
			  {
			  	c=getch();
		       if(c=='w'&&i>0)
				{
					temp=a[i][j];
					a[i][j]=a[i-1][j];
					a[i-1][j]=temp;system("cls");
					
				}
			   else if(c=='w'&&i==0)
				{
					system("cls");
				  printf("\noperation can't be done !");
		
				}
				
			    else if(c=='a'&&j>0)
				{
					temp=a[i][j];
					a[i][j]=a[i][j-1];
					a[i][j-1]=temp;system("cls");
				}
			   else if(c=='a'&&j==0)
				{
					system("cls");
						printf("\noperation can't be done!");
				}
				
				else if(c=='d'&&j<n-1)
				{
					temp=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=temp;system("cls");break;
					
				}
				else if(c=='d'&&j==n-1)
				{
					system("cls");
						printf("\noperation can't be done!");
				}
				
				else if (c=='s'&&i<n-1)
				{
					temp=a[i][j];
					a[i][j]=a[i+1][j];
					a[i+1][j]=temp;system("cls");
				}
			    
				else if(c=='s'&&i==n-1)
				{
					system("cls");
						printf("\noperation can't be done !");
				}
				
	            else if(c=='E')
	             {
	             	  system("cls");
	             	  printf("do you want to exit?\t press E-key other wise N-key");
	             	  p=getch();
	             	  if(p=='e')
	             	  return 0;
	             	  
	             }
	             else 
	             system("cls");
	             printf("\nERROR enter valid key\n");
			
	

              } 
		      
         	}
         }     
		for(i=0;i<n;i++)
		 {
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[i][j]);
			}
		 }
		 for(i=0;i<n;i++)
		 {
		 	for(j=0;j<n;j++)
		 	{
		 	 if(a[i][j]+1==a[i][j+1])
			  flag++;	
		 	}
		 }
		 if(flag==n*n)
		 {
		 printf("you won :)\n");
		 printf("want to play again?\npress y to yes and n to no\n");
		 p=getch();
		 if(p=='n')
		 break;
		 else continue;
		 }
		 else
		 flag=0;
		 

	}
	  	getch();
}
