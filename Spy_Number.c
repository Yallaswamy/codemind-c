#include<stdio.h>
int main()
{
    int n,i=1,sum=0,pro=1,r,result;
    scanf("%d",&n);
while(n>0)
    {
        r=n%10;
          n=n/10;
       sum+=r;
        pro=(pro*r);
    }
    if(sum==pro)
    {
    printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}