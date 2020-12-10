#include<stdio.h>
int main()
{	char c[100];
	int i,a;
	gets(c);
	for(i=0;i<100;i++)
	{	if(c[i]=='\0')
		{	a=i-1;
			break;
		}
	}
	for(i=a;i>=0;i--)
	{	printf("%c",c[i]);
	}
	return 0;
}
/*char nx(char c[100])
{	char k[100];
	int i,a,b,h;
	for(i=0;i<100;i++)
	{	if(c[i]=='\0')
		a=i-1;
	}
	for(i=0;i<=a;i++)
	{	k[a]=c[a-i];
	}
	if(a%2==0)
	{	b=(a/2)-1;
		for(i=0;i<=b;i++)
		{	h=c[i];
			c[i]=c[a-i];
			c[a-i]=h;
		}
	}
	if(a%2!=0)
	{	b=((a+1)/2)-1;
		for(i=0;i<=b;i++)
		{	h=c[i];
			c[i]=c[a-i];
			c[a-i]=h;
		}
	}
	return(c[100]);
}*/
/*题目描述
写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串。

输入
一行字符

输出
逆序后的字符串

样例输入
123456abcdef
样例输出
fedcba654321*/
