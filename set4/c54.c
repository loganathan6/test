#include <stdio.h>
#include<conio.h>
int main() 
{
  int x;
  printf("\n enter the number:");
  scanf("%d",&x);
  if(x%2!=0)
  {
    printf("\n nearest even number is: %d",x-1);
  }
  else
  {
    printf("\n nearest even number is: %d",x-2);
  }
}
