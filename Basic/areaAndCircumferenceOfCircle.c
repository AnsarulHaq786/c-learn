//Input radius of circle and display the area and circumference
#include<stdio.h>
#include<math.h>
#define PI 3.141592
int main()
{
	float radius,area,circumference;
	printf("Enter radius of circle:");
	scanf("%f",&radius);
	area=PI * pow(radius,2);
	circumference=2*PI*radius;
	printf("Area of circle=%f\n",area);
	printf("Circumference of circle=%f",circumference);
return(0);
}
