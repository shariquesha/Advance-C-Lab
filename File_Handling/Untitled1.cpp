#include<stdio.h>

main()
{
	FILE *fp;
	char ch;
	int l=1;
	fp=fopen("a.txt","r");
	printf("1.\t");
	while(fscanf(fp,"%c",&ch)!=EOF)
	{
		printf("%c",ch);
		if(ch=='\n')
		{
			l++;
			printf("%d\t",l);
		}
	}
	fclose(fp);
}
