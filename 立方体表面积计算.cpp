#include<stdio.h>
int main()
{
	int a,b,c,s,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&a,&b,&c);
		s=a*b*2+b*c*2+c*a*2;
		printf("%d\n",s);
	}
	return 0;
}
