#include<stdio.h>
int reverse(int n)
{
    int r,rev=0;
    
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i==reverse(i))
        printf("%d ",i);
    }
    return 0;
}