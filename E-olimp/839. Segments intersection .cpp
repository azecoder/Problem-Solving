#include <cstdlib>
#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;
int rectintersect(double a1,double b1,double a2,double b2,double a3,double b3,double a4,double b4);
double min(double i, double j);
double max(double i, double j);
int sgn(double o);
double intersect(double x1,double h, double x2, double y2, double x3,double y3, double x4, double y4);

double x1,h,x2,y2,x3,y3,x4,y4,d;
int main(int argc, char *argv[])
{scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &h, &x2, &y2, &x3, &y3, &x4, &y4);

d=intersect(x1,h,x2,y2,x3,y3,x4,y4);
if(d==0)
printf("No\n");
else
printf("Yes\n");
return EXIT_SUCCESS;
}
int rectintersect(double a1,double b1,double a2,double b2,
                       double a3,double b3,double a4,double b4)
{
if ((a3 - a2)*(a4 - a1) > 0) return 0;
if ((b3 - b2)*(b4 - b1) > 0) return 0;
return 1;
}
double intersect(double x1,double h, double x2, double y2,
               double x3,double y3, double x4, double y4)
{
double ABx, ABy, ACx, ACy, ADx, ADy;
double CAx, CAy, CBx, CBy, CDx, CDy;
double ACxAB, ADxAB, CAxCD, CBxCD;
if (!rectintersect(min(x1,x2),min(h,y2),max(x1,x2),max(h,y2), min(x3,x4),min(y3,y4),max(x3,x4),max(y3,y4)))
 return 0;
ACx = x3 - x1; ACy = y3 - h;
ABx = x2 - x1; ABy = y2 - h;
ADx = x4 - x1; ADy = y4 - h;

CAx = x1 - x3; CAy = h - y3;
CBx = x2 - x3; CBy = y2 - y3;
CDx = x4 - x3; CDy = y4 - y3;

ACxAB = ACx * ABy - ACy * ABx;
ADxAB = ADx * ABy - ADy * ABx;
CAxCD = CAx * CDy - CAy * CDx;
CBxCD = CBx * CDy - CBy * CDx;

return sgn(ACxAB) * sgn(ADxAB) <= 0 && sgn(CAxCD) * sgn(CBxCD) <= 0;
}
double max(double i, double j)
{return (i>j)? i : j;
  }
double min(double i, double j)
{return (i<j)? i : j;
  }
int sgn(double o)
{return (o>0)-(o<0);
  }