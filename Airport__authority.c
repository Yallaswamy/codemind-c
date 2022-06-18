#include<stdio.h>
int main()
{
    int n,a[100],i,t,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=1;i<=n;i++)
    {
        if(a[i]<=t)
        {
            c=c+1;
           // printf("hii");
        }
        else
        {
            c=c+2;
        }
    }
    printf("%d",c);
}