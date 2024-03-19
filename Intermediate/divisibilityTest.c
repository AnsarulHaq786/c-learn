// check if the number is divisible by 1,2,3... 10
#include<stdio.h> // preprocessor directive: include printf and scanf functions
void divisible(int); //function prototyping with no return but value passing attribute
int main()
{
    int num; //variable declaration num to store number entered by user
    printf("Enter any number:"); //prompt user to enter any number
    scanf("%d",&num); // store input value into address of num variable
    divisible(num); // function call with passing value stored in num variable
    return 0;
}
void divisible(int num) //function defination
{
    int i;
   for(i=1;i<=10;i++)
   {
        if(num%i==0)// check if number is divisible by each value of i or not
    {
        printf("%d is divisible by %d\n",num,i); // Display result only when condition matches
    }
   }
}