#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *data=NULL,n,sum=0,i;
	printf("Enter number of inputs:");
	scanf("%d",&n);
	data=(int *)malloc(n*sizeof(int));
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(data+i));
		sum+=*(data+i);
	}
	printf("Sum=%d",sum);
	free(data);
	return 0;
}