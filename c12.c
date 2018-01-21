#include <stdio.h>
#include<conio.h>
void main()
{
   int n, i=0, j,k;
   printf("Enter an integer:");
   scanf("%d", &n);
   k=n;
   while(k!=0)
   {
      j=k%10;
      i=i*10+j;
      k/=10;
      }
}
