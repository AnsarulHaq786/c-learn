#include<stdio.h>
struct student{ //stucture datatype defination
	char name[20];
	int roll;
};
int main()
{
	struct student s,*ptr; //declare variable s to struct student datatype
	ptr=&s; // points to the initial address of s
	printf("Enter name and roll of a student\n"); // prompt user to input name and roll
	scanf("%s%d",s.name,&s.roll); // . selector is used to access elements inside structure variable
	printf("Name\t|Roll\n"); // display result in tabular form
	printf("%s\t|%d",ptr->name,ptr->roll); // -> selector to access element using pointer
	return 0;
}