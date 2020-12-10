#include<stdio.h>
#define PI 3.1415926
int main()
{	float r,v;
	scanf("%f",&r);
	v=(PI)*r*r*r*(4.0/3.0);
	printf("%.3f",v);
	return 0;

 } 
 /*题目描述
根据输入的半径值，计算球的体积。

输入
输入一个实数，表示球的半径。

输出
输出对应的球的体积，计算结果保留三位小数。

样例输入
1
样例输出
4.189
提示
 对于float a保留3位小数，可用printf("%.3f",a)进行输出。*/
