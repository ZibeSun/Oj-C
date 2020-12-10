#include<stdio.h>
int main()
{	int t,a[20],i,n,m,b;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		for(i=0;i<=(n-1);i++)
		{	scanf("%d",&a[i]);
		}
		for(b=0;b<=(n-2);b++)
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
	}
		return 0;
}

