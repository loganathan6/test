#include<stdio.h>
int main()
{
	int a[50];
	int k,i,n;
	printf("enter the number");
	scanf("%d",&k);
	printf("enter the n array");
	for(i=0;i<k;i++);
	{
		scanf("%d",&a[i]);
	}
	large=small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
	{
		large=a[i];
	}
	else
	{
		small=a[i];
	}
	return 0;
	}
}
