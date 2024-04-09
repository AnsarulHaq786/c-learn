#include<stdio.h>
int permutation(int ,int );
int factorial(int);
int main()
{
    int n,r,nPr;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of r");
    scanf("%d",&r);
    nPr=permutation(n,r);
    printf("P(%d,%d)=%d",n,r,nPr);
    return 0;
}
int permutation(int n,int r)
{
    return factorial(n)/factorial(n-r);
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