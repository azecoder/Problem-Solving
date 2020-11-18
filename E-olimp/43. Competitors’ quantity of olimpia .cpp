#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long a,b,c,d;
long long x,y,z;
int main(int argc, char *argv[])
{

   scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

      x=(a*b*c*d)/((a*b*c)-(a*b+a*c+b*c));
      y=a*b*c*d;
      z=(a*b*c)-(a*b+a*c+b*c);

      if(y%z || z<=0)
         printf("-1");
      else
         printf("%lld",x);

   printf("\n");

 
 return 0;
}