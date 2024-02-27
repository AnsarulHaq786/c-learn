//Array of Sum of previous term and self
//Concept used DMA, pointer,return value and pass value,User defind function,recursion function
#include<stdio.h>
#include<stdlib.h>
int* runningSum(int*,int,int*);
int main()
{
	int* nums;
	int i,numsSize,returnSize; 
	printf("Enter the number of input:");
	scanf("%d",&numsSize);
	nums=(int *)malloc(numsSize*sizeof(int));
	printf("Enter numbers of array nums\n");
	for(i=0;i<numsSize;i++)
	{
	scanf("%d",&nums[i]);
	}
	 int* result = runningSum(nums, numsSize, &returnSize);
    printf("Running sum array: ");
    for (i = 0; i < returnSize; i++)
	{
        printf("%d ", result[i]);
    }
    free(nums);
    free(result);
    return 0;

}
int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int* result;
    int i;
    *returnSize=numsSize;
    result=(int *)malloc(numsSize*sizeof(int));
    result[0]=nums[0];
    for(i=1;i<numsSize;i++)
    {
        result[i]=nums[i]+result[i-1];
    }
    return result;
}