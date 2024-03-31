#include<stdio.h>
enum week{sun,mon,tue,wed,thu,fri,sat};
int main()
{
	enum week day;
	printf("enter position of day in a week(1-7)");
	scanf("%d",&day);
	--day;
	switch(day)
	{
		case sun:
			printf("sunday");
		break;
			
		case mon:
			printf("monday");
		break;	
			
		case tue:
			printf("tuesday");
		break;	
			
		case wed:
			printf("wednesday");
		break;	
		case thu:
			printf("thursday");
		break;
		case fri:
			printf("friday");
		break;
		case sat:
			printf("saturday");
		break;
		default:
     		printf("invalid choice");
        break;					
	}
}
