#include<stdio.h>
#include<math.h>
int main()
{	float a,b,c,d,e,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	e=sqrt(d);
	x1=(-b+e)/(2*a);
	x2=(-b-e)/(2*a);
	if(d>0)
	if(a!=0) printf("x1=%.2f x2=%.2f",x1,x2);
	else printf("error");
	return 0;
}
/*��Ŀ����
����һԪ���η���ax^2+bx+c=0��ϵ��a��b��c��

��������ʼ������b^2-4ac>0��a������0,���㲢����÷��̵�����ʵ����

C�����м���Ǹ�ʵ����ƽ���������� double sqrt(double);

ͷ�ļ���math.h��

����
һԪ���η��̵�ϵ��a��b��c

���
ax^2+bx+c=0������ʵ��

��������
1 0 -1
�������
x1=1.00 x2=-1.00*/
