// check if the number is divisible by 1,2,3... 10
#include<stdio.h>
void divisible(int);
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    divisible(num);
    return 0;
}
void divisible(int num)
{
    int i;
   for(i=1;i<=10;i++)
   {
        if(num%i==0)
    {
        printf("%d is divisible by %d\n",num,i);
    }
   }
}