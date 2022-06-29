#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,s=0;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
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