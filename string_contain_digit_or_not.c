#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int d=0,i,f=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            f=1;
            d++;
        }
    }
    if(f==1)
    printf("Contains %d digit",d);
    else
    {
        printf("Doesn't contain digit");
    }
}     
