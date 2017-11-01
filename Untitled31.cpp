#include<stdio.h>

main()
{
	int a[50],i,sum=0;

for(i=0;i<50;i++)
{
	scanf("%d",&a[i]);
	sum+=a[i];
	printf("sum is :%d\n",sum);
}	
}
