#include<stdio.h>
int main()
{	int t,r,q;
	scanf("%d",&t);
	while(t--)
	{	if(r<=20000&&r>10000)
			q=1000+(r-10000)*0.075;
		else if(r>20000&&r<=40000)
			q=1000+750+(r-20000)*0.05;
		else if(r>40000&&r<=60000)
			q=1000+750+1000+(r-40000)*0.03;
		else if(r>60000&&r<=100000)
			q=1000+750+1000+600+(r-60000)*0.01;
		else if(r<=10000)
			q=r*0.1;
		printf("%d",q);
	}
	return 0;
}
