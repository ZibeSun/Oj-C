#include<stdio.h>
int main()
{	int a[20],i,n;
	for(i=0;i<=19;i++)
	{	scanf("%d",&a[i]);
		for(n=0;n<=(i-1);n++)
		{	if(a[i]%a[n]==0)
			{	printf("%d ",a[i]);
				break;
			}
		}
	}
	return 0;
}
