// display details of only students whose roll no is less than 5
#include<stdio.h>
struct student{
	int roll;
	char name[30];
}std[100];
int main()
{
	int n,i,j;
	struct student temp;
	printf("Enter number of student:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter roll and name of student %d\n",i+1);
		scanf("%d",&std[i].roll);
		scanf("%s",std[i].name);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(std[i].name,std[j].name)>0)
			{
				temp=std[i];
				std[i]=std[j];
				std[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(std[i].roll<5)
		{
			printf("%d\t%s\n",std[i].roll,std[i].name);
		}
	}
	return 0;
}
