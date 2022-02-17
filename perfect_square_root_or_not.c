  #include<stdio.h>
 #include<math.h>
int main()
{
    int n;
    scanf("%d",&n);//4
    int ivar;
    float fvar;
   
    fvar=sqrt(n);
    ivar=fvar;
    if(ivar==fvar)
    {
        printf("True");
    }
    else
    { printf("False");
        
    }
    
}