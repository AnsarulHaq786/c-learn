#include<stdio.h>
#include<stdlib.h>
void sumToTarget(int [],int,int);
int main()
{
	int n,i,target,*nums;
	printf("Enter total number of inputs:");
	scanf("%d",&n);
	nums=(int *)calloc(n,sizeof(int));
	printf("Enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
	}
	printf("Enter target number:");
	scanf("%d",&target);
	sumToTarget(nums,target,n);
	return 0;
}
void sumToTarget(int numArr[],int target,int n)
{
	int i,j,k,sum;
	for(i=0;i<n;i++)
	{
		if(i!=j)
		{
			for(j=0;j<n;j++)
			{
				if(j!=k)
				{
					for(k=0;k<n;k++)
				{
					sum=0;
					sum+=numArr[i]+numArr[j]+numArr[k];
					if(target==sum)
					{
						printf("Sum of three numbers that ends up being equal to target value\n");
						printf("%d+%d+%d=%d",numArr[i],numArr[j],numArr[k],target);
						exit(0);
					}
				}	
				}	
			}
		}
	}
}