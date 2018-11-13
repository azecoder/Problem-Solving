#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
double a,b;
  scanf("%lf%lf",&a,&b);

double l,Salt,Syan;
  Salt=a*a;
  l=sqrt((a/2)*(a/2)+b*b);
  Syan=4*a*l/2;

double SurArea;
  SurArea=Salt+Syan;

  printf("%.1lf\n",SurArea);

return 0;
}