#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,sumo=0,num=0,sume=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        num=a[i];
        if(num%2!=0)
        {
            sumo+=num;
        }
        else
        {
            sume+=num;
        }
    }
    sum=abs(sume-sumo);
    printf("%d",sum);
    
}