#include<stdio.h>
int main()
{	int n,x=1,i;
	scanf("%d",&n);
	for(n=n-1;n!=0;n--)
	{	x=(x+1)*2; 
	}
	printf("%d",x);
	return 0;
}
