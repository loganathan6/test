include<stdio.h>
	int main()
	{
	int n,i,c,a=160,b=150,rem,result=0;
	printf("the first interval %d",a);
	printf("the second interval %d",b);
	{
	for(i=160;i<=150;i++)
	{
	c=n;
	while(n!=0)
	{
	rem=n%10;
	result=result+rem*rem*rem;
	n=n/10;
	}
	if(c==result)
	{
	printf("armstrong number between two intervals are %d ",result);
	}
	}
	}
  return 0;
	}
