#include<stdio.h>
int main()
{
    int n,f,f1=0,f2=1,i;
    scanf("%d",&n);
    printf("%d %d ",f1,f2);
    for(i=0;i<n-2;i++)
    {
        f=f1+f2;
        printf("%d ",f);
        f1=f2;
        f2=f;
    }
    
}