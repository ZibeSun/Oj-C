#include<stdio.h>
int main()
{	int m,n;
	scanf("%d",&m);
	for(n=m+1;;n++)
	{	if((n%5==1)&&(n%6==5)&&(n%7==4)&&(n%11==10))
		break;
	}
	printf("%d",n);
	return 0;
}
