//Greatest amoung n numbers
#include<stdio.h>
int main()
{
	int num[100],max,i,n; // num array with 100 maximum size for storing integer value
	printf("Enter the quantity of numbers:");
	scanf("%d",&n);// count of different numbers
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]); // input n numbers in array from index 0 to n-1
	}
	max=num[0]; // assgin value of first index of array as maximum
	for(i=1;i<n;i++)
	{
		if(num[i]>max) // compare if other number in the upcomming index is greater than assigned value
		{
			max=num[i];// if yes assign that value to max
		}
	}
	printf("Largest number=%d",max);// display largest number in console
	return 0;
}