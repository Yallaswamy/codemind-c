#include<stdio.h>
int main()
{
    char str[100];
    int i,sum=0;
    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    {
        if( (str[i]>='0' )&& (str[i]<='9'))
        {
            sum+=(str[i]-'0');
        }
    }
    printf("%d",sum);
}