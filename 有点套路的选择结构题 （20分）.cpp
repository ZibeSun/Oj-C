#include<stdio.h>
int main()
{	int x,y;
	scanf("%d",&x);
	if(x>=2)
	{	y=x*x;
	}
	else if((-2<=x)&&(x<2))
	{	y=2*x;
	}
	else if(x<-2)
	{	y=-x*x;
	}
	printf("%d",y);
	return 0;
}
/*题目描述
    分段函数求解一直作为选择结构经典练习题而出现，相信大家已经摸清了这种题目的套路，现在如下分段函数，根据给定的x求解其值
     

输入
    输入包括一个整数x(-100 <= x <= 100)，代表输入的x的值

输出
    对于每组测试样例，输出f(x)

样例输入
-3
样例输出
-9*/
