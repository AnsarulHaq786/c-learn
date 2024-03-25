//Adding 3*3 matrix using Pointer
#include<stdio.h>
int main()
{
	int mat1[3][3],mat2[3][3],i,j,mat3[3][3]; // create 2D array of 3*3 matrix
	printf("Enter elements of matrix 1\n"); // prompt user to input elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(mat1+i)+j)); // input elements of matrix 1
		}
	}
	printf("Enter elements of matrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(mat2+i)+j)); // input elements of matrix 2
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			*(*(mat3+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j); // addition of two elements of respective row and column using pointer
			printf("%d\t",*(*(mat3+i)+j)); // display each element of column in tab
		}
		printf("\n"); // diplay each element of rows in new line
	}
	return 0;
}