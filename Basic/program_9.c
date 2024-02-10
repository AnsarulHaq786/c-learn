#include<stdio.h>
#include<stdlib.h>
float sum(float,float);
float diff(float,float);
float mul(float,float);
float divi(float,float);
int main()
{
	int ch;
	float num1,num2;
	printf("**Menu**\n");
	printf("1.Sum\n");
	printf("2.Difference\n");
	printf("3.Product\n");
	printf("4.Division\n");
	printf("5.Do it all from above\n");
	printf("6.Exit\n:");
	scanf("%d",&ch);
	if(ch>0 && ch<6)
	{
		printf("Enter any two number\n");
		scanf("%f%f",&num1,&num2);
	}
	switch(ch)
	{
		case 1:		
			printf("Sum=%f",sum(num1,num2));
		break;
		case 2:
			printf("Difference=%f",diff(num1,num2));
		break;
		case 3:
			printf("Product=%f",mul(num1,num2));
		break;
		case 4:
			printf("Division=%f",div(num1,num2));
		break;
		case 5:
			printf("Sum=%f\n",sum(num1,num2));
			printf("Difference=%f\n",diff(num1,num2));
			printf("Product=%f\n",mul(num1,num2));
			printf("Division=%f\n",divi(num1,num2));
		break;
		case 6:
			exit(0);
		break;
		default:
			printf("Invalid choice!");
		break;		
	}
	return 0;		
}
float sum(float n1,float n2)
{
return n1+n2;	
}
float diff(float n1,float n2)
{
return n1-n2;	
}
float mul(float n1,float n2)
{
return n1*n2;	
}
float divi(float n1,float n2)
{
return n1/n2;	
}