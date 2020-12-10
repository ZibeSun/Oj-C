#include<stdio.h>
int main()
{	int n,i,t,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	sum=0;
		for(t=1;t<i;t++)
		{	if(i%t==0)
				sum=sum+t;
		}
		if(sum==i)
		{	printf("%d its factors are ",i);
			for(t=1;t<i;t++)
			{	if(i%t==0)
				printf("%d ",t);
			}
			printf("\n");
		}
	}
}
