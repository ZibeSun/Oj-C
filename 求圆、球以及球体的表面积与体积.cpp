#include<stdio.h>
#define PI 3.14
int main()
{	float r,h,C1,Sa,Sb,Va;
	double Vb;
	scanf("%f %f",&r,&h);
	C1=2*PI*r;
	Sa=(PI)*r*r;
	Sb=4*PI*r*r;
	Va=(PI)*r*r*r*(4.0/3.0);
	Vb=(PI)*r*r*h;
	printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2lf",C1,Sa,Sb,Va,Vb);
	return 0;
}
/*��Ŀ����
��Բ�뾶r��Բ����h ��Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb�� ��scanf�������ݣ���������������ʱҪ������˵����ȡС�������λ���֡������� PI��3.14

����
������������r��h

���
Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb�� ������λС����ÿ��������С�

��������
1.5 3
�������
C1=9.42
Sa=7.07
Sb=28.26
Va=14.13
Vb=21.20

��ʾ
  ����float a����2λС��������printf("%.2f",a)�������*/
