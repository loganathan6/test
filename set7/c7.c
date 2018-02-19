#include<stdio.h>
int main(void)
{
int s;
    printf("\n enter the number");
    scanf("%d",&s);
    while(s%10!=0)
    {
        s++;
    }
printf("\n the nearest greater multiple of 10 is %d",s);
return 0;
}

