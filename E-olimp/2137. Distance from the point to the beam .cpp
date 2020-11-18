#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
   int x1, y1, x2, y2, x, y;
   double d1, d2, d3, p, A, h, min, max;
   cin>>x>>y>>x1>>y1>>x2>>y2;

   cout.setf(ios::fixed);
   cout.precision(6);
   d1 = sqrt((x - x1)*(x - x1) + (y - y1)*(y - y1));
   d2 = sqrt((x - x2)*(x - x2) + (y - y2)*(y - y2));
   d3 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
   p = (d1 + d2 + d3)/2;
   A = sqrt(p*(p - d1)*(p - d2)*(p - d3));
   h = 2*A/d3;
   min = d1;
   if( d2 < min ) min = d2;
   max = d1;
   if ( d2 > max ) max = d2;
   if( min != d2 )
   {
      if( min*min + d3*d3 < max*max ) cout<<min<<endl;
      else cout<<h<<endl;
   }
   else cout<<h<<endl;

  return EXIT_SUCCESS;
}