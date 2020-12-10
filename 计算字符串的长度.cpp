#include<stdio.h>
int main()
{	int t,i,sum;
	char c[30];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(c);
		for(i=0;i<30;i++)
		{	if(c[i]=='\0')
			break;
		}
		sum=i;
		printf("%d\n",sum);
	}
	return 0;
}
/*题目描述
计算字符串S的长度，功能与strlen函数相同，但不能调用库函数strlen，否则不给分。输入的字符串不包含空格。

输入
输入测试组数t

对于每组测试，输入字符串S（长度<=30）

输出
对于每组测试，输出S的长度

样例输入
1
hehe
样例输出
4*/
