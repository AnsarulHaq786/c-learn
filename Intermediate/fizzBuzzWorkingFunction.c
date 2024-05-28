// Solution to leet code problem 412 : Fizz Buzz
// Pointers in C is like Wildcard more like Chameleon
// Pointer is green sometimes while in a second gets red and then yellow
// Pointer is a blind guard
char** fizzBuzz(int n, int* returnSize) {
    int i;
    *returnSize=n;
    char **answer;
    answer=(char **)malloc(*returnSize*sizeof(char *));
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0){
            
            answer[i-1]=(char *)malloc(9);
            strcpy(answer[i-1],"FizzBuzz");
        }
        else if(i%3==0){
            answer[i-1]=(char *)malloc(5);
            strcpy(answer[i-1],"Fizz");
        }
        else if(i%5==0){
            answer[i-1]=(char *)malloc(5);
            strcpy(answer[i-1],"Buzz");
        }
        else{
            answer[i-1]=(char *)malloc(6);
            sprintf(answer[i-1],"%d",i);
        }
    }
    return answer;
}
