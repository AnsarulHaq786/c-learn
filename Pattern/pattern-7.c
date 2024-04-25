/*
        r
      gra
    ogram
  rogramm
programme

*/
#include<stdio.h>
int main()
{
	int i,j,k;
	char arr[]="programme";
	for(i=0;i<5;i++)
	{
		for(k=8-2*i;k>0;k--)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			k=4+j-i;
			printf("%c",arr[k]);
		}
		printf("\n");
	}
	return 0;
}