//Adding 3*3 matrix using Pointer
#include<stdio.h>
int main()
{
	int mat1[3][3],mat2[3][3],i,j,mat3[3][3];
	printf("Enter elements of matrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",*((mat1+i)+j));
		}
	}
	printf("Enter elements of matrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",*((mat2+i)+j));
		}
	}
	return 0;
}