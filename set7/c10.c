#include<stdio.h>

void main() 
{
int n,c=0,k=1,p=2,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
c++;
}
for(i=0;i<=c;i++)
{
k=k*p;
}
printf("%d",k);
}
