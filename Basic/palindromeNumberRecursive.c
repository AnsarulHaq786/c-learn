//Palindrome number using recursion function
#include<stdio.h>
int palindrome(int);
int main()
{
	int n,flag;
	printf("Enter any number:");
	scanf("%d",&n);
	flag=palindrome(n);
	if(flag==1)
	printf("%d is palindrome number",n);
	else
	printf("%d is not palindrome number",n);
	return 0;	
}
int palindrome(int num)
{
	int ext,rev=0,org;
	org=num;
	while(num!=0)
	{
		ext=num%10;
		rev=rev*10+ext;
		num=num/10;
	}
	if(rev==org)
	return 1;
	else
	return 7;
}