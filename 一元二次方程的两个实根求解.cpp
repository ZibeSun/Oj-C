#include<stdio.h>
#include<math.h>
int main()
{	float a,b,c,d,e,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	e=sqrt(d);
	x1=(-b+e)/(2*a);
	x2=(-b-e)/(2*a);
	if(d>0)
	if(a!=0) printf("x1=%.2f x2=%.2f",x1,x2);
	else printf("error");
	return 0;
}
/*题目描述
输入一元二次方程ax^2+bx+c=0的系数a、b、c。

假设输入始终满足b^2-4ac>0且a不等于0,计算并输出该方程的两个实根。

C语言中计算非负实数的平方根函数： double sqrt(double);

头文件：math.h。

输入
一元二次方程的系数a、b、c

输出
ax^2+bx+c=0的两个实根

样例输入
1 0 -1
样例输出
x1=1.00 x2=-1.00*/
