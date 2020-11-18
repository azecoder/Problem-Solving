#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double x1,e1,x2,e2,x3,e3,x4,e4,s;
int main(int argc, char *argv[])
{
scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&e1,&x2,&e2,&x3,&e3,&x4,&e4);
   s=fabs(((x1*e2-x2*e1)+(x2*e3-x3*e2)+(x3*e4-x4*e3)+(x4*e1-x1*e4))/2);
printf("%.0lf\n",s);
return 0;
}