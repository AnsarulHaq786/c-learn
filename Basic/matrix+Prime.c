// Total no of prime numbers in a 3*3 matrix
#include<stdio.h>
int main ()
{
	int mat[3][3],i,j,k,count,total=0,n;
	printf("Enter the nine elements of a matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The elements in given matrix are prime\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			n=mat[i][j];
			count=0;
			for(k=1;k<n;k++)
			{	
				if(n%k==0)	
				{
					count++;	
				}
			}
			if(count==1)
			{
				total++;	
			}
		}
	}
	printf("Total number of prime in the matrix=%d",total);					

}