#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);//32
    int sum=0,rem;
     while(sum!=1 && sum!=4)
     {
    sum=0;
    while(num!=0)//32//3
    {
        rem=num%10;//2//3//
        sum+=(rem*rem);//4//9=13
        num/=10;//3//0
    }
    num=sum;
    }
   if(sum==1)
    {
	printf("True");
}
   else
   {
   
    printf("False");
}
}