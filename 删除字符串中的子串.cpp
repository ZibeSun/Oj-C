#include<stdio.h>
#include<string.h>
int main()
{	char c[100],a[100],s[100];
	int i,j,x,y;
	gets(c);
	gets(a);
		j=0;
	for(y=0;y<50;y++)
	{
	}
	for(i=0;i<100;i++)
	{	x=0;
		if(c[i]=='\0')
		{	break;
		}
		else if((c[i]!='\0')&&(c[i]=='c'))
		{	if(c[i+1]=='a')
			{	if(c[i+2]=='t')
				{	x++;
				}
			}
		}
		if(x>0)
		{	i=i+2;
		}
		else if(x==0)
		{	s[j]=c[i];
			j++;
		}
	}
	puts(s);
	return 0;
}
/*��Ŀ����
����2���ַ���S1��S2��Ҫ��ɾ���ַ���S1�г��ֵ������Ӵ�S2��������ַ����в��ܰ���S2��

����
������2���зֱ����������80���ַ����ȵġ��Իس�������2���ǿ��ַ�������ӦS1��S2��

���
��һ�������ɾ���ַ���S1�г��ֵ������Ӵ�S2��Ľ���ַ�����

��������
Tomcat is a male ccatat
cat
�������
Tom is a male */ 
