#include <iostream>
#include <stdio.h>

#define exp 1e-9

using namespace std;

double a , b , c , d;

double f(double x) {
 return a*x*x*x + b*x*x + c*x + d;
}

void binarysearch(double l , double r) {
  double mid , k;
  while (r - l > exp) {
     mid = (r + l) / 2.0;    
     k = f(mid);
     if (f(l)*k < 0) r = mid;
     else l = mid;
  }
  cout.precision(6);
  cout << fixed << mid << endl;
}

int main()
{
 double r = 1.0;

 cin >> a >> b >> c >> d;
 while (f(-r) * f(r) > 0.0) r *= 2;

 binarysearch(-r * 2.0 , r);

 return 0;
} 