#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	float r,a,b,n,Area;
	scanf("%f,%f",&r,&n);
	a=2.0*(PI);
	b=a/n;
	Area=n*r*r*sin(b)/2.0;
	printf("Area=%.2f",Area);
	return 0;
}
/*��Ŀ����
����Բ�뾶R��������n�����㲢���Բ�ڽ���n���ε������

�����ʽ��nR*Rsin(2��/n)/2��

C�������Ѷ������Һ���sin(x)������x�ǻ��ȡ�ʹ��sin(x)�����ͷ�ļ�math.h��

�е�ȡֵΪ3.1415926��

����
������Բ�뾶r,������n

���
Բ�ڽ���n����������������2λС����

��������
10,4
�������
Area=200.00
��ʾ
 ����float a����2λС��������printf("%.2f",a)���������*/
