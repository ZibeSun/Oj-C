#include<stdio.h>
int main()
{	float x;
	int t;
	scanf("%d",&t);
	while(t--)
	{	scanf("%f",&x);
		if(x>=85)
			printf("A\n");
		else if(x<85&&x>=75)
			printf("B\n");
		else if(x<75&&x>=65)
			printf("C\n");
		else if(x<65&&x>=60)
			printf("D\n");
		else
			printf("F\n");
	}
	return 0;
}
/*题目描述
对于给出0～100之间的成绩进行成绩评定，大于等于85是A，75分至85以下是B，65至75分以下是C，60至65分以下是D，60分以下是F

输入
第一行输入T表示有T个测试实例

第二行起，每行输入1个成绩，连续输入T行

输出
输出成绩等级

样例输入
3
0
55
78
样例输出
F
F
B
提示
输出单个字符请用单引号，不要用字符串的双引号


注意成绩不一定是整数*/
