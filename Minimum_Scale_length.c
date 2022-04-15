#include<stdio.h>
int main()
{
    int i,n,arr[100],min,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    while(j<n)
    {
        if(arr[j]%min==0)
        {
            j++;
        }
        else
        {
            min=arr[j]%min;
        }
    }
    printf("%d",min);
}