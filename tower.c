#include<stdio.h>

void tower(int num,char fpeg,char tpeg,char aupeg )
{
	if(num==1)
	{
		printf("move disk %d from peg %c to peg %c\n",num,fpeg,tpeg);
		return;
	}
	tower(num-1,fpeg,aupeg,tpeg);
	printf("move disk %d from peg %c to peg %c\n",num,fpeg,tpeg);
	tower(num-1,aupeg,tpeg,fpeg);
}
int main()
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);
	tower(n,'A','C','B');
	return 0;
}
