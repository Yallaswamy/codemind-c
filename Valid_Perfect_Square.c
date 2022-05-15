#include<stdio.h>
#include<math.h>
int main()
{
    int n,ivar,i,a;
    float fvar;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        fvar=pow(a,0.5);
        //printf("%f
",fvar);
        ivar=fvar;
        //printf("%d",ivar);
        if(ivar==fvar)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}