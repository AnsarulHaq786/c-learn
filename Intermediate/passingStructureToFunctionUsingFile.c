#include<stdio.h>
struct emp{
	char name[20];
	int salary;
}s[2];
void Max(struct emp s[2])
{
	int max=s[0].salary,i;
	for(i=0;i<2;i++)
	{
		if(s[i].salary>max)
		{
			max=s[i].salary;
		}
	}
	for(i=0;i<2;i++)
	{
		if(s[i].salary==max)
		{
			printf("%s\t%d",s[i].name,s[i].salary);
		}	
	}
}
int main()
{
	int i;
	FILE *fp;
	fp=fopen("emp.txt","w+");
	for(i=0;i<2;i++)
	{
		printf("Enter name and salary of employee%d\n",i+1);
		scanf("%s%d",s[i].name,&s[i].salary);
	}
	fwrite(&s,sizeof(s),2,fp);
	
	rewind(fp);
	fread(&s,sizeof(s),2,fp);
	Max(s);
	fclose(fp);
	return 0;
}
