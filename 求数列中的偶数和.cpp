#include<stdio.h>
int main()
{	int t,sum=0,n,i=1;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		if(n%2==0)
		{	sum=sum+n;
			i++;
			}
		else
			i++;
	}
	printf("%d",sum);
	return 0;
}
/*题目描述
编制程序，输入n个整数（n从键盘输入,n>0）,输出它们的偶数和。

输入
n

n个整数

输出
其中偶数的和

样例输入
10
1 2 3 4 5 6 7 8 9 10
样例输出
30*/
