//Round Robbin
#include<stdio.h>
#include<string.h>
struct rr
{
	char s[2];
	int arr;
	int bur;
}a[10];

int main()
{
	char gn[20];
	int i,j=0,k,n,q,gt[20],avg=0,tt=0,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d",a[i].s,&a[i].arr,&a[i].bur);
	}
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t%d\n",a[i].s,a[i].arr,a[i].bur);
	}
	scanf("%d",&q);
	gt[0]=0;
	printf("   ");
	for(k=0;k<n*n;k++)
	{
		
		for(i=0;i<n;i++)
		{
				if(a[i].bur<q&&a[i].bur>0)
				{
					j++;
					tt=tt+a[i].bur;
					gt[j]=tt;
					a[i].bur=a[i].bur-q;
					printf("  %s\t",a[i].s);
				}
				else if(a[i].bur>=q&&a[i].bur>0)
				{
					j++;
					tt=tt+q;
					gt[j]=tt;
					printf("  %s\t",a[i].s);
					a[i].bur=a[i].bur-q;
				}
		}
		
	}
	printf("\n\n");
		for(i=0;i<=j;i++)
	{
		printf("%d\t",gt[i]);
	}
	
}
