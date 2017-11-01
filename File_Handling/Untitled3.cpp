#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1,*f2,*f3;
	char s[100][100],t[100];
	int i=0;
	f1=fopen("record.txt","r");
		while(fgets(&s[i][0],19,f1)!=NULL)
	  {
	  	i++;
	  }
	  for(int k=0;k<i;k++)
	  {
	    for(int j=0;j<i;j++)
	    {
	  	  if(strcmp(&s[j][0],&s[j+1][0])>0)
	  	   {
	  		  strcpy(t,&s[j][0]);
	  		  strcpy(&s[j][0],&s[j+1][0]);
	  		  strcpy(&s[j+1][0],t);
	  	   }
	     }
	  }
	  for(int j=0;j<=i;j++)
	  {
	  	printf("%s\n",&s[j][0]);
	  }
      fclose(f1);
}
