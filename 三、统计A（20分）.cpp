#include<stdio.h>
int main()
{	char c[100];
	int i,sum;
	gets(c);
	sum=0;
	for(i=0;i<100;i++)
	{	if((c[i]=='A')||(c[i]=='a'))
		sum=sum+1;
		else if(c[i]=='\0')
		break;
	}
	printf("%d",sum);
	return 0;
}
/*题目描述
输入一行字符，以“#”结尾，统计并输出字母A和a出现的次数。

输入
一行字符串，以“#”结尾。

输出
输出字母A和a出现的次数

样例输入
12cdfd34AAA()&hjGFF56!aa@78#
样例输出
5*/ 
