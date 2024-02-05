// Fibonacci sequence using iteration method
#include<stdio.h>
int main()
{
	int i,n,t1=0,t2=1,t3;
	printf("Enter limit to print fibonacci sequence(n):");
	scanf("%d",&n);
	if(n>=1)
	printf("%d\t",t1);
	if(n>=2)
	printf("%d\t",t2);
	for(i=0;i<n-2;i++)
	{
	t3=t1+t2;
	printf("%d\t",t3);
	t1=t2;
	t2=t3;
	}
	return(0);
}