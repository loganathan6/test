#include<stdio.h>
int main()
{
int k,n,f=1;
scanf("%d",&n);
for(k=1;k<=n;k++)
{
f=f*k;
}
printf("factorial number is %d",f);
return 0;
}
