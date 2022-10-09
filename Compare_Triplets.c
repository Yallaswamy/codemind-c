#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,c=0,d=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c=c+1;
        }
        else if(a[i]<b[i])
        {
            d=d+1;
        }
    }
    printf("%d %d",c,d);

}