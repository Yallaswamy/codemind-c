#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,sum=0,num=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        //num=a[i];
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
    
}