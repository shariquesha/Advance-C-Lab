#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

    FILE *fp;
	char s,ch;
	int i,j;
void print()
{
	system("cls");
	i=j=0;
	for(int k=0;k<50;k++)
	printf("*");
	printf("\n");
	while(fscanf(fp,"%c",&s)!=EOF)
	{
      if(j<=5)
      {
      	if(s=='\n')
      	j++;
      	if(i==0)
		printf("* ");
		
		if(s=='\n')
		{
			printf("%c",s);
		 printf("* ");
		 
		}
		else 
		printf("%c",s);
		i++;
      }
      else
      {
      	for(int k=0;k<50;k++)
      	printf("*");
      	printf("\nenter n for next page\n");
      	ch=getch();
      	if(ch=='n')
      	print();
      }
		
	}
}
int main()
{
	fp=fopen("a.txt","r");
	printf("\n");
    print();
	fclose(fp);
}
