#include<stdio.h>
int main()
{
    int hf,sf,vf;
    scanf("%d%d%d",&hf,&sf,&vf);
    if(hf>50 && sf>60 && vf>100)
    printf("%d",10);
    else if(hf>50 && sf>60)
    printf("%d",9);
    else if(sf>60 && vf>100)
    printf("%d",8);
    else if(hf>50 && vf>100)
    printf("%d",7);
    else if(hf>50 || sf>60 || vf>100)
    printf("%d",6);
    else
    printf("%d",5);
    return 0;
}