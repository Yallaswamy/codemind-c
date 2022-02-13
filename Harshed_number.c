#include<stdio.h>
int main()
{
	int n,r,sum=0,m;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;//1 8
		sum+=r;
		n=n/10;
	}
//	printf("%d
",sum);
	if(m%sum==0)
	{
	//	printf("%d
",m);
	//	printf("
hshared number");
			printf("True");
	}
	else
	{
		printf("False");
	}
}