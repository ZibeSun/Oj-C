#include<stdio.h>
int main()
{	int t,a[10],i,n,x;
	scanf("%d",&t);
	while(t--)
	{	x=0;
		for(i=0;i<=9;i++)
		{	scanf("%d",&a[i]);
		}
		scanf("%d",&n);
		for(i=0;i<=9;i++)
		{	if(n==a[i])
			{	printf("%d\n",i);
			}
			else
			{	x=x+1;
			}
		}
		if(x==10)
		printf("Not found\n");
	}
	return 0;
}
