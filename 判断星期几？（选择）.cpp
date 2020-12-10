#include<stdio.h>
int main()
{	int t,y1,m1,d1,y2,m2,d2,a,w,n,x,b,c;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d/%d/%d %d\n%d/%d/%d",&y1,&m1,&d1,&a,&y2,&m2,&d2);
		if((y1%4==0)&&(y1%100!=0))
	{	n=366;
		switch(m2){
		case 12:x=31*6+30*4+29+d2;break;
		case 11:x=31*6+30*3+29+d2;break;
		case 10:x=31*5+30*3+29+d2;break;
		case 9:x=31*5+30*2+29+d2;break;
		case 8:x=31*4+30*2+29+d2;break;
		case 7:x=31*3+30*2+29+d2;break;
		case 6:x=31*3+30*1+29+d2;break;
		case 5:x=31*2+30*1+29+d2;break;
		case 4:x=31*2+29+d2;break;
		case 3:x=31*1+29+d2;break;
		case 2:x=31*1+d2;break;
		case 1:x=d2;break;
		}
	}
	else if(y1%400==0)
	{	n=366;
		switch(m2){
		case 12:x=31*6+30*4+29+d2;break;
		case 11:x=31*6+30*3+29+d2;break;
		case 10:x=31*5+30*3+29+d2;break;
		case 9:x=31*5+30*2+29+d2;break;
		case 8:x=31*4+30*2+29+d2;break;
		case 7:x=31*3+30*2+29+d2;break;
		case 6:x=31*3+30*1+29+d2;break;
		case 5:x=31*2+30*1+29+d2;break;
		case 4:x=31*2+29+d2;break;
		case 3:x=31*1+29+d2;break;
		case 2:x=31*1+d2;break;
		case 1:x=d2;break;
		}
	}
	else
	{	n=365;
		switch(m2){	
		case 12:x=31*6+30*4+28+d2;break;
		case 11:x=31*6+30*3+28+d2;break;
		case 10:x=31*5+30*3+28+d2;break;
		case 9:x=31*5+30*2+28+d2;break;
		case 8:x=31*4+30*2+28+d2;break;
		case 7:x=31*3+30*2+28+d2;break;
		case 6:x=31*3+30*1+28+d2;break;
		case 5:x=31*2+30*1+28+d2;break;
		case 4:x=31*2+28+d2;break;
		case 3:x=31*1+28+d2;break;
		case 2:x=31*1+d2;break;
		case 1:x=d2;break;
    	}
	}
	b=x%7;
	c=a+b;
	if(a==0)
		 w=b;
	else if(b==0)
		w=a;
	else if(c<7)
		w=c;
	else if(c>=7)
		w=c%7;
	switch(w)
	{	case 0:printf("%d/%.2d/%.2d是星期六\n",y2,m2,d2);break;
		case 1:printf("%d/%.2d/%.2d是星期日\n",y2,m2,d2);break;
		case 2:printf("%d/%.2d/%.2d是星期一\n",y2,m2,d2);break;
		case 3:printf("%d/%.2d/%.2d是星期二\n",y2,m2,d2);break;
		case 4:printf("%d/%.2d/%.2d是星期三\n",y2,m2,d2);break;
		case 5:printf("%d/%.2d/%.2d是星期四\n",y2,m2,d2);break;
		case 6:printf("%d/%.2d/%.2d是星期五\n",y2,m2,d2);break;
	}
		
		
	}
	return 0;
}
/*题目描述
给定y年1月1日是星期几，输入y年m月d日，计算并输出y年m月d日是星期几？

提示和要求：计算出从1月1日到m月d日的天数，利用得到的天数判定星期几。要求用switch输出星期几。

输入
测试次数t

每组测试数据格式如下：

y/1/1 星期几(0-6，星期天到星期六）

y/m/d

（不用考虑输入非法）

输出
对每组测试数据，输出y/m/d是星期几，具体格式见样例。

样例输入
3
2017/1/1 0
2017/10/17
2000/1/1 6
2000/10/1
2012/1/1 0
2012/12/31
样例输出
2017/10/17是星期二
2000/10/01是星期日
2012/12/31是星期一
*/
