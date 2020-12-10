#include<stdio.h>
int main()
{	int t,a,i,c,x,y,d;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&a);
		if(a%2!=0)
		{	printf("%d is not an even number.\n",a);
		}
		else if(a%2==0)
		{	printf("The solution for %d is:\n",a);
			d=0;
			for(i=2;i<=(a/2);i++)
			{	x=0;
				y=0;
				for(c=2;c<i;c++)
				{	if(i%c==0)
					break;
				}
				if(c>=i)
				{	x=i;
				}
				for(c=2;c<(a-i);c++)
				{	if((a-i)%c==0)
					break;
				}
				if(c>=(a-i))
				{	y=a-i;
				}
				if((x+y)==a)
				{	d++;
					printf("#%d: %d=%d+%d\n",d,a,x,y);
				}
			}
		}
	}
	return 0;
}
/*题目描述
 哥德巴赫猜想中提出，任何一个大于2的偶数都可以分为两个素数的和，且分解的解决方案有若干种。如：

10可以分解为3和7的和，也可以分解为5和5的和。

现要求对输入的正整数N（N > 2）验证哥德巴赫猜想，输出格式如下所示：

The solution for 10 is:

#1: 10=3+7

#2: 10=5+5

如果用户马大哈输入了非偶数，我们就要输出如下所示，提醒一下：

“xx is not an even number.”

输入
 第一行输入t，表示有t组样例输入；

接下来有t行，每一行输入一个正整数N（N > 2）

输出
对于每一组样例输入的N，要求验证其哥德巴赫猜想，输出格式如下所示：

The solution for 10 is:

#1: 10=3+7

#2: 10=5+5

其中#所跟的数字是第几个解决方法。

 

如果用户输入的是非偶数，则输出” xx is not an even number.”

样例输入
3
4 5 10
样例输出
The solution for 4 is:
#1: 4=2+2
5 is not an even number.
The solution for 10 is:
#1: 10=3+7
#2: 10=5+5*/ 
