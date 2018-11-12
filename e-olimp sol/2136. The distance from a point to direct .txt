#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long X1,Y1,X2,Y2,X3,Y3;
double A, L, H;
int main(int argc, char *argv[])
{
 scanf("%ld%ld%ld%ld%ld%ld",&X1,&Y1,&X2,&Y2,&X3,&Y3);

   A=fabs(((X1*Y2-X2*Y1)+(X2*Y3-X3*Y2)+(X3*Y1-X1*Y3))/2.0);
   L=sqrt(((X3-X2)*(X3-X2)+(Y3-Y2)*(Y3-Y2)));
   H=((2*A)/L);

 printf("%.6f\n", H);


 return 0;
}