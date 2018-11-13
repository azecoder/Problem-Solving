#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double x1,e1,x2,e2,x3,e3,a,b,c,d,s;
int main(int argc, char *argv[])
{
scanf("%lf%lf%lf%lf%lf%lf",&x1,&e1,&x2,&e2,&x3,&e3);
  if(a=sqrt((x1-x2)*(x1-x2)+(e1-e2)*(e1-e2)),
     b=sqrt((x1-x3)*(x1-x3)+(e1-e3)*(e1-e3)),
     c=sqrt((x2-x3)*(x2-x3)+(e2-e3)*(e2-e3)),
     d=(a+b+c)/2,
     s=sqrt(d*(d-a)*(d-b)*(d-c)))
printf("%.1lf\n",s);
return 0;
}