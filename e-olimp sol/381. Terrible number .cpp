#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double B, N, A, a, b, c, d;
int main(int argc, char *argv[])
{
  scanf("%lf %lf", &B, &N);
   A=pow(B,1.0/N);
   a=floor(A);
   b=ceil(A);
    c=pow(a,N);
    d=pow(b,N);
   if((B-c)<(d-B))
     printf("%.0lf", a);
   else
     {
     printf("%.0lf", b);
     }
  printf("\n");

 
 return 0;
}