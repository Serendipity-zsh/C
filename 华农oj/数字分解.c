#include<stdio.h>
int main()
{
   int x,a,b,c,d,e,m,n;
   scanf("%d",&x);
   if(x<10)
   {
     m=1;
     a=a;
     printf("%d\n%d\n%d",m,a,a);
   }
   else if(x>=10&&x<100)
   {
     m=2;
     a=x/10;
     b=x%10;
     printf("%d\n%d %d\n",m,a,b);
     if(a>b)
     a=a;
     else
     {
       n=a;
       a=b;
       b=n;
     }
     printf("%d",a*10+b);
   }
   else if(x>=100&&x<1000)
   {
      m=3;
      a=x/100;
      b=(x-a*100)/10;
      c=x%10;
      printf("%d\n%d %d %d\n",m,a,b,c);
      if(a>b)
      a=a;
      else
      {
        n=a;
        a=b;
        b=n;
      }
      if(a>c)
      a=a;
      else
      {
        n=a;
        a=c;
        c=n;
      }
      if(b>c)
      b=b;
      else
      {
        n=b;
        b=c;
        c=n;
      }
      printf("%d",a*100+b*10+c);
   }
   else if(x>=1000&&x<10000)
   {
      m=4;
      a=x/1000;
      b=(x-a*1000)/100;
      c=(x-a*1000-b*100)/10;
      d=x%10;
      printf("%d\n%d %d %d %d\n",m,a,b,c,d);
      if(a>b)
      a=a;
      else
      {
        n=a;
        a=b;
        b=n;
      }
      if(a>c)
      a=a;
      else
      {
        n=a;
        a=c;
        c=n;
      }
      if(a>d)
      a=a;
      else
      {
        n=a;
        a=d;
        d=n;
      }
      if(b>c)
      b=b;
      else
      {
        n=b;
        b=c;
        c=n;
      }
      if(b>d)
      b=b;
      else
      {
        n=b;
        b=d;
        d=n;
      }
      if(c>d)
      c=c;
      else
      {
        n=c;
        c=d;
        d=n;
      }
      printf("%d",a*1000+b*100+c*10+d);
   }
   else
   {
     m=5;
     a=x/10000;
     b=(x-a*10000)/1000;
     c=(x-a*10000-b*1000)/100;
     d=(x-a*10000-b*1000-c*100)/10;
     e=x%10;
     printf("%d\n%d %d %d %d %d\n",m,a,b,c,d,e);
     if(a>b)
     a=a;
     else
     {
       n=a;
       a=b;
       b=n;
     }
     if(a>c)
     a=a;
     else
     {
       n=a;
       a=c;
       c=n;
     }
     if(a>d)
     a=a;
     else
     {
       n=a;
       a=d;
       d=n;
     }
     if(a>e)
     a=a;
     else
     {
       n=a;
       a=e;
       e=n;
     }
     if(b>c)
     b=b;
     else
     {
       n=b;
       b=c;
       c=n;
     }
     if(b>d)
     b=b;
     else
     {
       n=b;
       b=d;
       d=n;
     }
     if(b>e)
     b=b;
     else
     {
       n=b;
       b=e;
       e=n;
     }
     if(c>d)
     c=c;
     else
     {
       n=c;
       c=d;
       d=n;
     }
     if(c>e)
     c=c;
     else
     {
       n=c;
       c=e;
       e=n;
     }
     if(d>e)
     d=d;
     else
     {
       n=d;
       d=e;
       e=n;
     }
     printf("%d",a*10000+b*1000+c*100+d*10+e);
   }
   return 0;
}
