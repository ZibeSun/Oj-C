#include<stdio.h>
int main()
{	int x,a,b,c,n,m;
	scanf("%d %d",&m,&n);
	for(x=m;x>=m&&x<=n;x++)
	{	a=x%10;
		c=x/100;
		b=(x-c*100)/10;
		if(a*a*a+b*b*b+c*c*c==x)
		printf("%d\n",x);
	}
	return 0;
}
/*题目描述
如果一个三位数等于它自己的每一位数字的立方之和，则称此数为“水仙化数”，如153=13+53+33。给出范围的起止值，输出该范围的水仙花数。

输入
范围的开始与终止值

输出
该范围的水仙花数

样例输入
100 999
样例输出
153
370
371
407*/
