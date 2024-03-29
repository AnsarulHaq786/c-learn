#include<stdio.h>
struct student{
	char name[20];
	int roll;
};
int main()
{
	struct student s,*ptr;
	ptr=&s;
	printf("Enter name and roll of a student\n");
	scanf("%s%d",s.name,&s.roll);
	printf("Name\t|Roll\n");
	printf("%s\t|%d",ptr->name,ptr->roll);
	return 0;
}