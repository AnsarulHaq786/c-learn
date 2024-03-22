// Array of character=string
#include <stdio.h>
int main() 
{
  int i=0,count=0;
  char myText[] = "Hello"; // array size is automatically specified by compiler
  printf("%s\n", myText); // display content using array name
  		while(myText[i]!='\0') // counting of characters in string
   		{// last character stored in any string is '\0' which acts as terminator symbol
			count++;
			i++;
   		}
    	printf("length=%d\n",count); //display lengh of string array
    for(i=0;i<count;i++)
    {// display string using each element one by one
    	printf("%c", myText[i]);
	}
  return 0;
}