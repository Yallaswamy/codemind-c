#include<stdio.h>
int main()
{
    int n,r,d=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;//12 3
        if(r>d)
        {
           d=r;
        }
        n=n/10;
    }
    printf("%d",d);
    return 0;
}