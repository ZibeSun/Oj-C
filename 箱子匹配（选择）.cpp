#include<stdio.h>
int main()
{	int t,a1,b1,h1,a2,b2,h2;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d %d %d\n%d %d %d",&a1,&b1,&h1,&a2,&b2,&h2);
		if(a1<=a2&&b1<=b2&&h1<=h2)
			printf("yes\n");
		else if(a1<=a2&&b1<=h2&&h1<=b2)
			printf("yes\n");
		else if(a1<=b2&&b1<=a2&&h1<=h2)
			printf("yes\n");
		else if(a1<=b2&&b1<=h2&&h1<=a2)
			printf("yes\n");
		else if(a1<=h2&&b1<=b2&&h1<=a2)
			printf("yes\n");
		else if(a1<=h2&&b1<=a2&&h1<=b2)
			printf("yes\n");
		else if(a1>=a2&&b1>=b2&&h1>=h2)
			printf("yes\n");
		else if(a1>=a2&&b1>=h2&&h1>=b2)
			printf("yes\n");
		else if(a1>=b2&&b1>=a2&&h1>=h2)
			printf("yes\n");
		else if(a1>=b2&&b1>=h2&&h1>=a2)
			printf("yes\n");
		else if(a1>=h2&&b1>=b2&&h1>=a2)
			printf("yes\n");
		else if(a1>=h2&&b1>=a2&&h1>=b2)
			printf("yes\n");

		else
			printf("no\n");
	}
	return 0;
}
/*题目描述
每个箱子都有长宽高，我们需要判断一个箱子能否放入另一个箱子中。

例如有箱子A的尺寸是 3 x 4 x 5，箱子B的尺寸 是 5 x 6 x 4，经过比较判断，可以知道箱子A能够放入箱子B中，我们就说箱子A匹配箱子B。

注意，当两个箱子尺寸相等，我们也认为它们匹配。

输入
第一行输入参数T，表示有T个测试实例

第二行输入第1组实例的箱子A的长、宽、高，输入数值为小于1000的自然数

第三行输入第1组实例的箱子B的长、宽、高，输入数值为小于1000的自然数

以此类推

输出
如果两个箱子匹配，输出yes，否则输出no。逐行输出每一组的箱子匹配结果。

样例输入
3
3 4 5
5 6 4
5 6 4
3 4 5
5 6 7
7 4 7
样例输出
yes
yes
no*/
