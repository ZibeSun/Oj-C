#include<stdio.h>
int find(int c[10],int a)
{	int i,p=-1;
	for(i=0;i<10;i++)
	{	if(c[i]==a)
		{	p=i;
		}
	}
	return(p);
}
int display(int c[10],int length)
{	int i;
	for(i=0;i<length;i++)
	{	if(i==length-1)
		printf("%d",c[i]);
		else
		printf("%d ",c[i]);
	}
}
int voidsortup(int c[11],int length)
{	int b,i,e;
	for(b=0;b<=length-2;b++)
	{	for(i=0;i<=length-2;i++)
		{	if(c[i]>c[i+1])
			{	e=c[i];
				c[i]=c[i+1];
				c[i+1]=e;
			}
		}
	}
}
int voidreverse(int c[11],int length)
{	int i;
	for(i=length-1;i>=0;i--)
	{	if(i==0)
		printf("%d",c[i]);
		else
		printf("%d ",c[i]);
	}
}
int main()
{	int i,n,a,h,c[10];
	scanf("%d",&n);
	while(n--)
	{	for(i=0;i<10;i++)
		{	scanf("%d",&c[i]);
		}
		scanf("%d",&a);
		if(a%2!=0)
		{	h=find(c,a);
			if(h!=-1)
			{	for(i=h;i<10;i++)
				{	c[i]=c[i+1];
				}
				voidsortup(c,9);
				display(c,9);
				printf("\n");
			}
			else if(h==-1)
			{	int k[10],j[10],x=0,y=0;
				for(i=0;i<10;i++)
				{	if(c[i]%2!=0)
					{	k[x]=c[i];
						x=x+1;
					}
				}
				voidsortup(k,x);
				voidreverse(k,x);
				printf(" ");
				for(i=0;i<10;i++)
				{	if(c[i]%2==0)
					{	j[y]=c[i];
						y=y+1;
					}
				}
				voidsortup(j,y);
				voidreverse(j,y);
				printf("\n");
			}
		}
		else if(a%2==0)
		{	h=find(c,a);
			if(h==-1)
			{	int k[11];
				for(i=0;i<11;i++)
				{	if(i==10)
					k[i]=a;
					else
					k[i]=c[i];
				}
				voidsortup(k,11);
				voidreverse(k,11);
				printf("\n");
			}
			else if(h!=-1)
			{	int k[10],j[10],x=0,y=0;
				for(i=0;i<10;i++)
				{	if(c[i]%2!=0)
					{	k[x]=c[i];
						x=x+1;
					}
				}
				voidsortup(k,x);
				voidreverse(k,x);
				printf(" ");
				for(i=0;i<10;i++)
				{	if(c[i]%2==0)
					{	j[y]=c[i];
						y=y+1;
					}
				}
				voidsortup(j,y);
				voidreverse(j,y);
				printf("\n");
			}
		}
	}
	return 0;
}
/*题目描述
从键盘输入10个整数（10个整数均不相同）， 然后再从键盘中输入一个整数a，如果该整数a为奇数， 且与这10个整数中的任一个数相同，则删掉与a相同的 这个数，并将剩下的9个数按升序排序输出；若a为偶数， 且与这10个数都不同，则加入a，并将这11个数降序排 序输出；否则，则将这10个数奇数在前，偶数在后， 降序排列输出。例如，10个数分别为6，89，34，12， 0，-8，78，15，9，3.若a为9，则输出为：-8，0，3， 6，12，15，34，78，89.若a为2，则输出为：89，78， 34，15，12，9，6，3，2，0，-8.若a为7或者12，则 输出为：89，15，9，3，78，34，12，6，0，-8.

要求：使用函数解决本题，至少编写以下几个函数，1、升序排序函数void sort(int a[], int n)；2、查找函数int find(int a[],int n,int value)----在大小为n的a数组中查找值为value的元素，找到就返回元素的下标，找不到，就返回-1；3、输出函数display(int a[], int n)---逐个输出数组a的元素；4、反转数组函数void reverse(int a[], int n)----将数组逆序。
输入
测试数据的组数n

第一组测试数据的10个整数

第一组的整数a

第二组测试数据的10个整数

第二组的整数a

......

第n组测试数据的10个整数

第n组的整数a

输出
第一组数据排序输出

第二组数据排序输出

.......

第n组数据排序输出

样例输入
3
6 89 34 12 0 -8 78 15 9 3
9
6 89 34 12 0 -8 78 15 9 3
2
6 89 34 12 0 -8 78 15 9 3
7

样例输出
-8 0 3 6 12 15 34 78 89
89 78 34 15 12 9 6 3 2 0 -8
89 15 9 3 78 34 12 6 0 -8*/


