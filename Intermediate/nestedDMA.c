#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **student;
	int n,l,i;
	printf("Enter no of student:");
	scanf("%d",&n);
	student=(char **)calloc(n,sizeof(char *));
	for(i=0;i<n;i++)
	{
		printf("Enter length of name of %d student:",i+1);
		scanf("%d",&l);
		student[i]=(char *)calloc(l+1,sizeof(char));
		printf("Enter name:");
		scanf("%s",student[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",student[i]);
	}
	return 0;
}