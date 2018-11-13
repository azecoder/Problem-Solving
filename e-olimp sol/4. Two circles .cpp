#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x1, x2, r1, r2, Y1, Y2, d;

int main(int argc, char *argv[])
{

 scanf("%f %f %f %f %f %f", &x1, &Y1, &r1, &x2, &Y2, &r2);


 d=sqrt((x1-x2)*(x1-x2)+(Y1-Y2)*(Y1-Y2));

 if(x1==x2 && Y1==Y2 && r1==r2)
   printf("-1\n");

 else if(d==r1+r2 || d==fabs(r1-r2))
   printf("1\n");

 else if(d>r1+r2 || d<fabs(r1-r2))
   printf("0\n");

 else
   printf("2\n");


 
 return 0;
}