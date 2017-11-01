#include<stdio.h>
#include<string.h>

main()
{
	FILE *f1,*f2,*f3;
	char a[50],b[50];
	f1=fopen("d.txt","r");
	f2=fopen("e.txt","r");
	f3=fopen("final.txt","a");
	while(1)
	{
			fscanf(f1,"%s",a);
			fscanf(f2,"%s",b);
			if(a==NULL&&b==NULL)
			break;
			if(a==NULL&&b!=NULL)
			{
				fscanf(f3,"%s\t",b);
			}
			if(a!=NULL&&b==NULL)
			{
				fscanf(f3,"%s\t",a);
			}
			  strcat(a,b);
			  fprintf(f3,"%s\n",a);
    }
	fclose(f1);
	fclose(f2);
	fclose(f3);
}
