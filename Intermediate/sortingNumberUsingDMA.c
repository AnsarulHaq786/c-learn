#include<stdio.h>
#include<stdlib.h>
void sorting(int *,int);
int main()
{
	int *data=NULL,n,i;
	printf("Enter the number of inputs:");
	scanf("%d",&n);
	data=(int *)calloc(n,sizeof(int));
	printf("Enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",data+i);
	}
	sorting(data,n);
	printf("After sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(data+i));
	}
	free(data);
	return 0;
}
void sorting(int *ptr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}	
}
