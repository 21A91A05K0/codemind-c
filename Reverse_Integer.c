#include<stdio.h>
int main()
{
    int n,reverse=0,d,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        reverse=reverse*10+d;
    }
    printf("%d",reverse);
}