//swapping numbers call by value
#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping\na=%d\nb=%d",a,b);
	swap(a,b);
	printf("\nAfter swapping\na=%d\nb=%d",a,b);
	return 0;
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}