#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double x1,v1,x2,v2,x3,v3,x4,v4;
double a,b,c,d,e,f;
int main(int argc, char *argv[])
{

    scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&v1,&x2,&v2,&x3,&v3,&x4,&v4);

 a=sqrt((x1-x2)*(x1-x2)+(v1-v2)*(v1-v2));
 b=sqrt((x2-x3)*(x2-x3)+(v2-v3)*(v2-v3));
 c=sqrt((x3-x4)*(x3-x4)+(v3-v4)*(v3-v4));
 d=sqrt((x4-x1)*(x4-x1)+(v4-v1)*(v4-v1));

 if(a>=b && a>=c && a>=d)
               printf("%.2lf\n",a);
 else if(b>=a && b>=c && b>=d)
               printf("%.2lf\n",b);
 else if(c>=a && c>=b && c>=d)
               printf("%.2lf\n",c);
 else if(d>=a && d>=b && d>=c)
               printf("%.2lf\n",d);



return 0;
}