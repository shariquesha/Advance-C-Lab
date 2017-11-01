#include<stdio.h>

main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("alpha.txt","r");
	f2=fopen("beta.txt","w");
	while(fscanf(f1,"%c",&ch)!=EOF)
	{
		if(ch>=97||ch<=122)
		   	fprintf(f2,"%c",ch-32);
		else
		    fprintf(f2,"%c",ch);
	}
}
