#include <stdio.h>

int main(void) {
int b[10],i,j,t,n;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
	scanf("%d\n",&a[i]);
}
for(i=1;i<=n;i++)
  {
	for(j=i+1;j<=n;j++)
	{
		if(b[i]>b[j])
		{
			t=b[i];
			b[i]=b[j];
			b[j]=t;
		}
	}
  }
  printf("%d\n",a[n]);
 
	return 0;
}
