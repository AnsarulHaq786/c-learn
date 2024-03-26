// check palindrome number and prompt user again
#include<stdio.h>
int main()
{
	int ext,rev,num,org,i,n;
	do
	{
		rev=0; //reset value of rev everytime when enter loop
		printf("Enter any number:"); //prompt user any number
		scanf("%d",&num); //input value at num variable
		org=num; //assign org to num to secure identity
		while(num!=0) //run loop unless num is not equal to 0
		{// manipulation of num variable
			ext=num%10; //extracts last digit from number
			rev=rev*10+ext; //rewrite number from each decimal place in backward
			num=num/10; //assign num variable removing last digit from number
		}
		if(org==rev) // check if entered number is equal to reversed number or not
		{
			printf("%d is Palindrome Number",org);
		}
		else
		{
			printf("%d is Not palindrome Number",org);
		}
		printf("\nWant to check for another number?\nPress\n'1' for Yes\n'0' for No:");
		scanf("%d",&n); // read user choice
	}while(n!=0); // if choice is no then loop ends
	return 0;
}