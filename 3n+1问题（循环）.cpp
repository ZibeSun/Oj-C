#include<stdio.h>
int main()
{	int t,n[100],i,a,x;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{	scanf("%d",&n[i]);
	}
	for(i=1;i<=t;i++)
	{	x=n[i];
		for(a=1;;a++)
		{
			if(x%2==0)
				x=x/2;
			else if(x==1)
				break;
			else if(x%2!=0)
				x=3*x+1;
		}
		printf("%d",a-1);
		if(i<t)
		printf(" ");
	}
	return 0;
}
