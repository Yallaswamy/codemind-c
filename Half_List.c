#include<stdio.h>
int main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>n/2;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=1;i<=n/2;i++)
    {
        printf("%d ",a[i]);
    }

    
    
}
