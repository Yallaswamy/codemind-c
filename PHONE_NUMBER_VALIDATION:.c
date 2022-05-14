#include<stdio.h>
int main()
{
    int n,f=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        f=f+1;
        n=n/10;
    }
    //printf("%d",f);
    if(f>10 || r==0|| f<9)
    {
        printf("Invalid");
    }
    else
    {
        printf("Valid");
    }
}