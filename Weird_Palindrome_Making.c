#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        int n1;
        scanf("%d",&n1);
        int a[100],i,c=0;
        for(i=0;i<n1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n1;i++)
        {
            if(a[i]%2!=0)
            {
                c=c+1;
                //printf("%d",a[i]);
            }
        }
        if(c%2!=0)
        {
            c=c-1;
        }
        printf("%d
",c/2);
    }
}