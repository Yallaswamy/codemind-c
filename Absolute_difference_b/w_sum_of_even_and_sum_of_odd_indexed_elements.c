#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,sume=0,num=0,sumo=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
        if(i%2==0)
        {
            sume+=a[i];
        }
        else
        {
            sumo+=a[i];
        }
    }
    sum=abs(sume-sumo);
    printf("%d",sum);
    
}