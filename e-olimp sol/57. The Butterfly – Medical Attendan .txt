#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
int x1,x2,v1,v2,z2;
    scanf("%d%d%d%d%d",&x1,&v1,&x2,&v2,&z2);

double d,f,D;
  d=sqrt((x1-x2)*(x1-x2)+(v1-v2)*(v1-v2)+(z2*z2));
  f=sqrt(x2*x2+v2*v2+z2*z2);
  D=1/d;

printf("%.3lf\n",D);


return 0;
}