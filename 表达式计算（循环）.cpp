#include<stdio.h>
#include<math.h>
int main()
{	int t;
	float x,y;
	scanf("%d",&t);
	while(t--)
	{	scanf("%f",&x);
		if(x<0)
			y=fabs(x);
		else if(x>=0&&x<1)
			y=sin(2*x);
		else if(x>=1&&x<5)
			y=sqrt(x*x*x+x);
		else
			y=2*x+10;
		printf("%.2f\n",y);
	}
	return 0;
	
}
