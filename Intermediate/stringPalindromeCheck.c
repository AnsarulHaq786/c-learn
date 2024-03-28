#include<stdio.h>
int main()
{
	char word[50];
	int i=0,count=0,flag;
	printf("Enter any word:");
	gets(word);
	while(word[i]!='\0')
	{
		count++;
		i++;
	}
	for(i=0;i<count/2;i++)
	{
		if(word[i]!=word[count-1-i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("Not palindrome!");
	else
	printf("Palindrome!");
	return 0;
}