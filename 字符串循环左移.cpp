#include<stdio.h>
int main()
{	char s[100],a[100];
	int n,i,j,b;
	gets(s);
	scanf("%d",&n);
	j=0;
	for(i=n;i<=100;i++)
	{	if(s[i]=='\0')
		{	b=i;
			break;
		}
		else
		{	a[j]=s[i];
			j++;
		}
	}
	//printf("%d",j);
	for(i=0;i<n;i++)
	{	a[j]=s[i];
		j++;
	}
	puts(a);
	//printf("%d",j);
	return 0;
}
/*��Ŀ����
����һ���ַ�����һ���Ǹ�����N��Ҫ���ַ���ѭ������N�Ρ�

����
�����ڵ�1���и���һ��������100���ַ����ȵġ��Իس������ķǿ��ַ�������2�и����Ǹ�����N��

���
��һ�������ѭ������N�κ���ַ�����

��������
Hello World!
2
�������
llo World!He*/

