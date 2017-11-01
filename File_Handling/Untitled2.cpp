#include<stdio.h>

main()
{
	
	FILE *f1,*f2;
	char ch,ch1,l=0,n=0;
	f1=fopen("b.txt","r");
	f2=fopen("c.txt","a");
		while(fscanf(f1,"%c",&ch)!=EOF)
       {
	       fprintf(f2,"%c",ch);
       }
	
	fclose(f1);
	fclose(f2);
}
