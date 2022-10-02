#include<stdio.h>
#include<math.h>
//c.i=p*((1+r/100)**t)
int main()
{
    double p,t,r,c,e,f;
    scanf("%lf%lf%lf",&p,&r,&t);
    c=1+(r/100);
    e=pow(c,t);
    f=(p*e);
    printf("%.2lf",f);
}