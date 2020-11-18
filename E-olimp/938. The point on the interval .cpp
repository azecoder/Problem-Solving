#include <stdio.h>
#include <stdlib.h>

float x1, Y1, x2, Y2, n, ferqx, ferqy, a, b, x3, Y3, t;
int main(int argc, char *argv[])
{
 scanf("%f%f%f%f%f",&x1,&Y1,&x2,&Y2,&n);
   a=x2-x1;     // printf("%.2f\n", a);
   b=Y2-Y1;     // printf("%.2f\n", b);
   t=n/(n+1);   // printf("%.2f\n", t);

  ferqx=t*a;    // printf("%.2f\n", ferqx);
  ferqy=t*b;    // printf("%.2f\n", ferqy);
  x3=x1+ferqx;
  Y3=Y1+ferqy;
 printf("%.2f %.2f\n",x3, Y3);


return 0;
}