#include<stdio.h>
int main() {
	char a[1000];
	int count=0,i;
	printf("enter the string ");
	scanf("%[^\n]s",a);
	for(i=0;i!='\0';i++)
	{
		if(a[i]==' ')
		count++;
	}
	printf("%d",count+1);
	
	return 0;
}
