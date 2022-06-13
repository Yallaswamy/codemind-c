#include<stdio.h>
int main()
{
    int n,r,s=0,t,p,x=0,k,a=0;
    scanf("%d",&n);
    t=n;
  
    while(t!=0)
    {
        r=t%10;
        s=s+r;
        t=t/10;
    }
    while(s!=0)
    {
        k=s%10;
        x=x+k;
        s=s/10;
    } 
    while(x!=0)
    {
        p=x%10;
        a=a+p;
        x=x/10;
    }
    
    printf("%d",a);
}