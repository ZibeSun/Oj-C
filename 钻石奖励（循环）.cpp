#include<stdio.h>
#include<math.h>
int main()
{	double d;
	int t,a,b,x0,y0,r,x,y,n;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d %d",&a,&b);
		scanf("%d %d %d",&x0,&y0,&r);
		a=a-1;
		b=b-1;
		n=0;
		for(x=0;x<=b;x++)
		{	for(y=0;y<=a;y++)
			{	d=sqrt((x-x0)*(x-x0)+(y-y0)*(y-y0));
				if(d<=r)
				n=n+1;
			}
		}
		printf("%d\n",n);
	}
	return 0;
}
