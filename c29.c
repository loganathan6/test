#include<stdio.h>
int main()
{
int hour,minute,m;
printf("enter the time in minute");
scanf("%d",&minute);
hour=minute/60;
m=minute%60;
printf("the hour and minutes are %d %d",hour,m);
return(0);
}
