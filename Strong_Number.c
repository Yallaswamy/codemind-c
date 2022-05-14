#include<stdio.h>
int main()
{
    int n,t,i,f,r,sum=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        f=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        // printf("%d
",f);
         sum=sum+f;
          
        n=n/10;
    }
    //printf("%d",sum);
  if(sum==t)
  {
      printf("The number %d is a strong number",t);
  }
  else
  {
      printf("The number %d is not a strong number",t);
  }
}