#include<stdio.h>
int main()
{	int t,a[20],i,n,m,b,x;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		for(i=0;i<=(n-1);i++)
		{	scanf("%d",&a[i]);
		}
		for(b=0;;b++)
		{	x=0;
			for(i=0;i<=(n-2);i++)
			{	if(a[i]>a[i+1])
				{	x=111;
					break;
				}
			}
			if(x==111)
			{	for(i=0;i<=(n-2);i++)
				{	if(a[i]>a[i+1])
					{	m=a[i];
						a[i]=a[i+1];
						a[i+1]=m;
					}
				}
				for(i=0;i<=(n-1);i++)
				{	printf("%d ",a[i]);
				}
				printf("\n");
			}
			else
			break;
		}
	}
}
