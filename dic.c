#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	FILE *fp,*fp1;
	char ch1,ch2[10],t[10],ch;
	int n=0,i=0,j,k;
	fp=fopen("1.txt","r");
	fp1=fopen("2.txt","w");
	while(1)
	{
		ch=fgetc(fp);
	   if(ch =='\t')
	   n++;
	   if(ch==EOF)
	   break;
	}
	while(fscanf(fp,"%s",ch1)!=EOF)
	{
		
		ch2[i]=ch1;
		i++;
	}
	for(j=0;j<i-1;j++)
	{
		for(k=0;k<i-1;k++)
		{
			if(strcmp(ch2[k-1],ch2[k])>0)
			{
				strcpy(t,ch2[j-1]);
				strcpy(ch2[j-1],ch2[j]);
				strcpy(ch2[j],ch2[j-1]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		fprintf(fp1,"%s",ch2[i]);
	}
	return 0;
}
