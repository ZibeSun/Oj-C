#include<stdio.h>
int main()
{	int t,n,i,a,b,c,x;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		x=0;
		for(i=1;i<=n;i++)
		{	a=i%3;
			b=i%4;
			c=i%7;
			if((a!=0&&b!=0)&&c==0)
				x++;
		}
		printf("%d\n",x);
	}
	return 0;
}
