#include<stdio.h>
int main()
{	int y,m,d,x,n;
	scanf("%d %d %d",&y,&m,&d);
	if((y%4==0)&&(y%100!=0))
	{	n=366;
		switch(m){
		case 12:x=366-(31*6+30*4+29+d);break;
		case 11:x=366-(31*6+30*3+29+d);break;
		case 10:x=366-(31*5+30*3+29+d);break;
		case 9:x=366-(31*5+30*2+29+d);break;
		case 8:x=366-(31*4+30*2+29+d);break;
		case 7:x=366-(31*3+30*2+29+d);break;
		case 6:x=366-(31*3+30*1+29+d);break;
		case 5:x=366-(31*2+30*1+29+d);break;
		case 4:x=366-(31*2+29+d);break;
		case 3:x=366-(31*1+29+d);break;
		case 2:x=366-(31*1+d);break;
		case 1:x=366-d;break;
		}
	}
	if(y%400==0)
	{	n=366;
		switch(m){
		case 12:x=366-(31*6+30*4+29+d);break;
		case 11:x=366-(31*6+30*3+29+d);break;
		case 10:x=366-(31*5+30*3+29+d);break;
		case 9:x=366-(31*5+30*2+29+d);break;
		case 8:x=366-(31*4+30*2+29+d);break;
		case 7:x=366-(31*3+30*2+29+d);break;
		case 6:x=366-(31*3+30*1+29+d);break;
		case 5:x=366-(31*2+30*1+29+d);break;
		case 4:x=366-(31*2+29+d);break;
		case 3:x=366-(31*1+29+d);break;
		case 2:x=366-(31*1+d);break;
		case 1:x=366-d;break;
		}
	}
	else
	{	n=365;
		switch(m){	
		case 12:x=365-(31*6+30*4+28+d);break;
		case 11:x=365-(31*6+30*3+28+d);break;
		case 10:x=365-(31*5+30*3+28+d);break;
		case 9:x=365-(31*5+30*2+28+d);break;
		case 8:x=365-(31*4+30*2+28+d);break;
		case 7:x=365-(31*3+30*2+28+d);break;
		case 6:x=365-(31*3+30*1+28+d);break;
		case 5:x=365-(31*2+30*1+28+d);break;
		case 4:x=365-(31*2+28+d);break;
		case 3:x=365-(31*1+28+d);break;
		case 2:x=365-(31*1+d);break;
		case 1:x=365-d;break;
    	}
	}
	printf("%d",x);
	return 0;
}
/*��Ŀ����
����һ�����ڣ�������ھ��뵱�����һ�������������2016��12��10�գ�����2016��׻���21��.

����
����ĳ��ĳ��ĳ��

���
����������һ�컹�ж�����

��������
2016 12 10
�������
21*/
