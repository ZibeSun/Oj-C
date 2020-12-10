#include<stdio.h>
int main()
{	int a[3][3],t,i,b,min,m,j,k,l;
	scanf("%d",&t);
	while(t--)
	{	for(i=0;i<3;i++)
		{	for(b=0;b<3;b++)
			{	scanf("%d",&a[i][b]);
			}
		}
		min=a[0][0];
		for(i=0;i<3;i++)
		{	for(b=0;b<3;b++)
			{	if(min>a[i][b])
				{	min=a[i][b];
				}
			}
		}
		j=0;
		for(i=0;i<3;i++)
		{	for(b=0;b<3;b++)
			{	if(min<a[i][b])
				{	m=a[i][b];
					j++;
					break;
				}
			}
			if(j>0)
			break;
		}
		for(i=0;i<3;i++)
		{	for(b=0;b<3;b++)
			{	if((m>a[i][b])&&(a[i][b]!=min))
				{	m=a[i][b];
				}
			}
		}
		j=0;
		for(i=0;i<3;i++)
		{	for(b=0;b<3;b++)
			{	if(m==a[i][b])
				{	k=i;
					l=b;
					j++;
					break;
				}
			}
			if(j>0)
			break;
		}
		printf("a[%d][%d]=%d\n",k,l,m);
	}
	return 0;
}
/*题目描述
输入一个3行3列的整数矩阵，找出矩阵中第二小的数（假设一定存在第二小的数），如果存在多个第二小的数，找出排在矩阵最前面的一个，也就是下标最小的那个，具体输出格式看样例。

输入
测试数据的组数t

第一个矩阵

第二个矩阵

…..

输出
每个矩阵第二小的数的位置及其值

样例输入
2
1 2 3
0 4 5
0 0 6
1 0 9
-8 2 10
7 6 100
样例输出
a[0][0]=1
a[0][1]=0*/ 
