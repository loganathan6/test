#include<stdio.h>
int main(){
    int i,j,k,b[100],n,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=1;j<=n;j++)
    {
        for(k=j+1;k<=n;k++)
        {
            if(b[j]>b[k])
            {
                t=b[j];
                b[j]=b[k];
                b[k]=t;
            }
        }
    }
printf("%d",b[j/2]);
}
