#include<stdio.h>
#include<string.h>
int main()
{	int t,i,j;
	char s[100],c[100];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(s);
		j=0;
		for(i=0;i<100;i++)
		{	if(s[i]=='\0')
			{	break;
			}
			else if((s[i]!='\0')&&(s[i]!=' '))
			{	c[j]=s[i];
				j++;
			}
		}
		puts(c);
		for(i=0;i<100;i++)
		{	c[i]='\0';
		}
	}
	return 0;
}
/*题目描述
把一个字符串中包含的空格全部删除掉

输入
第一行输入T表示有T个测试实例

第二行起，每行输入一串字符（至少包含一个非空格字符），输入T行

输出
输出删除空格后的字符串

样例输入
4
Shen Zhen
  China  Go
          A
AB    CD  EF
样例输出
ShenZhen
ChinaGo
A
ABCDEF*/
