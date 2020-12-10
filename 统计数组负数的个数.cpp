#include<stdio.h>
int main()
{	int a[10],n,i,x;
	scanf("%d",&n);
	while(n--)
	{	x=0;
		for(i=0;i<=9;i++)
		{	scanf("%d",&a[i]);
			if(a[i]<0)
				x=x+1;
		}
		printf("%d\n",x);
	}
	return 0;
}
