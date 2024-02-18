/*
N E P A L
N E P A
N E P
N E
N
*/
#include<stdio.h>
int main()
{
	int i,j;
	char arr[]={'N','E','P','A','L'};
    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c ",arr[j]);
        }
        printf("\n");
    }
	return  0;
}