#include<stdio.h>
int main()
{
    int n,r,rev=0,m;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(m==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}