#include<stdio.h>
int main()
{	char s[100],a[100];
	int n,i,j,b;
	gets(s);
	scanf("%d",&n);
	j=0;
	for(i=n;i<=100;i++)
	{	if(s[i]=='\0')
		{	b=i;
			break;
		}
		else
		{	a[j]=s[i];
			j++;
		}
	}
	//printf("%d",j);
	for(i=0;i<n;i++)
	{	a[j]=s[i];
		j++;
	}
	puts(a);
	//printf("%d",j);
	return 0;
}
/*题目描述
输入一个字符串和一个非负整数N，要求将字符串循环左移N次。

输入
输入在第1行中给出一个不超过100个字符长度的、以回车结束的非空字符串；第2行给出非负整数N。

输出
在一行中输出循环左移N次后的字符串。

样例输入
Hello World!
2
样例输出
llo World!He*/

