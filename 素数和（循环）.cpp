#include<stdio.h>
int main()
{	int a,b,c,t,x,n;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d %d",&a,&b);
		x=0;
		if(a==0)
			a=a+2;
		else if(a==1)
			a=a+1;
		for(n=a;n<=b;n++)
		{	
			for(c=2;c<n;c++)
			{	if(n%c==0)
				break;
			}
			if(c>=n)
			{	x=x+n;
				printf("%d ",n);
			}
		}
		if(x>0)
			printf("\n%d\n",x);
		else
			printf("NO\n");
	}
	return 0;
}
/*����Ŀ����
�������ַ�Χn,m��n>=0, m>=0, n<=m)�����[n,m]�����е����������͡�

����
���Դ���T

ÿ���������һ�У����ַ�Χn m

���
��ÿ��������ݣ������������������У�

��һ�У����[n,m]�������

�ڶ��У����[n,m]���������

���û�����������NO

��������
3
0 10
10 30
24 28



�������
2 3 5 7 
17
11 13 17 19 23 29 
112
NO*/
