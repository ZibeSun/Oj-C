#include<stdio.h>
int main()
{	int t,n,i,b,j,k;
	double a[100],m,s;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		s=0;
		for(i=0;i<n;i++)
		{	scanf("%lf",&a[i]);
		}
		for(b=0;b<=(n-2);b++)
		{	for(i=0;i<=(n-2);i++)
			{	if(a[i]>a[i+1])
				{	m=a[i];
					a[i]=a[i+1];
					a[i+1]=m;
				}
			}
		}
		j=n/2;
		k=(n+1)/2;
		if(n%2==0)
		{	s=(a[j-1]+a[j])/2;
		}
		else if(n%2!=0)
		{	s=a[k-1];
		}
		printf("%.2lf\n",s);
	}
	return 0;
}
/*题目描述
什么是中位数？所谓中位数就是一组数据从小到大排列后中间的那个数字。但是有的时候一组数据的数目是偶数，那么中位数就是中间两个数值相加除以2。输入n（n<=10）个整数，求这n个整数的中位数。

输入
测试数据的组数t

第一组数据的个数n n个数

…….

输出
每组数据的中位数

样例输入
2
7
1.1 2.2 3.3 4.4 5.5 6.6 7.7
8
8 7 6 5 4 3 2 1

样例输出
4.40
4.50*/ 
