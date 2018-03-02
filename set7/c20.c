#include<stdio.h>
#include<conio.h>
void main()
{
int c,k;
printf("enter the number");
scanf("%d",&c);
while(c!=0)
{
k=c%10;
if((k%2)!=0)
printf("odd no is %d",k);
c=c/10;
}}

