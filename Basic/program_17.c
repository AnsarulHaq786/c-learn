/*
1	2	3	4	5
	2	3	4
		3
*/
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<6-i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
			for(k=0;k<i+1;k++)
		{
			printf("\t");
		}
	}
}