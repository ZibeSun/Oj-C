#include<stdio.h>
int main()
{	int t,n,c,x,y,m;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		if((n<100000)&&(n>0))
		{
		for(c=2;c<n;c++)
			{	if(n%c==0)
				break;
			}
		if(c>=n)
			{	y=0;
				m=n;
				for(n=n;n>0;n=n/10)
				{	x=n%10;
					y=y*10+x;
				}
				if(y==m)
				{	printf("Yes\n");
				}
				else
				printf("No\n");
			}
			else
			printf("No\n");
		}
		else
		printf("No\n");
	}
	return 0;
}
