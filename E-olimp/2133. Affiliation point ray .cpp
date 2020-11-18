#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long X,Y,X1,Y1,X2,Y2;
double A;

int main()
{
scanf("%d%d%d%d%d%d",&X,&Y,&X1,&Y1,&X2,&Y2);


      A = fabs(((X*Y1-X1*Y)+(X1*Y2-X2*Y1)+(X2*Y-X*Y2))/2.0);

        if( A==0 && X>=X1 && Y>=Y1 && X<=X2 && Y<=Y2 )
            printf("YES\n");
   else
        if( A==0 && X<=X1 && Y<=Y1 && X>=X2 && Y>=Y2 )
            printf("YES\n");

   else if( A==0 && X>=X2 && X1<X2 )        printf("YES\n");
   else if( A==0 && Y>=Y2 && Y1<Y2 )        printf("YES\n");
   else if( A==0 && X<=X2 && X1>X2 )        printf("YES\n");
   else if( A==0 && Y<=Y2 && Y1>Y2 )        printf("YES\n");

   else
            printf("NO\n");


 return 0;
}