#include<stdio.h>
int main()
{
    int l,b,w,c,l1,b1,f,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    l1=l-2*w;
    b1=b-2*w;
    f=((l*b)-(l1*b1));
    a=f*c;
    if(l1<=0||b1<=0)
    {
        printf("Impossible");
    }
    else
    {
        printf("%d",a);
    }
}