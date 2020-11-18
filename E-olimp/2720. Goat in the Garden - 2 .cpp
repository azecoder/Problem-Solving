#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double x1, v1, x2, v2, x, y, l;
double d1, d2, d3, p, A, h, minn, maxx, res, ans1, ans2;

int main(int argc, char *argv[])
{
   cin >> x1 >> v1 >> x2 >> v2 >> x >> y >> l;
   d1 = sqrt((x - x1)*(x - x1) + (y - v1)*(y - v1));
   d2 = sqrt((x - x2)*(x - x2) + (y - v2)*(y - v2));
   d3 = sqrt((x1 - x2)*(x1 - x2) + (v1 - v2)*(v1 - v2));
   A = fabs(x1*(v2 - y) + x2*(y - v1) + x*(v1 - v2))/2;
   h = 2 * A / d3;
   minn = d1;
   if( d2 < minn )  minn = d2;
   maxx = d1;
   if ( d2 > maxx ) maxx = d2;
   if( minn*minn + d3*d3 <= maxx*maxx )    res = minn;
   else                                res = h;
   ans1 = res - l;
   ans2 = maxx - l;
   if( ans1 < 0 )  ans1 = 0.0;
   if( ans2 < 0 )  ans2 = 0.0;

   cout.setf(ios::fixed);
   cout.precision(6);
   cout << ans1 << endl << ans2 << endl;

   return EXIT_SUCCESS;
} 