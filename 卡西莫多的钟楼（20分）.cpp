#include<stdio.h>
int main()
{	int t,n,i,k,h,b;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{	b=2*n-1-2*(i-1);
			for(h=1;h<i;h++)
			{	printf(" ");
			}
			printf("x");
			for(k=1;k<=b;k++)
			{	printf(" ");
			}
			printf("x\n");
		}
		for(i=1;i<=n;i++)
		{	printf(" ");
		}
		printf("x\n");
		for(i=n;i>=1;i--)
		{	b=2*n-1-2*(i-1);
			for(h=i;h>1;h--)
			{	printf(" ");
			}
			printf("x");
			for(k=b;k>=1;k--)
			{	printf(" ");
			}
			printf("x\n");
		}
		printf("END\n");
	}
	return 0;
}
/*题目描述
    “卡西莫多失去了心爱的姑娘，终究也失去了他心爱的钟楼“。
    而李华发现原来巴黎圣母院大火并没有烧到卡西莫多的钟楼，因此他想要发出大大的‘x’图案对这句话进行反驳。


    本题的详细部分见输入/输出与样例输入/输出

输入
    测试样例有多组
    输入的第一行包括了一个整数T(1 <= T <= 10)，代表测试样例组数
    每组测试样例输入一个整数n(1 <= n <= 10)，代表发出的图案'x'的规模

输出
    对于每组测试样例，根据整数n输出规模为n的图案'x'（小写x），其后输出一行"END"（不带引号）
    规模n与图案'x'的对应规律请在样例输入输出中找出

样例输入
3
1
2
3
样例输出
x x
 x
x x
END
x   x
 x x
  x
 x x
x   x
END
x     x
 x   x
  x x
   x
  x x
 x   x
x     x
END*/
