#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, c, x, y, D;

int main(int argc, char *argv[])
{

 scanf("%d %d %d", &a,&b,&c);

 a!=0;
 D=b*b-4*a*c;

 if(D>0)
  {
   x=(-b-sqrt(D))/(2*a),
   y=(-b+sqrt(D))/(2*a);
  if(x<y)
 printf("Two roots: %d %d\n", x, y);
  else
 printf("Two roots: %d %d\n", y, x);
  }

 else if(D==0)
  {
   x=(-b-sqrt(D))/(2*a);

 printf("One root: %d\n", x);
  }

 else
 printf("No roots\n");


return 0;
}