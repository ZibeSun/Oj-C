#include<stdio.h>
int main()
{	int t,i,x,y,a,b,n,c;
	int sum=1;
	double d=0;
	scanf("%d",&t);
	while(t--)
	{	printf("1 计算n！\n2 输出素数\n3 判定闰年\n");
		scanf("%d ",&x);
		if(x==1||x==2||x==3)
		{
			switch(x)
		{	case 1:
		{	
				scanf("%d",&n);
				for(i=1;i<=n;i++)
					sum=sum*i;
				printf("%d\n\n",sum);
				fflush(stdin);
				break;
		}
			case 2:
		{		scanf("%d %d",&a,&b);
				for(n=a;n<=b;n++)
				{	for(c=2;c<n;c++)
					{	if(n%c==0)
							break;
					}
					if(c>=n)
						printf("%d ",n);
				}
				printf("\n\n");
				fflush(stdin);
				break;
		}
			case 3:
		{		scanf("%d",&y);
				if((y%4==0)&&(y%100!=0))
					printf("%d是闰年\n\n",y);
				else if(y%400==0)
					printf("%d是闰年\n\n",y);
				else
					printf("%d非闰年\n\n",y);
				fflush(stdin);
				break;
		}
		}
		}
		else
		{
			printf("INPUT ERROR!\n\n");
			fflush(stdin);
			
		}
	}
	return 0;
}
/*题目描述
输出如下菜单：

1 计算n!

2 输出素数

3 判定闰年

根据输入（1、2、3），接受数据输入，计算n!或输出某范围内的所有素数或判定给定年是否闰年，并输出计算结果。

要求：用switch实现。

输入
测试次数t

每组测试数据格式如下：

选项(1,2,3或其它），后跟需要的数据。

如: 输入1 10，表示计算n!。

     输入2 10 100，表示输出10到100之间的所有素数。

     输入3 2000，表示判定2000是否闰年。 

输出
对每组测试数据，首先输出菜单。

根据输入选项，输出相应计算结果。如果选项非1到3，输出INPUT ERROR!。

n！—输出计算结果。

闰年—输出“2000是闰年”，“2017非闰年”等信息。

样例输入
2
3 2000
2 10 20

样例输出
1 计算n!
2 输出素数
3 判定闰年
2000是闰年

1 计算n!
2 输出素数
3 判定闰年
11 13 17 19 
*/
