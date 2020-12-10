#include<stdio.h>
int main()
{
	int n,i,b;
	float a[100],c,h,e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%f",&a[i]);
	}
	for(b=0;b<=(n-2);b++)
	{	for(i=0;i<=(n-2);i++)
			{	if(a[i]>a[i+1])
				{	e=a[i];
					a[i]=a[i+1];
					a[i+1]=e;
				}
			}
	}
	c=a[n-1];
	h=a[0];
	printf("%.2f %.2f",c,h);
	return 0;
}
/*题目描述
编制函数，其功能是在float类型一维数组中查找最大值、最小值，并将它们返回到调用程序。

* 输出保留两位小数

输入
n

n个浮点数

输出
最大值 最小值

样例输入
10
1.0
2.0
3.0
4.0
5.0
6.0
7.0
8.0
9.0
10.0
样例输出
10.00 1.00*/
