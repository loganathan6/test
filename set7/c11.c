#include<stdio.h>

void main()
{
int rev=0,k;
char a;
printf("enter the string:");
scanf("%s",&a);
k=a;
while(k!='\0')
{
rev=rev*10;
rev=rev+k%10;
k=k/10;
}
if(a==rev)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}

}
