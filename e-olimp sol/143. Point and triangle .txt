#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float X1,Y1,X2,Y2,X3,Y3,  X0,Y0,  S1,S2,S3,A,total;
int main(int argc, char *argv[])
{
scanf("%f%f%f%f%f%f%f%f",&X0,&Y0,&X1,&Y1,&X2,&Y2,&X3,&Y3);

   S1=fabs(((X0*Y1-X1*Y0)+(X1*Y2-X2*Y1)+(X2*Y0-X0*Y2))/2);   //  printf("%f\n",S1);
   S2=fabs(((X0*Y1-X1*Y0)+(X1*Y3-X3*Y1)+(X3*Y0-X0*Y3))/2);   //  printf("%f\n",S2);
   S3=fabs(((X0*Y2-X2*Y0)+(X2*Y3-X3*Y2)+(X3*Y0-X0*Y3))/2);   //  printf("%f\n",S3);
total=S1+S2+S3;
  A=fabs(((X1*Y2-X2*Y1)+(X2*Y3-X3*Y2)+(X3*Y1-X1*Y3))/2);     //  printf("%f\n",A);


if(A==total)
   printf("1\n");
else
   printf("0\n");


return 0;
}