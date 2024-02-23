//Greatest amoung n numbers
#include<stdio.h>
int main()
{
	int num[100],max,i,n;
	printf("Enter the quantity of numbers:");
	scanf("%d",&n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	printf("Largest number=%d",max);
	return 0;
}