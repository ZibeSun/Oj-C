#include<stdio.h>
#include<ctype.h> 
int main()
{	char a;
	scanf("%c",&a);
	if(isalpha(a)==0)
	printf("NO");
	else 
	printf("ALPHA");
	return 0;
	 
 } 
 /*��Ŀ����
����һ���ַ����ж����ַ��Ƿ�����ĸ��

(��ʾ����ʹ��ctype.h�еĺ�����

����
�ַ�

���
�����ַ�����ĸ�����ALPHA; �������NO

��������
Y
�������
ALPHA*/
