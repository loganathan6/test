#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={10,20,30,40,50};
int i,max;
max=a[0];
for(i=1;i<5;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
}


