#include <cmath>
#include <iostream>

using namespace std;

int sgn(long long n)
{
  return (n > 0) - (n < 0);
}

int RectanglesIntersects(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3,long long x4,long long y4)
{
  if (sgn(x3 - x2) * sgn(x4 - x1) > 0) return 0;
  if (sgn(y3 - y2) * sgn(y4 - y1) > 0) return 0;
  return 1;
}

int intersect(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3,long long x4,long long y4)
{
  long long ABx, ABy, ACx, ACy, ADx, ADy;
  long long CAx, CAy, CBx, CBy, CDx, CDy;
  long long ACxAB, ADxAB, CAxCD, CBxCD;
  if (!RectanglesIntersects(min(x1,x2),min(y1,y2),max(x1,x2),max(y1,y2),min(x3,x4),min(y3,y4),max(x3,x4),max(y3,y4))) return 0;
  ACx = x3 - x1; ACy = y3 - y1; 
  ABx = x2 - x1; ABy = y2 - y1;
  ADx = x4 - x1; ADy = y4 - y1;
  CAx = x1 - x3; CAy = y1 - y3; 
  CBx = x2 - x3; CBy = y2 - y3;
  CDx = x4 - x3; CDy = y4 - y3;
  ACxAB = ACx * ABy - ACy * ABx;
  ADxAB = ADx * ABy - ADy * ABx;
  CAxCD = CAx * CDy - CAy * CDx;
  CBxCD = CBx * CDy - CBy * CDx;
  if ((sgn(ACxAB) * sgn(ADxAB) > 0) || (sgn(CAxCD) * sgn(CBxCD) > 0))  return 0;
  return 1;
}

int main(int argc, char *argv[])
{
 double x1, y1, x2, y2, x3, y3, x4, y4;
 scanf("%lf%lf %lf %lf",&x1,&y1,&x2,&y2);
 scanf("%lf %lf %lf %lf",&x3,&y3,&x4,&y4);
 if (intersect(x1,y1,x2,y2,x3,y3,x4,y4)) printf("YES\n");
 else printf("NO\n");
 
 return 0;
}