#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]%2!=0 and a[i+1]%2==0 and a[i+2]%2!=0)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}