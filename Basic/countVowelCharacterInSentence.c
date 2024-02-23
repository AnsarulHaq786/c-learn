// Counts vowel characters in the sentence but without pointer
#include<stdio.h>
int main()
{
    int i,count=0;
    char in[50];
    printf("Enter sentence\n:");
    gets(in);
    for(i=0;i<50;i++)
    {
    if(in[i]=='a' || in[i]=='A' || in[i]=='e' || in[i]=='E' || in[i]=='i' || in[i]=='I' || in[i]=='o' || in[i]=='O' || in[i]=='u' || in[i]=='U')
        {
            count++;
        }
    }
    printf("Total no of vowel characters=%d",count);
    return 0;
}
