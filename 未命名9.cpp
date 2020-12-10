#include<stdio.h>
int main()

{  int a,b,c,d,e,f,g,h,t;
   scanf("%d",&t);
   scanf("%d %d %d\n%d %d %d\n",&a,&b,&c,&d,&e,&f);
   while(t--)
   {
      {
      if(a>b)
       {g=b;
        b=a;
        a=g;
    }
   if(a>c)
    {g=c;
     c=a;
     a=g;
    }
   if(b>c)
    {g=c;
     c=b;
     b=g;
    }
   if(d>e)
    {h=e;
        e=d;
        d=h;
    }
   if(d>f)
    {h=f;
     f=d;
     d=h;
    }
   if(e>f)
    {h=f;
     f=e;
     e=h;
    }
   }
    
   { if(a>=d&&b>=e&&c>=f)
     printf("no\n");
   else 
     printf("yes\n");
   }
   
   }
   
   
   return 0;
}
