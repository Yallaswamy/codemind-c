#include<stdio.h>
int main()
{
    int n,d,r,rev=0,rd,m,p=0;
    scanf("%d",&n);//12
    d=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    //printf(" rev==%d
",rev);
    //printf(" d==%d
",d);
    rd=rev*rev;
   // printf(" rd==%d",rd);
    while(rd>0)
    {
        m=rd%10;//441
       p=p*10+m;
       rd=rd/10;
    }
   // printf("p==%d",p);
   if(d==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}