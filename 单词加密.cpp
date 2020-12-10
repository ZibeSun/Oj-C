#include<stdio.h>
int main()
{
	int x;
	for(;;)
	{	x=getchar();
		if((x>=65&&x<=90)||(x>=97&&x<=122))
		{	x=x+4;
			printf("%c",x);	
		}
		else if(x=='\n')
			break;	
	} 
	return 0;
 } 
