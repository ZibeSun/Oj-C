#include<stdio.h>
int main()
{	int a[100];
	int *p=a;
	a[20]=5;
	printf("%d",*(a+20));
	
 } 
