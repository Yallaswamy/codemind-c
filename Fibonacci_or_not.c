#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a ,b, f;
    a=0,b=1;
   // printf("%d %d",a,b);
    for(i=1;i<n/2;i++)
    {
        f=a+b;
        if(f==n)
        {
            f=1;
            break;
        }
        a=b;
        b=f;
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
}