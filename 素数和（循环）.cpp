#include<stdio.h>
int main()
{	int a,b,c,t,x,n;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d %d",&a,&b);
		x=0;
		if(a==0)
			a=a+2;
		else if(a==1)
			a=a+1;
		for(n=a;n<=b;n++)
		{	
			for(c=2;c<n;c++)
			{	if(n%c==0)
				break;
			}
			if(c>=n)
			{	x=x+n;
				printf("%d ",n);
			}
		}
		if(x>0)
			printf("\n%d\n",x);
		else
			printf("NO\n");
	}
	return 0;
}
/*题题目描述
输入数字范围n,m（n>=0, m>=0, n<=m)，输出[n,m]区间中的所有素数和。

输入
测试次数T

每组测试数据一行，数字范围n m

输出
对每组测试数据，如果有素数，输出二行：

第一行：输出[n,m]间的素数

第二行：输出[n,m]间的素数和

如果没有素数，输出NO

样例输入
3
0 10
10 30
24 28



样例输出
2 3 5 7 
17
11 13 17 19 23 29 
112
NO*/
