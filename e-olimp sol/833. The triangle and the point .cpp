#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double X1,Y1,X2,Y2,X3,Y3,  X0,Y0;
double S1,S2,S3,A,total;
int main(int argc, char *argv[])
{
scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&X1,&Y1,&X2,&Y2,&X3,&Y3,&X0,&Y0);

   S1=fabs(((X0*Y1-X1*Y0)+(X1*Y2-X2*Y1)+(X2*Y0-X0*Y2))/2);  //   printf("%lf\n",S1);
   S2=fabs(((X0*Y1-X1*Y0)+(X1*Y3-X3*Y1)+(X3*Y0-X0*Y3))/2);  //   printf("%lf\n",S2);
   S3=fabs(((X0*Y2-X2*Y0)+(X2*Y3-X3*Y2)+(X3*Y0-X0*Y3))/2);  //   printf("%lf\n",S3);
total=S1+S2+S3;
  A=fabs(((X1*Y2-X2*Y1)+(X2*Y3-X3*Y2)+(X3*Y1-X1*Y3))/2);    //   printf("%lf\n",A);


if(total<=A)
   printf("In\n");
else
   printf("Out\n");

 return 0;
}