#include <stdio.h>

int main()
{
	int a,b,k,x;
	printf("\n enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		k=(k*10)+b;
		a=a/10;
	}
	while(k!=0)
	{
		x=k%10;
		printf("%d ",x);
		k=k/10;
	}
	return 0;
}
