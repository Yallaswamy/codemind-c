#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
        else if(a[i]%2!=0)
        {
            break;
        }
    }
    printf("%d",s);
}