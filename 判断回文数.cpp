#include<stdio.h>
int main()
{	int t,n,x,y,m;
	scanf("%d",&t);
	while(t--)
	{	y=0;
		scanf("%d",&n);
		m=n;
		for(n=n;n>0;n=n/10)
		{	x=n%10;
			y=y*10+x;
		}
		if(y==m)
		{	printf("Yes\n");
		}
		else
		{	printf("No\n%d",y);
		}
	}
	return 0;
}
