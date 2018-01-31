#include <stdio.h>

int main(void)
{
	int a=120,b=170;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swapping of two number is %d %d",a,b);
	return 0;
}
