#include<stdio.h>
void main()
{
char a[100];
int i,len,line=0;
printf("enter the string:");
scanf("%[\n]d",&a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]=='.')
line=line+1;
}
printf("\nthere is %d lines",line);

}
