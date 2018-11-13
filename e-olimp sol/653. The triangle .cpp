#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double a, b, c;
double n, m, l;

int main(int argc, char *argv[])
{
  scanf("%lf%lf%lf",&a,&b,&c);

n=sqrt(a*a+b*b);
m=sqrt(a*a+c*c);
l=sqrt(b*b+c*c);

if( ((a+b)>c) && ((a+c)>b) && ((b+c)>a))
{
if( n==c || m==b || l==a )
  printf("RIGHT\n");
else if( n>c && m>b && l>a )
  printf("ACUTE\n");
else if( n<c || m<b || l<a )
  printf("OBTUSE\n");
}
else        printf("IMPOSSIBLE\n");


return 0;
}