#include<stdio.h>
int main()
{
    int n,m,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            m=a[i];
        }
    }
    printf("%d",m);
}