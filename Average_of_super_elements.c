#include<stdio.h>
int main()
{
    int n,i,j,count=0,d=0;
    float av=0,sum=0;
    scanf("%d",&n);
    int a[30];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=100;
                }
            }
        }
        if(count==a[i] && a[j]!=100)
        {
            //printf("%d ",a[i]);
            sum+=a[i];
            d++;
        }
    }
  //  printf("%d %d ",sum ,d);
    //printf("
");
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        av=sum/d;
       printf("%.2f",av);
    }
     
    
}