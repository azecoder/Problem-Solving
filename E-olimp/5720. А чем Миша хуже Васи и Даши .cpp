#include <stdio.h>

int i,x1,x2,p,a[15000],eded,cem;
unsigned long long n;

int main()
{
 x1=0;
 x2=1;
 a[0]=0;
 a[1]=1;

 for(i=2; i<15000; i++)
 {
     p=x1+x2;
     x1=x2;
     x2=p;

     p=p%10000;
     x1=x1%10000;
     x2=x2%10000;

     a[i]=p;
 }

 while(scanf("%llu",&n)!=EOF)
 {
     n=n%15000;

     if(n<15000)
         n++;
     cem=100;

     while(cem>=10)
     {
         cem=0;
         while(a[n]>0)
         {
             cem=cem+(a[n]%10);
             a[n]=a[n]/10;
         }

         a[n]=cem;
     }

     printf("%d\n",cem);
 }


 return 0;
}