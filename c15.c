#include <stdio.h>

int main() 
{
	int c,d,i;
	scanf("%d%d",&c,&d);
	for(i=c;i<d;i++)
	{
		if(i%2==0)
		printf("%d\t",i);
	}
	return 0;
}
