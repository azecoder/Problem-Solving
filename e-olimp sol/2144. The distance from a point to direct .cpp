#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double d,x,y,z;
double a,b;

int main(int argc, char *argv[])
{
  scanf("%lf%lf%lf%lf%lf", &a,&b,&x,&y, &z);

d=fabs(x*a+y*b+z)/sqrt(x*x+y*y);

  printf("%.6lf\n", d);

 return 0;
}