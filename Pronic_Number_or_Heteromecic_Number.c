#include<stdio.h>
#include<math.h>
int main()
{
	int n,k,i,s=0;
	k=sqrt(n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(n==i*(i+1))
		{
		s=1;
		}
	}
	if(s==1)
	{
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}

}