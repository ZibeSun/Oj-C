#include<stdio.h>
int find(int c[10],int a)
{	int i,p=-1;
	for(i=0;i<10;i++)
	{	if(c[i]==a)
		{	p=i;
		}
	}
	return(p);
}
int display(int c[10],int length)
{	int i;
	for(i=0;i<length;i++)
	{	if(i==length-1)
		printf("%d",c[i]);
		else
		printf("%d ",c[i]);
	}
}
int voidsortup(int c[11],int length)
{	int b,i,e;
	for(b=0;b<=length-2;b++)
	{	for(i=0;i<=length-2;i++)
		{	if(c[i]>c[i+1])
			{	e=c[i];
				c[i]=c[i+1];
				c[i+1]=e;
			}
		}
	}
}
int voidreverse(int c[11],int length)
{	int i;
	for(i=length-1;i>=0;i--)
	{	if(i==0)
		printf("%d",c[i]);
		else
		printf("%d ",c[i]);
	}
}
int main()
{	int i,n,a,h,c[10];
	scanf("%d",&n);
	while(n--)
	{	for(i=0;i<10;i++)
		{	scanf("%d",&c[i]);
		}
		scanf("%d",&a);
		if(a%2!=0)
		{	h=find(c,a);
			if(h!=-1)
			{	for(i=h;i<10;i++)
				{	c[i]=c[i+1];
				}
				voidsortup(c,9);
				display(c,9);
				printf("\n");
			}
			else if(h==-1)
			{	int k[10],j[10],x=0,y=0;
				for(i=0;i<10;i++)
				{	if(c[i]%2!=0)
					{	k[x]=c[i];
						x=x+1;
					}
				}
				voidsortup(k,x);
				voidreverse(k,x);
				printf(" ");
				for(i=0;i<10;i++)
				{	if(c[i]%2==0)
					{	j[y]=c[i];
						y=y+1;
					}
				}
				voidsortup(j,y);
				voidreverse(j,y);
				printf("\n");
			}
		}
		else if(a%2==0)
		{	h=find(c,a);
			if(h==-1)
			{	int k[11];
				for(i=0;i<11;i++)
				{	if(i==10)
					k[i]=a;
					else
					k[i]=c[i];
				}
				voidsortup(k,11);
				voidreverse(k,11);
				printf("\n");
			}
			else if(h!=-1)
			{	int k[10],j[10],x=0,y=0;
				for(i=0;i<10;i++)
				{	if(c[i]%2!=0)
					{	k[x]=c[i];
						x=x+1;
					}
				}
				voidsortup(k,x);
				voidreverse(k,x);
				printf(" ");
				for(i=0;i<10;i++)
				{	if(c[i]%2==0)
					{	j[y]=c[i];
						y=y+1;
					}
				}
				voidsortup(j,y);
				voidreverse(j,y);
				printf("\n");
			}
		}
	}
	return 0;
}
/*��Ŀ����
�Ӽ�������10��������10������������ͬ���� Ȼ���ٴӼ���������һ������a�����������aΪ������ ������10�������е���һ������ͬ����ɾ����a��ͬ�� �����������ʣ�µ�9���������������������aΪż���� ������10��������ͬ�������a��������11���������� ���������������10����������ǰ��ż���ں� ����������������磬10�����ֱ�Ϊ6��89��34��12�� 0��-8��78��15��9��3.��aΪ9�������Ϊ��-8��0��3�� 6��12��15��34��78��89.��aΪ2�������Ϊ��89��78�� 34��15��12��9��6��3��2��0��-8.��aΪ7����12���� ���Ϊ��89��15��9��3��78��34��12��6��0��-8.

Ҫ��ʹ�ú���������⣬���ٱ�д���¼���������1������������void sort(int a[], int n)��2�����Һ���int find(int a[],int n,int value)----�ڴ�СΪn��a�����в���ֵΪvalue��Ԫ�أ��ҵ��ͷ���Ԫ�ص��±꣬�Ҳ������ͷ���-1��3���������display(int a[], int n)---����������a��Ԫ�أ�4����ת���麯��void reverse(int a[], int n)----����������
����
�������ݵ�����n

��һ��������ݵ�10������

��һ�������a

�ڶ���������ݵ�10������

�ڶ��������a

......

��n��������ݵ�10������

��n�������a

���
��һ�������������

�ڶ��������������

.......

��n�������������

��������
3
6 89 34 12 0 -8 78 15 9 3
9
6 89 34 12 0 -8 78 15 9 3
2
6 89 34 12 0 -8 78 15 9 3
7

�������
-8 0 3 6 12 15 34 78 89
89 78 34 15 12 9 6 3 2 0 -8
89 15 9 3 78 34 12 6 0 -8*/


