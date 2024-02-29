/*
	1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
 
 */
 #include<stdio.h>
 int main()
 {
 	int value=1,i,j,k;
 	for(i=0;i<5;i++)
 	{
 		for(k=4;k>i;k--)
 		{
 			printf(" ");		
		}
 		for(j=0;j<i+1;j++)
 		{
 			if(i==0 || j==0)
 			{
 				printf("%d",value);		
			}
			else
			{
				value=value*(i-j+1)/j;
				printf("%2d",value);
			}
		}
		printf("\n");
	}
	return 0;
 }
 