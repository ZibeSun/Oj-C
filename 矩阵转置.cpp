#include<stdio.h>
int main()
{	int t,m,n,i,j;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d %d",&m,&n);
		int a[m][n],b[n][m];
		for(i=0;i<=(m-1);i++)
		{	for(j=0;j<=(n-1);j++)
			{	scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<=(n-1);i++)
		{	for(j=0;j<=(m-1);j++)
			{	b[i][j]=a[j][i];
				if(j==(m-1))
				{	printf("%d",b[i][j]);
				}
				else
				{	printf("%d ",b[i][j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
