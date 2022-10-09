#include<stdio.h>
int main()
{
    int n,i,j,arr[100][100],p=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                p=p+arr[i][j];
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                s=s+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",p);
    printf("Secondary Diagonal:%d",s);
}
