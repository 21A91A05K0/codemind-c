#include<stdio.h>
int main()
{
    int k,j,i=0,n,d[100];
    scanf("%d",&n);
    while(n>0)
    {
        d[i]=n%10;
        n=n/10;
        i++;
    }
    for(j=i-1;j>=n;j--)
    {
        if(d[j]==6)
        {
            d[j]=9;
            break;
        }
    }
    for(k=i-1;k>=n;k--)
    {
        printf("%d",d[k]);
    }
    return 0;
}