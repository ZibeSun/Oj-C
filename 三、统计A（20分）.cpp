#include<stdio.h>
int main()
{	char c[100];
	int i,sum;
	gets(c);
	sum=0;
	for(i=0;i<100;i++)
	{	if((c[i]=='A')||(c[i]=='a'))
		sum=sum+1;
		else if(c[i]=='\0')
		break;
	}
	printf("%d",sum);
	return 0;
}
/*��Ŀ����
����һ���ַ����ԡ�#����β��ͳ�Ʋ������ĸA��a���ֵĴ�����

����
һ���ַ������ԡ�#����β��

���
�����ĸA��a���ֵĴ���

��������
12cdfd34AAA()&hjGFF56!aa@78#
�������
5*/ 
