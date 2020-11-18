#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int X1,Y1,X2,Y2,X,Y;
double l;
int main(int argc, char *argv[])
{
   scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
     X=X1-X2;
     Y=Y1-Y2;
   l=sqrt(X*X+Y*Y);
   printf("%.6lf\n",l);
 
 return 0;
}