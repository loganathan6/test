#include <stdio.h>
#include<string.h>
int main() {
	char a[20];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(i==n/2){
			a[i]='*';
			break;
		}
 
	}
	printf("%s",a);
	
}
