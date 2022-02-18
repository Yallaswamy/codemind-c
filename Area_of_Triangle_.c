#include<stdio.h>
#include<math.h>
int main()
{
     double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    float area,s;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);
    
    return 0;
}
