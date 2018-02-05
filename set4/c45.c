#include<stdio.h>
int main(void)
{
int n,sum=0;
printf("Enter the number \t");
scanf("%d",&n);
while(n!=0)
{
    n=n/10;
    sum++;
}
printf("The number of digit in the number is %d",sum);
return 0;
}
