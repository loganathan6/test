#include <stdio.h>
void main()
{
	int c,d,temp;
	printf("%d%d",c,d);
	scanf("%d%d",&c,&d);
	if(c>d)
	{
		temp=c;
		c=d;
		d=temp;
	}
	printf("%d%d",&c,&d);
}
