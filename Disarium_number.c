#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,res=0,i,d,temp;
    scanf("%d",&n);
    temp=n;
    d=(int)log10(n)+1;
    while(n!=0)
    {
        r=n%10;
        res=res+ceil(pow(r,d));
        n=n/10;
        d--;
    }
    if(temp==res)
    {
        printf("True");
    }
    else
    {
        printf("False");
        
    }
}