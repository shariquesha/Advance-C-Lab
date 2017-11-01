#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,l,a[50][50],temp,n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				
			a[i][j]=1;
			for(k=0;k<n;k++)
			{
				for(l=0;l<n;l++)
				{
					
                     if(i==0&&j==0)
                   {
                   	 if(j+l<n)
                     {
                     	a[i][j+l]=0;
                     }
                     if(i+k<n)
                    {
                    	 a[i+k][j]=0;
	  	      	         a[i+k][j+l]=0;
                    }
                    
                   }
                     else if(i==0&&j==n-1)
                   {
                     if(j-l>=0)
                     {
                     	a[i][j-l]=0;
                     }
                     if(i+k<n)
                     {
                      a[i+k][j]=0;
	  	      	      a[i+k][j+l]=0;

                     }
                   }
                     else if(i==n-1&&j==0)
                  {
                  	if(j+l<n)
                     {
                     	a[i][j+l]=0;
                     }
                     if(i-k>=0)
                    {
                   	  a[i-k][j]=0;
	  	      	      a[i-k][j-l]=0;

                    }                  
				  }
                     else if(i==n-1&&j==n-1)
                 {
                 	if(j-l>=0)
                     {
                     	a[i][j-l]=0;
                     }
                     if(i-k>=0)
                     {
                     	a[i-k][j]=0;
	  	      	        a[i-k][j-l]=0;
                     }
                 }
                     else if(i==0&&j!=0&&j!=n-1)
                 {
                 	if(j-l>=0)
                     {
                     	a[i][j-l]=0;
                     }
                     if(j+l<n)
                    {
                    	 a[i][j+l]=0;
                    }
                     if(i+k<n)
                     {
                     	a[i+k][j]=0;
	  	      	        a[i+k][j+l]=0;
	  	      	        a[i+k][j-l]=0;
                     }
                 }
                     else if(j==0&&i!=0&&i!=n-1)
                 {
                 	if(i-k>=0)
                     {
                     	a[i-k][j]=0;
					 }   
					 if(i+k<n)
					 {
					   a[i+k][j]=0;
					 }
					 if(j+l<n)
					 {
					  a[i][j+l]=0;
                      a[i+k][j+l]=0;
	  	      	      a[i-k][j+l]=0;
					 }
				 }
				    else if(i==n-1&&j!=0&&j!=n-1)
				 {
				 	if(j-l>=0)
			         a[i][j-l]=0;
			         if(j+l<n)
                     a[i][j+l]=0;
                     if(i-k>=0)
                     {
                      a[i-k][j]=0;
	  	      	      a[i-k][j-l]=0;
	  	      	      a[i-k][j+l]=0;
                     }
				 }
				    else if(j==n-1&&i!=0&&i!=n-1)
				 {
				 	if(i-k>=0)
				     a[i-k][j]=0;
				     if(i+k<n)
                     a[i+k][j]=0;
                     if(j-l>=0)
                     {
                     a[i-k][j-l]=0;
	  	      	     a[i+k][j-l]=0;
	  	      	     a[i][j-l]=0;
                     }
				 }
				    else if(i>0&&j>0&&i>n-1&&j>n-1)
				 {
				 	if(i-k>=0)
				     {
				     	a[i-k][j]=0;
				     }
				     if(i+k>n)
                     {
                     	a[i+k][j]=0;
                     }
                     if(j-l>=0)
                     {
                     	a[i][j-l]=0;
	  	      	        a[i-k][j-l]=0;
	  	      	        a[i+k][j-l]=0;
                     }
	  	      	     if(j+l<n)
	  	      	     {
	  	      	            a[i+k][j+l]=0;
	  	      	            a[i-k][j+l]=0;
	  	      	            a[i][j+l]=0;

	  	      	     }

				}
			}
		}
	 
	  	    
            for(k=0;k<n;k++)
				  {
				    for(l=0;l<n;l++)
				   {
				    if(a[l][k]==1)
				     {
				      printf("%c\t",a[k][l]='Q');
				      break;
					 }
				     else if(a[l][k]==0)
				     printf("%c\t",'-');
				    
                   }
                  }
			}
                  else
                  {
                              for(k=0;k<n;k++)
				  {
				    for(l=0;l<n;l++)
				   {
				    if(a[l][k]==1)
				     {
				      printf("%c\t",a[k][l]='Q');
				      break;
					 }
				     else if(a[l][k]==0)
				     printf("%c\t",'-');
                  break;

               }
        }
    }
}}}
