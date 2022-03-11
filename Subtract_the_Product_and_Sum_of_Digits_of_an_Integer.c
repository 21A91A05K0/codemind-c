#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,total,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        mul*=r;
        n=n/10;
    }
    total=mul-sum;
    printf("%d",total);
}