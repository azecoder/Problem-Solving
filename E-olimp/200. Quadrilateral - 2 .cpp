#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double x1,v1,x2,v2,x3,v3,x4,v4;
double s_1,s_2,s_3,s_4;
double a,b,c,l1,l2,l3;

int main(int argc, char *argv[])
{

scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&v1,&x2,&v2,&x3,&v3,&x4,&v4);

 s_1=fabs(((x1*v2-x2*v1)+(x2*v3-x3*v2)+(x3*v1-x1*v3))/2.0);
 s_2=fabs(((x1*v2-x2*v1)+(x2*v4-x4*v2)+(x4*v1-x1*v4))/2.0);
 s_3=fabs(((x1*v3-x3*v1)+(x3*v4-x4*v3)+(x4*v1-x1*v4))/2.0);
 s_4=fabs(((x2*v3-x3*v2)+(x3*v4-x4*v3)+(x4*v2-x2*v4))/2.0);

l1=sqrt((x2-x1)*(x2-x1)+(v2-v1)*(v2-v1));
l2=sqrt((x3-x1)*(x3-x1)+(v3-v1)*(v3-v1));
l3=sqrt((x4-x1)*(x4-x1)+(v4-v1)*(v4-v1));
a=sqrt(2*l1*l1);
b=sqrt(2*l2*l2);
c=sqrt(2*l3*l3);

if((s_1 == s_2) && (s_2 == s_3) && (s_3 == s_4) && (s_1 == s_4))
  {
   if((l1==l2 && l3==a) || (l1==l3 && l2==c) || (l2==l3 && l1==b))
        printf("YES\n");
   else
        printf("NO\n");
  }
else
    printf("NO\n");


return 0;
}