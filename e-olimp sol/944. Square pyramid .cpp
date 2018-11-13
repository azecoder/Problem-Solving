#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  double x1,x2,x3,x4,Y1,y2,y3,y4,z1,z2,z3,z4,S,a,b,c,l,m,n,p1,p2,p3,p4,s1,s2,s3,s4;

int main(int argc, char *argv[])
{

 scanf("%lf %lf %lf\n %lf %lf %lf\n %lf %lf %lf\n %lf %lf %lf", &x1,&Y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3,&x4,&y4,&z4);

 a=sqrt((x1-x2)*(x1-x2)+(Y1-y2)*(Y1-y2)+(z1-z2)*(z1-z2)),
 c=sqrt((x1-x3)*(x1-x3)+(Y1-y3)*(Y1-y3)+(z1-z3)*(z1-z3)),
 b=sqrt((x1-x4)*(x1-x4)+(Y1-y4)*(Y1-y4)+(z1-z4)*(z1-z4)),
 m=sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4)+(z2-z4)*(z2-z4)),
 l=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(z2-z3)*(z2-z3)),
 n=sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3)+(z4-z3)*(z4-z3)),

 p1=(a+c+l)/2,
 p2=(c+b+n)/2,
 p3=(a+b+m)/2,
 p4=(l+m+n)/2,

 s1=sqrt(p1*(p1-a)*(p1-c)*(p1-l)),
 s2=sqrt(p2*(p2-c)*(p2-b)*(p2-n)),
 s3=sqrt(p3*(p3-a)*(p3-b)*(p3-m)),
 s4=sqrt(p4*(p4-l)*(p4-m)*(p4-n)),

 S=s1+s2+s3+s4;

 printf("%.1lf\n", S);


return 0;
}