//fibonacci term using recursive function
#include<stdio.h>
int fibo(int);
int main()
{
	int n,result;
	printf("Enter the position of term that should be printed(nth):");
	scanf("%d",&n);
	result=fibo(n);
	printf("%d\t",result);
	return 0;
}
int fibo(int n)
{
	if(n==0)
	return(0);
	else if(n==1)
	return(1);
	else
	return (fibo(n-1)+fibo(n-2));
}