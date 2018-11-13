#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long i,n;
double a,b;
double sum, mult;

int main(int argc, char *argv[])
{
  scanf("%ld",&n);

for(i=0; i<n; i++)
 {
   scanf("%lf%lf",&a,&b);

  sum=a+b;
  mult=a*b;

   printf("%.4lf %.4lf\n",sum,mult);
 }



return 0;
}