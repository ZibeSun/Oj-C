#include<stdio.h>
int main()
{	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b&&a>c)==1)
	m=a;
	else if((a>b&&a>c)==1)
	m=b;
	else if((c>b&&c>a)==1)
	m=c;
	printf("%d",m);
	return 0;
}
/*��Ŀ����
��дһ����������a��b��c����ֵ������������ֵ��

����
һ�����飬�ֱ�Ϊa b c

���
a b c����������

��������
10 20 30
�������
30*/
