#include<stdio.h>
#include<string.h>
int main()
{	int t,i,j;
	char s[100],c[100];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(s);
		j=0;
		for(i=0;i<100;i++)
		{	if(s[i]=='\0')
			{	break;
			}
			else if((s[i]!='\0')&&(s[i]!=' '))
			{	c[j]=s[i];
				j++;
			}
		}
		puts(c);
		for(i=0;i<100;i++)
		{	c[i]='\0';
		}
	}
	return 0;
}
/*��Ŀ����
��һ���ַ����а����Ŀո�ȫ��ɾ����

����
��һ������T��ʾ��T������ʵ��

�ڶ�����ÿ������һ���ַ������ٰ���һ���ǿո��ַ���������T��

���
���ɾ���ո����ַ���

��������
4
Shen Zhen
  China  Go
          A
AB    CD  EF
�������
ShenZhen
ChinaGo
A
ABCDEF*/
