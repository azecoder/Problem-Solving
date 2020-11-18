#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x1,v1,x2,v2,k,b,A,B,C;

int main(int argc, char *argv[])
{
 scanf("%f%f%f%f",&x1,&v1,&x2,&v2);

A=-v1+v2;
B=-x2+x1;
C=-x1*v2+v1*x2;

 printf("%.0f %.0f %.0f\n",A,B,C);

return 0;
}