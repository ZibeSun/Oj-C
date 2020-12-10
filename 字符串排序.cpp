#include<stdio.h>
#include<string.h>
int main()
{	char a[5][80],b[5][80];
	int i,c,x;
	for(i=0;i<5;i++)
	{	scanf("%s",a[i]);
	}
	for(i=0;i<5;i++)
	{	x=0;
		for(c=0;c<5;c++)
		{	if(strcmp(a[i],a[c])>0)
			x++;
		}
		if(x==0)
		strcpy(b[0],a[i]);
		else if(x==1)
		strcpy(b[1],a[i]);
		else if(x==2)
		strcpy(b[2],a[i]);
		else if(x==3)
		strcpy(b[3],a[i]);
		else if(x==4)
		strcpy(b[4],a[i]);
	}
	printf("After sorted:\n");
	for(i=0;i<5;i++)
	{	printf("%s\n",b[i]);
	}
	return 0;
}
/*题目描述
读入5个字符串，按由小到大的顺序输出。

输入
输入为由空格分隔的5个非空字符串，每个字符串不包括空格、制表符、换行符等空白字符，长度小于80。

输出
按照以下格式输出排序后的结果：

After sorted:
每行一个字符串
样例输入
red yellow blue green white
样例输出
After sorted:
blue
green
red
white
yellow*/ 
