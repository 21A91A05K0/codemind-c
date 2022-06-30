#include<stdio.h>
int main()
{
    int n,i,large=0,r;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        r=n%10;
        n=n/10;
        if(large<r)
        {
            large=r;
        }
    }
    printf("%d",large);
    return 0;
}