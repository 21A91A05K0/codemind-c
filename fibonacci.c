#include<stdio.h>
int main()
{
    int sum=0,first=0,second=1,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            sum=i;
        }
        else
        {
            sum=first+second;
            first=second;
            second=sum;
        }
        printf("%d ",sum);
    }
    return 0;
}