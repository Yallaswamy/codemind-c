#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,rev=0,r=0,m=0,k,t=0,temp=0;
	for(i=1;i<=9;i++)
	{
		m=0;
		temp=n;
		while(temp!=0)
		{
			r=temp%10;
			if(r==i)
			{
			m=m+1;
	    	}
			temp=temp/10;
		}
		if(m>1)
		{
			t=t+1;
		}
}
if(t==0)
{
	printf("Unique Number");
}
else
{
	printf("Not Unique Number");
}
}
