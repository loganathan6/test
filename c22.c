#include <stdio.h>

int main() {
	int a[50],s,i,max;
	scanf("%d\n",&s);
	for(i=0;i<s;++i)
	{
	scanf("%d ",&a[i]);
	}
	max=a[0];
	for(i=1;i<s;++i)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}
