#include<stdio.h>
int main()
{	float f,c,s;
	scanf("%f",&f);
	s=f-32.0;
	c=(5.0/9.0)*s;
	printf("c=%.2f",c);
	return 0;
 } 
 /*题目描述
输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9 输出要求有文字说明，取位2小数。
输入
一个华氏温度，浮点数
输出
摄氏温度，浮点两位小数
样例输入
-40
样例输出
c=-40.00*/
