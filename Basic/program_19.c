//Library function as variable
#include<stdio.h>
#include<string.h>
int main()
{
	char printf[]="hello world!";
	puts(printf);
	/*
	char break[]="hello world!"; //this does not work ->jump statement function
	puts(printf);	
	*/
	return 0;
}