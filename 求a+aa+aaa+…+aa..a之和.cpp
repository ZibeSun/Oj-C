#include<stdio.h>
int main()
{	int a,n,i,b,x=0,y;
	scanf("%d\n%d",&a,&n);
	for(i=1;i<=n;i++)
	{	y=0;
		for(b=1;b<=i;b++)
		{	y=y*10+a;
		}
		x=x+y;
	}
	printf("%d",x);
	return 0;
}
