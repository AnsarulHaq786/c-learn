// check palindrome number and prompt user again
#include<stdio.h>
int main()
{
	int ext,rev,num,org,i,n;
	do
	{
		rev=0;
		printf("Enter any number:");
		scanf("%d",&num);
		org=num;
		while(num!=0)
		{
			ext=num%10;
			rev=rev*10+ext;
			num=num/10;
		}
		if(org==rev)
		{
			printf("%d is Palindrome Number",org);
		}
		else
		{
			printf("%d is Not palindrome Number",org);
		}
		printf("\nWant to check for another number?\nPress\n'1' for Yes\n'0' for No:");
		scanf("%d",&n);
	}while(n!=0);
}