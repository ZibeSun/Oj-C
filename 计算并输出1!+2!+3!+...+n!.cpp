#include<stdio.h>
int main()
{	int n,i,m,x,y=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	x=1;
		for(m=1;m<=i;m++)
		{	x=x*m;
		}
		y=y+x;
	}
	printf("%d",y);
	return 0;
}
