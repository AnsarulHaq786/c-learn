// 2 2 4 6 10 ..... nth term -> prints this pattern(updated fibonacci sequence)
#include<stdio.h>
int fibo(int);
int main()
{
	int i,res,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	res=fibo(i);
	printf("%d\t",res);
	}
}
int fibo(int n)
{
	if(n==0 || n==1)
	{
		return 2;
	}
	else
	{
		return fibo(n-2)+fibo(n-1);
	}
}