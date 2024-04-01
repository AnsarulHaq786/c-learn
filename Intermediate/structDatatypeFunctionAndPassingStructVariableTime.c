#include<stdio.h>
struct time sum(struct time,struct time);
struct time{
	int hour;
	int minute;
};
int main()
{
	struct time t1,t2,t3;
	printf("Enter time in hour and minute\n");
	scanf("%d%d",&t1.hour,&t1.minute);
	printf("Enter time in hour and minute again\n");
	scanf("%d%d",&t2.hour,&t2.minute);
	t3=sum(t1,t2);
	printf("Sum of time is\n");
	printf("%d hrs %d min\n",t3.hour,t3.minute);
	return 0;
}
struct time sum(struct time T1,struct time T2)
{
	struct time T3;
	T3.minute=(T1.minute+T2.minute)%60;
	T3.hour=(T1.hour+T2.hour)+(T1.minute+T2.minute)/60;
	return(T3);
}
