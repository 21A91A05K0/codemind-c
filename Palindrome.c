#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}