#include<stdio.h>
int main()
{	int a,b;
	int *p1,*p2;
	a=3,b=4;
	a+=b;
	p1=&a,p2=&b;
	printf("%d,%d",*p1,*p2);
	
 } 
