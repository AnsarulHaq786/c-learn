//input detail of 2 students and diplay records of those whose percentage is greater than 70
//calculate percentage from marks obtained in 5 subjects
#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float mark[5];
	float percentage;
};
int main()
{
	struct student std[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		std[i].percentage=0;
		printf("Enter Name Roll of student(%d)\n",i+1);
		scanf("%s%d",std[i].name,&std[i].roll);
		for(j=0;j<5;j++)
		{
			printf("Mark in subject %d\n",j+1);
			scanf("%f",&std[i].mark[j]);
			std[i].percentage+=std[i].mark[j];
		}
		std[i].percentage/=5;
	}
		printf("Name of student (percentage>70)\n");
	for(i=0;i<2;i++)
	{
		if(std[i].percentage>70)
		{
			printf("%s\n",std[i].name);
		}
	}
	return 0;
}