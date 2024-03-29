#include<stdio.h>
#include<stdlib.h>
struct employee{
	char emp_name[20];
	float salary;
	char post[20];
};
int main()
{
	struct employee *emp;
	int i,n;
	printf("Enter no of employees:");
	scanf("%d",&n);
	emp=(struct employee *)calloc(n,sizeof(struct employee));
	for(i=0;i<n;i++)
	{
		printf("Enter Name Salary and Post of employee(%d)\n",i+1);
		scanf("%s%f%s",(emp+i)->emp_name,&(emp+i)->salary,(emp+i)->post);
	}
	printf("Name\t|Salary\t|Post\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%f\t%s\n",(emp+i)->emp_name,(emp+i)->salary,(emp+i)->post);
	}
	free(emp);
	return 0;
}