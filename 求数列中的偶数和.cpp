#include<stdio.h>
int main()
{	int t,sum=0,n,i=1;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&n);
		if(n%2==0)
		{	sum=sum+n;
			i++;
			}
		else
			i++;
	}
	printf("%d",sum);
	return 0;
}
/*��Ŀ����
���Ƴ�������n��������n�Ӽ�������,n>0��,������ǵ�ż���͡�

����
n

n������

���
����ż���ĺ�

��������
10
1 2 3 4 5 6 7 8 9 10
�������
30*/
