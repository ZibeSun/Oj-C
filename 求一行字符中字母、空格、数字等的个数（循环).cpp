#include<stdio.h>
int main()
{	int a=0,n=0,k=0,h=0,x;
	for(;;)
	{	x=getchar();
		if((x>=65&&x<=90)||(x>=97&&x<=122))
			a++;
		else if(x>=48&&x<=57)
			n++;
		else if(x==' ')
			k++;
		else if((x>=33&&x<=47)||(x>=58&&x<=64)||(x>=91&&x<=96)||(x>=123&&x<=127))
			h++;	
		else if(x='\n')
			break;	
	} 
	printf("%d %d %d %d",a,n,k,h);
	return 0;
}
/*��Ŀ����
����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����

����
һ���ַ�

���
ͳ��ֵ

��������
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
�������
23 16 2 4*/
