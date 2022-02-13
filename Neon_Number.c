#include<stdio.h>
int main()
{
    int n,sum=0,d,r;
    scanf("%d",&n);
    d=n*n;
    while(d!=0)
    {
        r=d%10;
        sum+=r;
        d=d/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
    
    
}