#include<stdio.h>
int main()
{
    int i,s=0;
    char ch[100];
    scanf("%[^
]s",ch);
    while(ch[i]!=NULL)
    {
        if(ch[i]==' ')
        {
            s++;
        }
        i++;
    }
    printf("%d",s);
}