#include<stdio.h>
int main()
{	int n,i,x,m,a,b;
	scanf("%d",&n);
	m=2*n-1;
	for(i=1;i<=m;i=i+2)
	{	
		for(a=1;a<=(m-i)/2;a++)
		{	printf(" ");
		}
		for(b=1;b<=i;b++)
		{	printf("#");
		}
		for(a=1;a<=(n-i)/2;a++)
		{	printf(" ");
		}
		printf("\n");
	}
	return 0;
}
