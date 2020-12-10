#include<stdio.h>
int main()
{
	int m,a,b,c,n,sum;
	scanf("%d",&m);
	a=m%10;
	c=m/100;
	n=m-c*100;
	b=n/10;
	sum=a+b+c;
	printf("%d",sum);
	return 0;
}
/*题目描述
输入一个数，求该数个位，十位，百位上的数之和 

输入
共一行，包含一个三位数整数； 

输出
共一行，包含一个整数

样例输入
123
样例输出
6*/
