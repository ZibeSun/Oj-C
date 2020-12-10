#include<stdio.h>
int main()
{	int t,x,y,n,i,k,a,b,c;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d %d %d",&x,&y,&n);
		k=0;
		for(i=1;i<=n;i++)
		{	for(a=0;a<=n;a=a+x)
			{	if(a==i)
					for(b=0;b<=n;b=b+y)
					{	if(b==i)
							k=k+36;
					}
			}
		}
		if(k==36)
			c=0;
		else if(k>36)
			c=k/2;
		printf("%d\n",c); 
	}
	return 0;
}
