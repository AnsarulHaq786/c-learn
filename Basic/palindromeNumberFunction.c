//Palindrome number using recursion function
#include<stdio.h>
int palindrome(int); //returntype int function with takes integer variable as parameter
//function prototyping
int main()
{
	int n,flag;
	printf("Enter any number:"); // prompt user to input any number
	scanf("%d",&n);
	flag=palindrome(n); // passing n as arguement and saving result to flag variable after function call
	if(flag==1)
	printf("%d is palindrome number",n);
	else
	printf("%d is not palindrome number",n);
	return 0;	
}
int palindrome(int num) // function defination
{
	int ext,rev=0,org;
	org=num; // saving value of number to compare it with original number entered by user
	// num is manipulated therefore data is lost
	while(num!=0)
	{
		ext=num%10; // extract last digit of any number
		rev=rev*10+ext; // basic rule of placing number in decimal number system i.e 1's 10's 100's and soon position
		num=num/10; // remove last digit from number
	}
	if(rev==org) // check if revered number is same as original number
	return 1; // implies the condition inside this function is true
	else
	return 7; // anything else returned other than 1 is considered as condition false alternative
}