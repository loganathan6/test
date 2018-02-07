#include <stdio.h>

int main()
{
	int a[50],n,i,avg=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		avg=avg+a[i];
	}
	
	printf("%d",avg /n);
	
	return 0;
}
