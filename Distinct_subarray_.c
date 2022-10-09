#include<stdio.h>
int main()
{
    int n,n1,i,ar=0,j;
    scanf("%d%d",&n,&n1);
    int sum=0;
    for(i=n;i<=n1;i++)
    {
        sum=0;
        for(j=i;j<=n1;j++)
        {
            sum+=j;
            if(sum%2!=0)
            {
                ar+=1;
            }
        }
    }
    printf("%d",ar);
}