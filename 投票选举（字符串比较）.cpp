#include<stdio.h>
#include<string.h>
int main()
{	int n,a=0,b=0,c=0,i;
	char s[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	scanf("%s",s);
		if(strcmp(s,"Li")==0)
			a++;
		else if(strcmp(s,"Zhang")==0)
			b++;
		else if(strcmp(s,"Fu")==0)
			c++;
	}
	printf("Li:%d\nZhang:%d\nFu:%d",a,b,c);
	return 0;
}
