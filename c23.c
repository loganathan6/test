#include<stdio.h>
int main()
{
int n,i,j,k;
printf("enter the number of elements");
scanf("%d%d%d",&i,&j,&k);
if(i<j)
{
  if(i<k)
{
printf("%d",i);
}
}
else if(j<k)
{
printf("%d",j);
}
else
{
printf("%d",k);

}
}
