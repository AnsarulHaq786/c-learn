// Sum of n natural number using recursive function
#include<stdio.h>
int sum(int);
int main()
{
	int n,res;
	printf("Enter nth term:");
	scanf("%d",&n);
	res=sum(n);
	printf("sum=%d",res);
	return 0;
}
int sum(int num)
{
	if(num==1)
	{
		return(1);
	}
	else
	{
		return(sum(num-1)+num);
	}
}
