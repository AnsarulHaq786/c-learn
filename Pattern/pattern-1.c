/* PRINT THE PATTERN
    N
   EE
  PPP
 AAAA
LLLLL

*/
#include<stdio.h>
int main()
{
	int i,j,k,spc=4;
	char arr[]={'N','E','P','A','L'};
	for(i=0;i<5;i++)
	{
		for(k=i;k<spc;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{	
			printf("%c",arr[i]);
		}
		printf("\n");
	}
	return  0;
}