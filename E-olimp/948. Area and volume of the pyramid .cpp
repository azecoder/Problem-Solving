#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double d,p,s1,s2,p1,A,h,l,V;

int main(int argc, char *argv[])
{

scanf("%lf%lf",&d,&p);

p1=(p+p+d)/2,

s1=sqrt(p1*(p1-p)*(p1-p)*(p1-d)),
s2=d*d,

A=4*s1+s2,

h=p*p-d*d/4,
l=sqrt(h-d*d/4),
V=s2*l/3;

printf("%.3lf %.3lf\n", A, V);


return 0;
}