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
	{	case 0:printf("%d/%.2d/%.2d��������\n",y2,m2,d2);break;
		case 1:printf("%d/%.2d/%.2d��������\n",y2,m2,d2);break;
		case 2:printf("%d/%.2d/%.2d������һ\n",y2,m2,d2);break;
		case 3:printf("%d/%.2d/%.2d�����ڶ�\n",y2,m2,d2);break;
		case 4:printf("%d/%.2d/%.2d��������\n",y2,m2,d2);break;
		case 5:printf("%d/%.2d/%.2d��������\n",y2,m2,d2);break;
		case 6:printf("%d/%.2d/%.2d��������\n",y2,m2,d2);break;
	}
		
		
	}
	return 0;
}
/*��Ŀ����
����y��1��1�������ڼ�������y��m��d�գ����㲢���y��m��d�������ڼ���

��ʾ��Ҫ�󣺼������1��1�յ�m��d�յ����������õõ��������ж����ڼ���Ҫ����switch������ڼ���

����
���Դ���t

ÿ��������ݸ�ʽ���£�

y/1/1 ���ڼ�(0-6�������쵽��������

y/m/d

�����ÿ�������Ƿ���

���
��ÿ��������ݣ����y/m/d�����ڼ��������ʽ��������

��������
3
2017/1/1 0
2017/10/17
2000/1/1 6
2000/10/1
2012/1/1 0
2012/12/31
�������
2017/10/17�����ڶ�
2000/10/01��������
2012/12/31������һ
*/
