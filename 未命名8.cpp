#include<stdio.h>
int main()
{	int n,i,j,c[20],sum;
	char a[20];
	scanf("%d",&n);
	getchar();
	while(n--)
	{	gets(a);
		sum=a[2]-48;
		printf("%d",sum);
	}
}
