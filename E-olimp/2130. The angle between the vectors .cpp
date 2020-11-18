#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

double angle, a;
double n1, n2;
double x1, x2, Y1, y2;
int main(int argc, char *argv[])
{
    scanf("%lf%lf%lf%lf",&x1,&Y1,&x2,&y2);

 n1 = sqrt(x1*x1+Y1*Y1);
 n2 = sqrt(x2*x2+y2*y2);

 angle = acos((x1*x2+Y1*y2)/(n1*n2));

    printf("%.5lf\n", angle);

 return 0;
}