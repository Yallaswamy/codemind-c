#include<stdio.h>
int main()
{
    int n,max=0,ma=0,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]==1)
       {
           ma=ma+1;
           if(ma>max)
           {
               max=ma;
           }
       }
       if(a[i]==0)
       {
           ma=0;
       }
    }
    printf("%d",max);
}