#include<stdio.h>
int main()
{
    int l,m,n;
    scanf("%d %d",&l,&m);
    n=l%m;
    if(1<=n<=10000)
    {
        printf("%d",n);
    }
    return 0;
}