#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,count=0,c=0;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b;i++)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d
",i);
        }
    } 
}