#include <stdio.h>
#include<string.h>

int main(void) {
	char a[150]="hello world";
	 int i,b=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
			b++;
	}
	printf("no. of words are %d",b+1);
	return 0;
}
