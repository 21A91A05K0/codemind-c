#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,x,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
        else
        {
            x=a[i];
            while(x)
            {
                d=x%10;
                c+=d;
                x/=10;
            }
        }
    }
    printf("%d",c);
}