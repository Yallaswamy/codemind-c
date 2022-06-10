#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,s=0,sa=0,k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n/2;i++)
    {
            s=s+a[i];
    }
    for(i=n/2;i<n;i++)
    {
            sa=sa+a[i];
    }
    k=abs(s-sa);
    printf("%d",k);
}