#include<stdio.h>
int power(int,int);
int main()
{
	int b,p,res;
	printf("Enter base value:");
	scanf("%d",&b);
	printf("Enter power value:");
	scanf("%d",&p);
	res=power(b,p);
	printf("%d^%d=%d",b,p,res);
	return 0;
}
int power(int b,int p)
{
	if(p==0)
	{
		return 1;
	}
	else if(p>0)
	{
		return b*power(b,p-1);
	}
	else
	{
		return 0;
	}
}
