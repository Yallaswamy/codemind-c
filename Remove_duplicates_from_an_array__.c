#include<stdio.h>
int main()
{
    int n,i,a[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                a[j]=-1;
                //a[i]=-1;
            }
        }
        if(a[i]!=-1)
        {
            printf("%d ",a[i]);
           // break;
        }
    }
}