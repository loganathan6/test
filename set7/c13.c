#include <stdio.h>

int main(void) {
	int a,b,c,i,k=0;
	printf("Enter the number");
	scanf("%d",&a);
	printf("Enter the limits");
	scanf("%d%d",&b,&c);
	for(i=b;i<=c;i++)
	{
		if(a==i)
		{
			k=1;
			break;
		}
	}
	if(k==1)
	printf("\nYes");
	else
	printf("\nNo");
	return 0;
}
