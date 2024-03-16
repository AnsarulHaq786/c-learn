// calculate gcd of any two numbers
#include<stdio.h>
int gcd(int, int);
int main()
{
	int n1,n2,temp;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&n1,&n2);
	if(n2>n1)
	{
		temp=n1;
		n1=n2;
		n2=temp;
	}
	printf("GCD(%d,%d)=%d",n1,n2,gcd(n1,n2));
	return 0;
}
int gcd(int n1,int n2)
{
	int q,r;
	while((n1%n2)!=0)
	{
		q=n1/n2;
		r=n1%n2;
		n1=n2;
		n2=r;	
	}
	return n2;
}