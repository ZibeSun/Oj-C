#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	float r,a,b,n,Area;
	scanf("%f,%f",&r,&n);
	a=2.0*(PI);
	b=a/n;
	Area=n*r*r*sin(b)/2.0;
	printf("Area=%.2f",Area);
	return 0;
}
/*题目描述
输入圆半径R、正整数n，计算并输出圆内接正n边形的面积。

面积公式：nR*Rsin(2π/n)/2。

C语言中已定义正弦函数sin(x)，其中x是弧度。使用sin(x)需包含头文件math.h。

π的取值为3.1415926。

输入
浮点数圆半径r,正整数n

输出
圆内接正n边形面积，结果保留2位小数。

样例输入
10,4
样例输出
Area=200.00
提示
 对于float a保留2位小数，可用printf("%.2f",a)进行输出。*/
