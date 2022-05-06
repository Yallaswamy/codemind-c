#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int f=0,f1=1,f2;
    printf("%d %d",f,f1);
    for(i=2;i<n;i++)
    {
    f2=f+f1;
    f=f1;
    f1=f2;
    
    printf(" %d",f2);
    }
}