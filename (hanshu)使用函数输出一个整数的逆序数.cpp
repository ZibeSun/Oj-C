#include<stdio.h>
int reverse(int n)
{	int z,x,y,m;
	if(n<0)
	{	m=0-n;
		for(m=m;m>0;m=m/10)
		{	x=m%10;
			y=y*10+x;
		}
		y=0-y;
	}
	else if(n>0)
	{	for(n=n;n>0;n=n/10)
		{	x=n%10;
			y=y*10+x;
		}
	}
	z=y;
	return(z);
}
int main()
{	int n;
	scanf("%d",&n);
	printf("%d",reverse(n));
	return 0;
}

//输入
//输入一个整数

//输出
//输出逆序结果。

//样例输入
//-12340
//样例输出
//-4321
