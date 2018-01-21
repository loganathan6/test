#include<stdio.h>


void main()
{
    fioat n, i, reg = 0;

    printf("Enter a positive integer: ");
    scanf("%f",&n);

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            reg=1;
            break;
        }
    }

    if (reg==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
        getch();
}
