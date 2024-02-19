// find largest number amoung n number
// Use of calloc and free function for dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*data,max;  //variable declaration
	printf("Enter number of items:");
	scanf("%d",&n);
	data=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",data+i);
	}
	max=*data;
	for(i=0;i<n;i++)
	{
		if(*(data+i)>max)
		{
			max=*(data+i);
		}
	}
	printf("%d is largest amoung all",max);
	free(data);
	return 0;
}