#include<stdio.h>
#include<math.h>
int main()
{	float a,b,c,e,s,p;
	int t;
	scanf("%d",&t);
	e=0.001;
	while(t--)
	{	scanf("%f %f %f",&a,&b,&c);
		if((a+b>c)&&(a+c>b)&&(b+c>a))
		{	if((fabs(a-b)<e)&&(fabs(b-c)<e))
				printf("equilateral triangle, ");
			else if(((fabs(a-b)<e)||(fabs(a-c)<e)||(fabs(b-c)<e))&&((fabs(a*a+b*b-c*c)<e)||(fabs(a*a+c*c-b*b)<e)||(fabs(b*b+c*c-a*a)<e)))
				printf("isosceles right triangle, ");
			else if(((fabs(a-b)>e)||(fabs(a-c)>e)||(fabs(b-c)>e))&&((fabs(a*a+b*b-c*c)<e)||(fabs(a*a+c*c-b*b)<e)||(fabs(b*b+c*c-a*a)<e)))
				printf("right triangle, ");
			else if(((fabs(a-b)<e)||(fabs(a-c)<e)||(fabs(b-c)<e))&&((fabs(a*a+b*b-c*c)>e)||(fabs(a*a+c*c-b*b)>e)||(fabs(b*b+c*c-a*a)>e)))
			{	if((fabs(a-b)<e)&&(fabs(b-c)<e))
					printf("equilateral triangle, ");
				else
					printf("isosceles triangle, ");
			}
			else
				printf("general triangle, ");
			p=(a+b+c)/2;
			s=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("%.1f\n",s);
		}
		else
		printf("no triangle\n");
	}
}
