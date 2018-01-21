#include <stdio.h>

int main() {
	int a,b,log,c=0;
	printf("\n enter the number");
	scanf("%d",&log);
	a=log;
 while (a!=0)
    {
        b=a%10;
        c+=b*b*b;
        a= a/10;
    }
    if(c==log)
        printf("\n Yes");
    else
        printf("\n no");
return o;
}
