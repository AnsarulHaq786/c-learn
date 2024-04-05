#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **student; // student variable is to set to 2D array
	//[][]-> first for the no of students and second for the length of name of student 
	int n,l,i;
	printf("Enter no of student:");
	scanf("%d",&n);
	student=(char **)calloc(n,sizeof(char *)); // memory size allocation for no of students
	for(i=0;i<n;i++)
	{
		printf("Enter length of name of %d student:",i+1);
		scanf("%d",&l);
		student[i]=(char *)calloc(l+1,sizeof(char)); // memory size allocation for length of name of each student
		// l+1 size is set where l for string entered by user while 1 for termination character assumption i.e '\0'
		printf("Enter name:");
		scanf("%s",student[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",student[i]);
	}
	return 0;
}