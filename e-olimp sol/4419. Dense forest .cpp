#include <iostream>
#include <stdio.h>
#include <math.h>

#define exp 1e-8

using namespace std;

double Vp , Vf , Oy;

double dis(double x , double y) {
  return sqrt(x*x + y*y);
}

double f(double d) {
  double t1 = dis(1.0 - Oy , d) / Vp;
  double t2 = dis(1.0 - d , Oy) / Vf;
  return t1 + t2;
}

int main()
{    
  double l = 0.0 , r = 1.0;
  cin >> Vp >> Vf >> Oy;
 
  while (r - l >= exp) {
      double k = l + (r - l) / 3;
      double p = r - (r - l) / 3;
      if (f(k) < f(p)) r = p;
      else l = k;
  }
  printf("%.8lf\n",l);
 
  return 0;
} 