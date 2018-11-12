#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
double x0,v0;
    scanf("%lf%lf",&x0,&v0);
double r,x1,v1;
    scanf("%lf%lf%lf",&r,&x1,&v1);

double mesafe;
   mesafe=sqrt((x1-x0)*(x1-x0)+(v1-v0)*(v1-v0));
   if(mesafe < r)
        printf("YES\n");
   else if(mesafe > r)
        printf("NO\n");
   else if(mesafe == r)
        printf("ON BORDER\n");

return 0;
}