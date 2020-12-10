#include<stdio.h>
int main()
{	int n,m,i,a;
	scanf("%d",&n);
	m=2*n-1;
	for(i=1;i<=m;i=i+2)
	{	
		for(a=1;a<=(n-i)/2;a++)
		{	printf(" ");
		}
		printf("#\n");
	}
	return 0;
}
