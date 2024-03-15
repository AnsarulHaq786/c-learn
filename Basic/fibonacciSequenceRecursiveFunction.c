//fibonacci term using recursive function
#include<stdio.h>
int fibo(int); //function declaration/prototyping
int main()
{
	int n,result; //variable declaration int type
	printf("Enter the position of term that should be printed(nth):");
	scanf("%d",&n);
	result=fibo(n);// function calling and passing value stored in n and storing returned value into result variable
	printf("%d\t",result); // display result in console
	return 0; // end program with no error
}
int fibo(int n)
{
	if(n==0) // compare if value of n is equal to 0 or not
	return(0);
	else if(n==1)// compare if value of n is equal to 1 or not
	return(1);
	else
	return (fibo(n-1)+fibo(n-2)); // return sum of 2 previous values in function
}