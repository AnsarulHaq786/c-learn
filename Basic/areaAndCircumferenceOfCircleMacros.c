//Input radius of circle and display the area and circumference

#include<stdio.h> //preprocessor directive <stdio.h>:Uses printf,scanf 
#include<math.h> //preprocessor directive <math.h>:Uses pow
#define PI 3.141592 //Macros :Replace PI with 3.141592
int main() //main function :Executes first when program is run
{
	float radius,area,circumference; // Store decimal point value up to 6 bit accuracy
	printf("Enter radius of circle:"); //Display command in console
	scanf("%f",&radius); //Store value in memory address of radius
	area=PI * pow(radius,2); // assign value to area
	circumference=2*PI*radius; // assign value to circumference
	printf("Area of circle=%f\n",area); // Display area in console
	printf("Circumference of circle=%f",circumference); // Display circumference in console
return(0); // Execute code with no error
}
