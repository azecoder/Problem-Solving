#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

double s1,s2,s3,n;
double total;

int main(int argc, char *argv[])
{
 scanf("%lf%lf%lf",&s1,&s2,&s3);

n=(sqrt(s1/s3)+sqrt(s2/s3)+1);
total=s3*n*n;

 printf("%.8lf\n",total);

 
 return 0;
}