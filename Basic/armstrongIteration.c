//Armstrong number from 1 to 1000
#include<stdio.h>
#include<math.h>
int main()
{
	int i,count,org,temp,ext,res,num,lower,upper;
    printf("Enter lower and upper limit:");
    scanf("%d%d",&lower,&upper);
    if(upper>lower)
    {
        for(i=lower;i<=upper;i++)
        {
            org=i;
            temp=i;
            count=0;
            while(temp!=0)
            {
                temp=temp/10;
                count++;
            }
            res=0;
            temp=i; // reset temp to i so that i remain same everytime inside loop
            while(temp!=0)
            {
                ext=temp%10;
                res+=pow(ext,count);
                temp=temp/10;
            }
            if(org==res)
            {
                printf("%d\t",org);
            }	
        }
    }
    else
    {
        printf("Lower limit is greater than upper limit\nProgram terminated sucessfully");
    }
    return 0;
}