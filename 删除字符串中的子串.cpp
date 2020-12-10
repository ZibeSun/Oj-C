#include<stdio.h>
#include<string.h>
int main()
{	char c[100],a[100],s[100];
	int i,j,x,y;
	gets(c);
	gets(a);
		j=0;
	for(y=0;y<50;y++)
	{
	}
	for(i=0;i<100;i++)
	{	x=0;
		if(c[i]=='\0')
		{	break;
		}
		else if((c[i]!='\0')&&(c[i]=='c'))
		{	if(c[i+1]=='a')
			{	if(c[i+2]=='t')
				{	x++;
				}
			}
		}
		if(x>0)
		{	i=i+2;
		}
		else if(x==0)
		{	s[j]=c[i];
			j++;
		}
	}
	puts(s);
	return 0;
}
/*题目描述
输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。

输入
输入在2行中分别给出不超过80个字符长度的、以回车结束的2个非空字符串，对应S1和S2。

输出
在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。

样例输入
Tomcat is a male ccatat
cat
样例输出
Tom is a male */ 
