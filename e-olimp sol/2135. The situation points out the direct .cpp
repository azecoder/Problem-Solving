#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
double x1,y1,x2,y2,a,b,c,d,e;
scanf("%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&a,&b,&c);
d=a*x1+b*y1+c;
e=a*x2+b*y2+c;
if(d<0 && e<0)
printf("YES\n");
else if (d>0 && e>0)
printf("YES\n");
else
printf("NO\n");
return 0;
}