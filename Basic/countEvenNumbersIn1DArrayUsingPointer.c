//count even number in array of n numbers
#include<stdio.h>
int countEven(int *,int);
int main()
{
	int data[100],n,i,result;
	printf("Enter number of inputs:");
	scanf("%d",&n);
	printf("Enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	result=countEven(data,n);
	printf("Even count=%d",result);
	return 0;
	
}
int countEven(int *ptr_array,int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(*(ptr_array+i)%2==0)
		{
			count++;
		}
	}
	return count;
}