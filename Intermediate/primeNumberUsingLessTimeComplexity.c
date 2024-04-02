// Decrease time complexity to find any number is prime or not
#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0,i;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=2;i<(sqrt(num));i++) // square root of a number
    {
        if(num%2==0)
        count++;
    }
    if(count==0)
    {
        printf("%d is prime",num);
    }
    return 0;
}