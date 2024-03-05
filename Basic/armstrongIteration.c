//Armstrong number between given range
#include<stdio.h>
#include<math.h>
int main()
{
	int i,count,org,temp,ext,res,num,lower,upper;
    printf("Enter lower and upper limit:");
    scanf("%d%d",&lower,&upper); // read the value of lower and upper limit and store to respective address
    if(upper>lower) // executes the block only if upper limit is greater than lower limit to avoid infinity loop
    {
        for(i=lower;i<=upper;i++)
        {
            org=i; //assign org value of i after each iteration
            temp=i; //assign temp value of i after each iteration
            count=0; // assign count to zero
            while(temp!=0)
            {//count number of digit in i
                temp=temp/10;
                count++;
            }
            res=0;
            temp=i; // reset temp to i so that i remain same everytime inside loop
            while(temp!=0) // runs untill each digit is extracted
            { // calculate sum of all digit raised to the power of number of digit in each value
                ext=temp%10; // extract last digit from i
                res+=pow(ext,count); // store sum of extracted digit raised to the power of number of digit in i
                temp=temp/10; //remove last digit from i
            }
            if(org==res)
            {// check if the number is armstrong or not
                printf("%d\t",org);
            }	
        }
    }
    else
    { // terminate the program instead of getting into infinity loop
        printf("Lower limit is greater than upper limit\nProgram terminated sucessfully");
    }
    return 0;
}