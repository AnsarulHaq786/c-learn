//Bitwise operation
/*
	Bitwise operation follow the following steps
	step1: convert given number systems digit into binary,
	step2: apply the repective operation on each parallel bit i.e in the form of 0's and 1's,
	step3: for AND 0&0->0, 0&1->0, 1&0->0, 1&1->1,
		   for OR 0|0->0, 0|1->1, 1|0->1, 1|1->1,
	step4: convert the output binary digit into data type used,
	step5: Display result.
*/
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&num1,&num2);
	printf("Bit wise AND'ing'\ni.e %d&%d=%d\n",num1,num2,num1&num2);
	printf("Bit wise OR'ing'\ni.e %d|%d=%d\n",num1,num2,num1|num2);
	return 0;	
}