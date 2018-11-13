#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long X1,Y1,X2,Y2,X3,Y3;
double A;

int main()
{
  scanf("%d%d%d%d%d%d",&X1,&Y1,&X2,&Y2,&X3,&Y3);
  if( X1<X2 && X1<X3 || Y1<Y2 && Y1<Y3)
      printf("NO\n");
  else if( X1>X2 && X1>X3 || Y1>Y2 && Y1>Y3)
      printf("NO\n");    
  else
  {
      A = fabs(((X1*Y2-X2*Y1)+(X2*Y3-X3*Y2)+(X3*Y1-X1*Y3))/2.0);
      if( A==0)
          printf("YES\n");
      else
          printf("NO\n");
  }
  
        
return 0;
}