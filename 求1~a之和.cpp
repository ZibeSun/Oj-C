#include<stdio.h>
int main()
{	float a,b,c,i,sum;
	scanf("%f %f %f",&a,&b,&c);
	sum=0; 
	for(i=1;i<=a;i++)
	{	sum=sum+i;
	}
	for(i=1;i<=b;i++)
	{	sum=sum+i*i;
	}
	for(i=1;i<=c;i++)
	{	sum=sum+(1/i);
	}
	printf("%.2f",sum);
}
