#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double A;
int x1,Y1,x2,y2,x3,y3;
int main(int argc, char *argv[])
{
   scanf("%d%d%d%d%d%d",&x1,&Y1,&x2,&y2,&x3,&y3);
  if( x1<x2 && x1<x3 || Y1<y2 && Y1<y3)
     printf("0\n");
  else if( x1>x2 && x1>x3 || Y1>y2 && Y1>y3)
     printf("0\n");
  else
   {
  A=fabs(((x1*y2-x2*Y1)+(x2*y3-x3*y2)+(x3*Y1-x1*y3))/2.0);

  if(A==0)
        printf("1\n");
  else
        printf("0\n");
   }

 
 return 0;
}