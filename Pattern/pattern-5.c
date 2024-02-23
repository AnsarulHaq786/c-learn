/*
x^1/y^4 - x^9/x^16 + x^25/y^36 ------n th term
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,y,i,xpow,ypow,sign=1,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("\nEnter value of x and y:\n");
	scanf("%d%d",&x,&y);
	for(i=0;i<n;i++)
	{
		xpow=pow(2*i+1,2);
		ypow=pow(2*i+2,2);
		sum=sum+sign*(pow(x,xpow)/pow(y,ypow));
		if(sign==+1)
		{
			printf("+%d^%d/%d^%d",x,xpow,y,ypow);
		}
		else
		{
				printf("-%d^%d/%d^%d",x,xpow,y,ypow);	
		}
		sign=-1*sign;
	}
	printf("\nSum=%d",sum);
	return 0;
}