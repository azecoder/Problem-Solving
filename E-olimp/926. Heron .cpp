#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double a,b,c,d,f,p,g,s1,s2,s;
int main(int argc, char *argv[])
{
  a>0;  
  b>0;  
  c>0; 
  d>0;  
  f>0;  
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&f);
   if(p=(a+b+f)/2,
      s1=sqrt(p*(p-a)*(p-b)*(p-f)),
      g=(d+c+f)/2,
      s2=sqrt(g*(g-d)*(g-c)*(g-f)),
      s=s1+s2)
printf("%.4lf\n",s);
return 0;
}