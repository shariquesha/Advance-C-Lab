#include<stdio.h>
#include<string.h>

struct customer
{
	int acc;
	char name[30];
	float bal;
}a[100];
struct trans
{
	int acc;
	char trans_type;
	float amount;
}b[100];
main()
{
	FILE *f1,*f2;
	char s[100];
	int n,m;
	f1=fopen("customer.txt","a+");
	f2=fopen("transactions.txt","a+");
	printf("enter no. of customers:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter account no.,name,balance:\n");
		scanf("%d %s %f",&a[i].acc,a[i].name,&a[i].bal);
		fprintf(f1,"%d\t%s\t%f\n",a[i].acc,a[i].name,a[i].bal);
	}
	fclose(f1);
	f1=fopen("customer.txt","w+");
    printf("enter no. of transactions:\n");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
    	printf("enter account no.,trans_type(d/w indicating diposit/withdrawl),amount:\n");
		scanf("%d %c %f",&b[i].acc,&b[i].trans_type,&b[i].amount);
		fprintf(f2,"%d\t%c\t%f\n",b[i].acc,b[i].trans_type,b[i].amount);
	     for(int j=0;j<n;j++)
	     {
	     	if(a[j].acc==b[i].acc)
	     	{
	     		if(b[i].trans_type=='d')
	     			a[j].bal+=b[i].amount;
	     		else if(b[i].trans_type=='w')
	     			a[j].bal-=b[i].amount;
			}
			fprintf(f1,"%d\t%s\t%f\n",a[j].acc,a[j].name,a[j].bal);
	     }
    }
    fclose(f1);
    fclose(f2);
    f1=fopen("customer.txt","r");
    printf("acc_no.\t\tcustm_name\tbalance\n");
    int i=0;
    while(fscanf(f1,"%s",s)!=EOF)
    	{
    		printf("%s\t",s);
    		i++;
    		if(i==3)
    		{
    			printf("\n");
    			i=0;
    		}
    	}
    	fclose(f1);
}
