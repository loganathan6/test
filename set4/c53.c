#include <stdio.h>
#include<conio.h>
int main(void)
{
  int a,i,sum=0;
  printf("\n enter the number");
  scanf("%d",&i);
  while(i>0)
  {
    a=i%10;
    i=i/10;
    sum=sum+a;
  }
  printf("\n sum of digits is %d",sum);
  return 0;
  }
