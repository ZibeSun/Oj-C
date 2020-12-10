#include<stdio.h>
int main()
{	int t,x,n,i,b;
	scanf("%d",&t);
	while(t--)
	{	x=0;
		scanf("%d",&n);
		int a[n][n];
		for(i=0;i<=(n-1);i++)
		{	for(b=0;b<=(n-1);b++)
			{	scanf("%d",&a[i][b]);
			}
		}
		for(i=0;i<=(n-1);i++)
		{	for(b=0;b<=(n-1);b++)
			{	if(i==b)
				{	x=x+a[i][b];
				}
				else if((i+b)==(n-1))
				{	x=x+a[i][b];
				}
			}
		}
		printf("%d\n",x);
	}
	return 0;
}
