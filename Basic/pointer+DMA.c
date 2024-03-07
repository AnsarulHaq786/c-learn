// sum of money in different bank account that user own
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *data,n,i,sum=0;
	printf("Enter total no of accounts you own:");
	scanf("%d",&n);
	data=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\nEnter balance in account %d :",i+1);
		scanf("%d",data+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(data+i);
	}
	printf("Sum=%d",sum);
	free(data);
	return 0;
}