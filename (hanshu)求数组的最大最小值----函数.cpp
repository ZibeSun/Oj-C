#include<stdio.h>
int main()
{	float max(a[100]);
	float min(a[100]);
	int n,i;
	float a[100],c,h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%f",&a[i]);
	}
	c=max(a[100]);
	h=min(a[100]);
	printf("%.2f %.2f",c,h);
	return 0;
	
}
float max(a[100])
{	float m,e;
	int b;
	for(b=0;b<=(n-2);b++)
		{	for(i=0;i<=(n-2);i++)
				{	if(a[i]>a[i+1])
					{	e=a[i];
						a[i]=a[i+1];
						a[i+1]=e;
					}
				}
		}
	m=a[n-1];
	return(m);
}
float min(a[100])
{	float t,f;
	int d;
	for(d=0;d<=(n-2);d++)
		{	for(i=0;i<=(n-2);i++)
				{	if(a[i]>a[i+1])
					{	f=a[i];
						a[i]=a[i+1];
						a[i+1]=f;
					}
				}
		}
	t=a[0];
	return(t);
}
