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
/*��Ŀ����
 ��°ͺղ�����������κ�һ������2��ż�������Է�Ϊ���������ĺͣ��ҷֽ�Ľ�������������֡��磺

10���Էֽ�Ϊ3��7�ĺͣ�Ҳ���Էֽ�Ϊ5��5�ĺ͡�

��Ҫ��������������N��N > 2����֤��°ͺղ��룬�����ʽ������ʾ��

The solution for 10 is:

#1: 10=3+7

#2: 10=5+5

����û����������˷�ż�������Ǿ�Ҫ���������ʾ������һ�£�

��xx is not an even number.��

����
 ��һ������t����ʾ��t���������룻

��������t�У�ÿһ������һ��������N��N > 2��

���
����ÿһ�����������N��Ҫ����֤���°ͺղ��룬�����ʽ������ʾ��

The solution for 10 is:

#1: 10=3+7

#2: 10=5+5

����#�����������ǵڼ������������

 

����û�������Ƿ�ż����������� xx is not an even number.��

��������
3
4 5 10
�������
The solution for 4 is:
#1: 4=2+2
5 is not an even number.
The solution for 10 is:
#1: 10=3+7
#2: 10=5+5*/ 
