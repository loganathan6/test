#include <stdio.h>
int main()
{
	int a,b,k=1,i=0;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the value b");
	scanf("%d",&b);
	int temp=a;
	for(i=0;i<b;i++)
	{
		k=k*a;
	}
		
	
	printf("the power of number is %d");
	return 0;
}
