// Seconds to hour:min:sec
#include<stdio.h>
int main()
{
    int sec,min,real_sec,real_min,real_hour;
    printf("Enter total second:");
    scanf("%d",&sec);
    min=sec/60;
    real_sec=sec%60;
    real_hour=min/60;
    real_min=min%60;
    printf("%d hour %d minute %d second",real_hour,real_min,real_sec);
   return 0;
}