#include<stdio.h>
void main()
{
    int p,q,r;
    scanf("%d%d%d",&p,&q,&r);
    r=p*q;
    if(r/p==q)
    printf("yes");
    else
    printf("no");
}
