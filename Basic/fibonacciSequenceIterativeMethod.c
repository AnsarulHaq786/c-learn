// Fibonacci sequence using iteration method
#include<stdio.h> //preprocessor directive
int main() //main function (when code is compliled this function execute first)
{
	int i,n,t1=0,t2=1,t3; // variable declaration
	printf("Enter limit to print fibonacci sequence(n):"); //Asks user for limit of the sequence
	scanf("%d",&n); // input entered value at the address of n variable
	if(n>=1)
	printf("%d\t",t1); // display first term of the sequence
	if(n>=2)
	printf("%d\t",t2); // display second term of the sequence
	for(i=0;i<n-2;i++)
	{
	t3=t1+t2; // assign sum of previous two terms in t3 variable
	printf("%d\t",t3); // display value stored in t3 after each iteration
	t1=t2; // assign variable of preceeding term into the following variable
	t2=t3;
	}
	return(0); // executes program with zero error
}