#include<stdio.h>
int main()
{	int a=0,n=0,k=0,h=0,x;
	for(;;)
	{	x=getchar();
		if((x>=65&&x<=90)||(x>=97&&x<=122))
			a++;
		else if(x>=48&&x<=57)
			n++;
		else if(x==' ')
			k++;
		else if((x>=33&&x<=47)||(x>=58&&x<=64)||(x>=91&&x<=96)||(x>=123&&x<=127))
			h++;	
		else if(x='\n')
			break;	
	} 
	printf("%d %d %d %d",a,n,k,h);
	return 0;
}
/*题目描述
输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。

输入
一行字符

输出
统计值

样例输入
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
样例输出
23 16 2 4*/
