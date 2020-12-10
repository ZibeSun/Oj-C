#include<stdio.h>
char nx(char c[100])
{	char k[100];
	int i,a,b,h;
	for(i=0;i<100;i++)
	{	if(c[i]=='\0')
		a=i-1;
	}
	/*for(i=0;i<=a;i++)
	{	k[a]=c[a-i];
	}*/
	if(a%2==0)
	{	b=(a/2)-1;
		for(i=0;i<=b;i++)
		{	h=c[i];
			c[i]=c[a-i];
			c[a-i]=h;
		}
	}
	if(a%2!=0)
	{	b=((a+1)/2)-1;
		for(i=0;i<=b;i++)
		{	h=c[i];
			c[i]=c[a-i];
			c[a-i]=h;
		}
	}
	return(c[100]);
}
int main()
{	char c[100];
	gets(c);
	printf("%s",nx(c));
	return 0;
}
