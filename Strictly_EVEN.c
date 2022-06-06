#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,m=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0 && a[i]%2==0)
        {
            m=1;
        }
    }
    if(m==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}