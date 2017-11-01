#include<stdio.h>
#include<string.h>

struct date
{
	int d,m,y;
};
struct employee
{
    int empcode;
	char empname[20];
	struct date join_date;
	float salary;
}p[100];
	FILE *f1,*f2;
	char ch[20];
	int i=1,j=0,temp=0;
void swap(int i)
{				temp=p[i].empcode;
				p[i].empcode=p[i+1].empcode;
				p[i+1].empcode=temp;
				strcpy(ch,p[i].empname);
				strcpy(p[i].empname,p[i+1].empname);
				strcpy(p[i+1].empname,ch);
				temp=p[i].join_date.d;
				p[i].join_date.d=p[i+1].join_date.d;
				p[i+1].join_date.d=temp;
				temp=p[i].join_date.m;
				p[i].join_date.m=p[i+1].join_date.m;
				p[i+1].join_date.m=temp;
				temp=p[i].join_date.y;
				p[i].join_date.y=p[i+1].join_date.y;
				p[i+1].join_date.y=temp;
				temp=p[i].salary;
				p[i].salary=p[i+1].salary;
				p[i+1].salary=temp;
}
int main()
{

	f1=fopen("employee.txt","r");
	f2=fopen("newemployee.txt","w");
	while(fgetc(f1)!=EOF)
	{
		if(i==1)
		fscanf(f1,"%d",&p[j].empcode);
		if(i==2)
		fscanf(f1,"%s",p[j].empname);
		if(i==3)
		fscanf(f1,"%d",&p[j].join_date.d);
		if(i==4)
		fscanf(f1,"%d",&p[j].join_date.m);
		if(i==5)
		fscanf(f1,"%d",&p[j].join_date.y);
		if(i==6)
		{
			fscanf(f1,"%f",&p[j].salary);
			i=0;
			j++;
		}
		i++;
    }
	printf("Emp_ID\tEmp_name  DOJ\t\tSalary\n............................................\n");
			for(int k=0;k<j;k++)
	{
		printf("%d\t%s\t%d %d %d\t%f\n",p[k].empcode,p[k].empname,p[k].join_date.d,p[k].join_date.m,p[k].join_date.y,p[k].salary);
	}
	for(int k=0;k<j;k++)
	{
		for(i=0;i<j-1;i++)
		{
			if(p[i].join_date.y>p[i+1].join_date.y)
			{
				swap(i);
			}
			else if(p[i].join_date.y==p[i+1].join_date.y)
			{
				if(p[i].join_date.m>p[i+1].join_date.m)
				{
					swap(i);
				}
				else if(p[i].join_date.m==p[i+1].join_date.m)
				{
					if(p[i].join_date.d>p[i+1].join_date.d)
					{
						swap(i);
					}
				}
			}
		}
	}
	printf("\n\n\t..SORTED RECORD..\n\n");
	printf("Emp_ID\tEmp_name  DOJ\t\tSalary\n............................................\n");
	fprintf(f2,"\n\n\t..SORTED RECORD..\n\n");
	fprintf(f2,"Emp_ID\tEmp_name  DOJ\t\tSalary\n............................................\n");

				for(int k=0;k<j;k++)
	{
		printf("%d\t%s\t%d %d %d\t%f\n",p[k].empcode,p[k].empname,p[k].join_date.d,p[k].join_date.m,p[k].join_date.y,p[k].salary);
		fprintf(f2,"%d\t%s\t%d %d %d\t%f\n",p[k].empcode,p[k].empname,p[k].join_date.d,p[k].join_date.m,p[k].join_date.y,p[k].salary);
	}

	fclose(f1);
	fclose(f2);
}
