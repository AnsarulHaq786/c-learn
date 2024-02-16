// Sequence of Cube of numbers between given range
#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,a,b,i;
    printf("Enter range i,e a to b: \n");
    scanf("%d%d",&a,&b);
    printf("The cube of numbers within range are:\n ");
    if(a<=b)
    {
        for (i=a;i<=b;i++)
        {
            n=pow(i,3);
            printf("%d\t",n);
        }
    }
    return 0;
}