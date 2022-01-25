#include<stdio.h>
 int main()
 {
     float fah,cel;
     scanf("%f",&fah);
     cel=(fah-32)*5/9;
     printf("%.2f",cel);
     return 0;
 }