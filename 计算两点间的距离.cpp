#include<stdio.h>
#include<math.h>
int main()
{	float x1,y1,x2,y2,a,l;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	l=sqrt(a);
	printf("%.2f",l);
	return 0;
}
/*题目描述
输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。

输入
输入由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。

输出
输出一行，结果保留两位小数。

样例输入
0 0 0 1
样例输出
1.00*/
