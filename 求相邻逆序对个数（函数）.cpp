#include<stdio.h>
int main()
{	int t,i,sum;
	char c[100];
	scanf("%d",&t);
	getchar();
	while(t--)
	{	gets(c);
		sum=0;
		for(i=0;i<100;i++)
		{	if((c[i]>c[i+1])&&(c[i+1]!='\0'))
			{	sum++;
			}
			else if(c[i+1]=='\0')
			break;
		}
		printf("%d\n",sum);
		for(i=0;i<100;i++)
		{	if((c[i]>c[i+1])&&(c[i+1]!='\0'))
			{	printf("%c %c\n",c[i],c[i+1]);
			}
			else if(c[i+1]=='\0')
			break;
		}
	}
	return 0;
}
/*题目描述
有一实数或者字母序列A[1]、A[2]、A[3]、...、A[n-1] 、A[n]，若A[i]＞A[i+1]，则称A[i]与A[i+1]构成了一个逆序对。输入字符串，输出其相邻逆序对个数和所有相邻逆序对。

要求求字符串中的逆序对个数和所有逆序对用子函数实现。

不可以定义全局变量存储上述要求的计算结果，必须使用函数传参。

输入
测试次数t

每组测试数据是一个字符串(假设字符串长度小于等于20)

输出
对每组测试数据，输出逆序对个数。如果逆序对个数大于0，输出从左至右按顺序出现的逆序对

样例输入
5
apple
university
abcdefghijklmnopqrst
C++
static

样例输出
2
p l
l e
4
u n
n i
v e
s i
0
1
C +
3
t a
t i
i c*/
