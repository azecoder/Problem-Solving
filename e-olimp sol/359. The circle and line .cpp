#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double x1,x2,x3,v1,v2,v3,r;
int main(int argc, char *argv[])
{

scanf("%lf%lf%lf%lf%lf%lf%lf",&r,&x1,&v1,&x2,&v2,&x3,&v3);

double s;
s=fabs((x1*v2-v1*x2)+(x2*v3-v2*x3)+(x3*v1-x1*v3))/2;

double e,d,f;
    e=sqrt((x3-x2)*(x3-x2)+(v3-v2)*(v3-v2));
    d=sqrt((x3-x1)*(x3-x1)+(v3-v1)*(v3-v1));
    f=sqrt((x2-x1)*(x2-x1)+(v2-v1)*(v2-v1));

double h,a;
    h=(s*2)/e;
    a=sqrt(r*r-h*h)*2;

 if(h>r)
       printf("-1\n");
 else
   if(h==r)
       printf("0\n");
 else
       printf("%.5lf\n",a);


return 0;
}