#include<stdio.h>
int main()
{	int t,a1,b1,h1,a2,b2,h2;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d %d %d\n%d %d %d",&a1,&b1,&h1,&a2,&b2,&h2);
		if(a1<=a2&&b1<=b2&&h1<=h2)
			printf("yes\n");
		else if(a1<=a2&&b1<=h2&&h1<=b2)
			printf("yes\n");
		else if(a1<=b2&&b1<=a2&&h1<=h2)
			printf("yes\n");
		else if(a1<=b2&&b1<=h2&&h1<=a2)
			printf("yes\n");
		else if(a1<=h2&&b1<=b2&&h1<=a2)
			printf("yes\n");
		else if(a1<=h2&&b1<=a2&&h1<=b2)
			printf("yes\n");
		else if(a1>=a2&&b1>=b2&&h1>=h2)
			printf("yes\n");
		else if(a1>=a2&&b1>=h2&&h1>=b2)
			printf("yes\n");
		else if(a1>=b2&&b1>=a2&&h1>=h2)
			printf("yes\n");
		else if(a1>=b2&&b1>=h2&&h1>=a2)
			printf("yes\n");
		else if(a1>=h2&&b1>=b2&&h1>=a2)
			printf("yes\n");
		else if(a1>=h2&&b1>=a2&&h1>=b2)
			printf("yes\n");

		else
			printf("no\n");
	}
	return 0;
}
/*��Ŀ����
ÿ�����Ӷ��г���ߣ�������Ҫ�ж�һ�������ܷ������һ�������С�

����������A�ĳߴ��� 3 x 4 x 5������B�ĳߴ� �� 5 x 6 x 4�������Ƚ��жϣ�����֪������A�ܹ���������B�У����Ǿ�˵����Aƥ������B��

ע�⣬���������ӳߴ���ȣ�����Ҳ��Ϊ����ƥ�䡣

����
��һ���������T����ʾ��T������ʵ��

�ڶ��������1��ʵ��������A�ĳ������ߣ�������ֵΪС��1000����Ȼ��

�����������1��ʵ��������B�ĳ������ߣ�������ֵΪС��1000����Ȼ��

�Դ�����

���
�����������ƥ�䣬���yes���������no���������ÿһ�������ƥ������

��������
3
3 4 5
5 6 4
5 6 4
3 4 5
5 6 7
7 4 7
�������
yes
yes
no*/
