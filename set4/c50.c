#include<stdio.h>
int main()
{
    int i,j;
    printf("\n enter the number");
    scanf("%d",&i);
    j=(i&(i-1));
    if(j==0)
    printf("power of 2");
    else
    printf("not powerof 2");
    return (0);
}
