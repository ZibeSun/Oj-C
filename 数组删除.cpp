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
		{	if(n!=a[i])
			x=x+1;
		}
		if(x==10)
		{	printf("Not found\n");
		}
		else
		{	for(i=0;i<=9;i++)
			{	if(i<9)
			{	if(n!=a[i])
				{	printf("%d ",a[i]);
				}
			}
			else if(i=9)
			{	if(n!=a[i])
				{	printf("%d\n",a[i]);
				}
			}
			}
		}
	}
	return 0;
}
