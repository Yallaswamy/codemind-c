#include<stdio.h>
int main()
{
    int a,b,s,c,r,i,k;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        k=i;
        s=0;
        c=0;
        while(k!=0)
        {
            r=k%10;
            s=s+1;
            if(r!=0)
            {
                if(i%r==0)
                {
                    c=c+1;
                }
            }
            k=k/10;
        }
        if(s==c)
        {
            printf("%d ",i);
        }
    }
}