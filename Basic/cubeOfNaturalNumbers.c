// Sequence of Cube of numbers between given range
#include<stdio.h> //uses->printf and scanf function
#include<math.h> // for the use of pow function in line 14
int main()
{
    int n=0,a,b,i;
    printf("Enter range i,e a to b: \n");
    scanf("%d%d",&a,&b); //input the lower and upper limit at the address of a and b
    printf("The cube of numbers within range are:\n ");
    if(a<=b) // limit check to avoid infinity loop
    {
        for (i=a;i<=b;i++) // run the loop in between the range
        {
            n=pow(i,3); // assign cube of each digit
            printf("%d\t",n); //display cubed output
        }
    }
    return 0; // terminate program with no error message
}