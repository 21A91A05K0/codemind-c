#include<stdio.h>
int main()
{
    int L,M,N;
    scanf("%d %d",&L,&M);
    N=L/M;
    if(1<=N<=10000)
    {
        printf("%d",N);
    }
    return 0;
}