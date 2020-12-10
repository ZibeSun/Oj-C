#include<stdio.h>
int main()
{	int t,n,i,b,a[100];
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		for(i=0;i<n;i++)
		{	scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{	if(a[i]<10)
			{	printf("   ");
				printf("%d     ",a[i]);
				for(b=0;b<a[i];b++)
				{	printf("*");
				}
				printf("\n");
			}
			else if((a[i]>=10)&&(a[i]<100))
			{	printf("  ");
				printf("%d     ",a[i]);
				for(b=0;b<a[i];b++)
				{	printf("*");
				}
				printf("\n");
			}
			else if((a[i]>=100)&&(a[i]<1000))
			{	printf(" ");
				printf("%d     ",a[i]);
				for(b=0;b<a[i];b++)
				{	printf("*");
				}
				printf("\n");
			}
			else if((a[i]>=1000)&&(a[i]<10000))
			{	printf("%d     ",a[i]);
				for(b=0;b<a[i];b++)
				{	printf("*");
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}
/*题目描述
下图为5个数值及其所对应的棒图，本题给出t组数据，每组数据包含n（n不超过10）个数值，请绘制出这n个数值所对应的棒图。注意，每一行开始的数字占用4列的宽度，该数字距离第一颗*的距离为5个空格；每个图形的结束输出一个空行。



输入

测试数据的组数t

第一组数据的个数n  n个数据

……

输出
相应的棒图

样例输入
2
5
5 10 3 1 4
8
1 2 3 4 5 6 7 8
样例输出
   5     *****
  10     **********
   3     ***
   1     *
   4     ****

   1     *
   2     **
   3     ***
   4     ****
   5     *****
   6     ******
   7     *******
   8     ********
   */ 
