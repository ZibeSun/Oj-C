#include<stdio.h>
int main()
{	int t,i,sum;
	char c[30];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(c);
		for(i=0;i<30;i++)
		{	if(c[i]=='\0')
			break;
		}
		sum=i;
		printf("%d\n",sum);
	}
	return 0;
}
/*��Ŀ����
�����ַ���S�ĳ��ȣ�������strlen������ͬ�������ܵ��ÿ⺯��strlen�����򲻸��֡�������ַ����������ո�

����
�����������t

����ÿ����ԣ������ַ���S������<=30��

���
����ÿ����ԣ����S�ĳ���

��������
1
hehe
�������
4*/
