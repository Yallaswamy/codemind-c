#include<stdio.h>
int main()
{
    int n,i,r=0,var,re=0;
    scanf("%d",&n);
    while(n!=0)
   {
       re=n%10;
       r=r*10+re;
       n=n/10;
   }
   printf("%d",r);
  
   return 0;
}