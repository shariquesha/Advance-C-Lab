/* N_Queen problem */

#include<stdio.h>


int q[10][10],i,j,k,l,n;

/*checking row for safe placement*/
int row(int i,int j)
{
	for(k=0;k<n;k++)
	{
		if(q[i][k]==1)
		return 0;
		else 
		{
			return 1;
		}
	}
		
}
/*checking diagonal for safe placement*/
int diag(int i,int j)
{
	int a,b,c,d;
	a=b=c=d=i*n+j;
	for(k=0;k<n;k++)
	{
		if(a<n*n-1)
		a=a+n-1;
		if(b>0)
		b=b-n+1;
		if(c<=n*n-1)
		c=c+n+1;
		if(d>0)
		d=d-n-1;
		if(q[a/n][a%n]==1||q[b/n][b%n]==1||q[c/n][c%n]==1||q[d/n][d%n]==1)
		return 0;
	}
	return 1;
}
/*back tracking using reccursion*/
int back_track(int j)
{
	int c=0;
	l=j-1;
	
			for(k=0;k<n;k++)
			{
				
				if(q[k][l]==1)
				{
					
					 q[k][l]=0;
					 k++;
					 
					q[k][l]=1;					
				    row(k,l);
				    
				    diag(k,l);
				    
					/*condition sattisfied for safe placement*/
					if(row(k,l)==1&&diag(k,l)==1)
				       {
				       	    c++;
				       	    if(k==n-1)
				       	    c--;
				       	    break;					
                       }
				       k--;

				}
				
				
			}
				
			if(c==0)
			{
			   back_track(l);
			}
			return l;
}
int main()
{
	int c;
	scanf("%d",&n);
	/*filling zero in all entries*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			q[i][j]=0;
		}
	}
	/*loop for placing queen in each column*/
	for(j=0;j<n;j++)
	{
		c=0;
		for(i=0;i<n;i++)
		{
			row(i,j);
			diag(i,j);
			/*condition sattisfied for safe placement*/
			if(row(i,j)==1&&diag(i,j)==1)
			{
			  q[i][j]=1;
			  c++;
			  i=n;/*breaking inner loop after safe placement of queen*/
			}
		}
		/*back track when any one of column remains queen free*/
		if(c==0)
		{
			j=back_track(j);
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
