#include<stdio.h>
int main()
{
    int n,i,s=0,a[100];
    float b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    b=(float)s/n;
    printf("%.2f",b);
}