#include<stdio.h>
int main()
{
    int n,a,b,arr[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}