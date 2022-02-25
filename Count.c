#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,ecount=0,ocount=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ecount++;
        }
        else
        {
            ocount++;
        }
    }
    printf("%d %d",ecount,ocount);
}