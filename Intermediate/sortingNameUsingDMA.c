// Input name of n student and sort them in alphabetical order using DMA
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,n;
	char **data,temp[20]; // temp is for maximum 20 character in name
	printf("Enter no of students:");
	scanf("%d",&n);
	data=(char **)calloc(n,sizeof(char*)); // memory allocation for size of student
	for(i=0;i<n;i++)
	{
		data[i]=(char *)calloc(20,sizeof(char)); // memory allocation for size of name	
		printf("Enter name of student(%d):",i+1);
		scanf("%s",data[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(data[i],data[j])>0)
			{
				strcpy(temp,data[i]);
				strcpy(data[i],data[j]);
				strcpy(data[j],temp);
			}
		}
		printf("%s\n",data[i]);
	}
	free(data);
	return 0;
}