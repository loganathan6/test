#include<stdio.h>
int main()
{
int fast,slow,i,flag;
printf("enter two numbers(intervals):");
scanf("%d%d",&fast,&slow);
printf("prime numbers between %d and %d are :",fast , slow);
while(fast<slow)
{
flag=0;
for(i=2;i<=fast/2;++i)
{
if(fast %i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",fast);
++fast;
}
return 0;
}
