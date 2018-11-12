#include <stdio.h>
#include <stdlib.h>

double X1,Y1,X2,Y2,X3,Y3,Y4,X4,a,b,d1,m,n,t,q,g,s;
int main(int argc, char *argv[]) 
{
   scanf("%lf%lf%lf%lf%lf%lf",&X1,&Y1,&X2,&Y2,&X3,&Y3);
   
   a=((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
   b=((X2-X3)*(X2-X3)+(Y2-Y3)*(Y2-Y3));
   d1=((X3-X1)*(X3-X1)+(Y3-Y1)*(Y3-Y1));
   m=X1+X3-X2;
   n=Y1+Y3-Y2;
   t=X2+X1-X3;
   q=Y2+Y1-Y3;
   s=X2+X3-X1;
   g=Y2+Y3-Y1;
   if(d1==a+b)
       printf("%.0lf %.0lf\n",m,n);
   else if(a==b+d1)
       printf("%.0lf %.0lf\n",t,q);
   else if(b==d1+a)
       printf("%.0lf %.0lf\n",s,g);
       
  return 0;
}