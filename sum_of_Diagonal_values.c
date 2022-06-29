#include<stdio.h>
int main()
{
    int a,b,i,j,ar[100][100],s=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==j || i==b-1-j)
            {
                s=s+ar[i][j];
            }
        }
    }
    printf("%d",s);
}