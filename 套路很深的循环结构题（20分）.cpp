#include<stdio.h>
int main()
{	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{	int x=1;
		scanf("%d",&n);
		for(i=1;i<=n;i=i+2)
		{	x=x*i;
		}
		printf("%d\n",x);
	}
	return 0;
}
/*题目描述
    相信大家对诸如“n的阶乘”、“1×2×3×...×n”之类的题目已经相当熟悉了，现在出题人想将这种题目稍稍变形，作为今天的考题！


    给定一个奇数n，求1×3×5×...×n

输入
    测试数据有多组 
    第一行输入一个整数T(1 <= T <= 10)，代表了测试组数 
    每组测试数据包括一个整数n，保证n是正奇数

输出
    对于每组测试数据，输出题目中要求的值
    数据保证计算结果在int可以表示的范围内

样例输入
3
1
3
5
样例输出
1
3*/
