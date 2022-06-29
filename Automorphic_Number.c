
#include<stdio.h>
int main()
{
	int n,m,r,s,p;
	scanf("%d",&n);
	m=n*n;
	//while(m=0)
	{
		r=m%10;
		s=m%100;
		p=m%1000;
	    //m=m/10;
	}
	if(n==r||n==s||p==n)
	{
		printf("Automorphic Number");
	}
	else
	{
		printf("Not an Automorphic Number");
	}
}