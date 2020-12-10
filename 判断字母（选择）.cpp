#include<stdio.h>
#include<ctype.h> 
int main()
{	char a;
	scanf("%c",&a);
	if(isalpha(a)==0)
	printf("NO");
	else 
	printf("ALPHA");
	return 0;
	 
 } 
 /*题目描述
输入一个字符，判定该字符是否是字母。

(提示：可使用ctype.h中的函数）

输入
字符

输出
若该字符是字母，输出ALPHA; 否则，输出NO

样例输入
Y
样例输出
ALPHA*/
