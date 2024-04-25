#include<stdio.h>
int combination(int ,int );
int factorial(int);
int main()
{
    int n,r,nCr;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of r");
    scanf("%d",&r);
    nCr=combination(n,r);
    printf("P(%d,%d)=%d",n,r,nCr);
    return 0;
}
int combination(int n,int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int factorial(int n)
{
    int i,fact=1;
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}