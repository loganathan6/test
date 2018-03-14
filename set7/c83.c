#include <stdio.h>

void main() {
int a[50],b[50],i;
char c[50];
for(i=0;i<50;i++)
{
	scanf("%d%c%d",&a[i],&c[i],&b[i]);
}
for(i=0;a[i]!=NULL;i++)
{
	if(c[i]=='/')
	{
		printf("%d\n",a[i]/b[i]);
	}
	if(c[i]=='%')
	{
		printf("%d\n",a[i]%b[i]);
	}
}
	
}
