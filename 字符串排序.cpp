#include<stdio.h>
#include<string.h>
int main()
{	char a[5][80],b[5][80];
	int i,c,x;
	for(i=0;i<5;i++)
	{	scanf("%s",a[i]);
	}
	for(i=0;i<5;i++)
	{	x=0;
		for(c=0;c<5;c++)
		{	if(strcmp(a[i],a[c])>0)
			x++;
		}
		if(x==0)
		strcpy(b[0],a[i]);
		else if(x==1)
		strcpy(b[1],a[i]);
		else if(x==2)
		strcpy(b[2],a[i]);
		else if(x==3)
		strcpy(b[3],a[i]);
		else if(x==4)
		strcpy(b[4],a[i]);
	}
	printf("After sorted:\n");
	for(i=0;i<5;i++)
	{	printf("%s\n",b[i]);
	}
	return 0;
}
/*��Ŀ����
����5���ַ���������С�����˳�������

����
����Ϊ�ɿո�ָ���5���ǿ��ַ�����ÿ���ַ����������ո��Ʊ�������з��ȿհ��ַ�������С��80��

���
�������¸�ʽ��������Ľ����

After sorted:
ÿ��һ���ַ���
��������
red yellow blue green white
�������
After sorted:
blue
green
red
white
yellow*/ 
