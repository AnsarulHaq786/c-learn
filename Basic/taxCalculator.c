// Tax calculator based on specific table
#include<stdio.h>
int main()
{
	float in,tax;
	printf("Enter your Income:");
	scanf("%f",&in);
	if(in<10000)
	{
		tax=0;
		printf("Tax amount= Rs %f",tax);
	}
	else if(in<20000)
	{
		tax=(in-9999)*0.1;
		printf("Tax amount= Rs %f",tax);
	}
	else if(in<30000)
	{
		tax=(in-20000)*0.15;
		tax+=10000*0.10;
		printf("Tax amount= Rs %f",tax);
	}
	else if(in<50000)
	{
		tax=(in-30000)*0.20;
		tax+=10000*0.15;
		tax+=10000*0.10;
		printf("Tax amount= Rs %f",tax);
	}
	else
	{
		tax=(in-50000)*0.25;
		tax+=20000*0.20;
		tax+=10000*0.15;
		tax+=10000*0.10;
		printf("Your tax = Rs %f",tax);	
	}
	return 0;
}