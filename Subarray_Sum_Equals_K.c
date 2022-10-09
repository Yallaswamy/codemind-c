#include<stdio.h>
int main()
{
    int n,n1,k,i,ar=0,j;
    scanf("%d%d",&n,&n1);
    int a[50];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
       sum=0;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==n1)
            {
                ar+=1;
            }
        }
    }
    printf("%d",ar);
}