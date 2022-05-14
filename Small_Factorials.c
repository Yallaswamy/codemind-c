#include<stdio.h>
int main()
{
    int n,f=1,i,j,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        f=1;
        for(j=1;j<=a;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
        
    }
}