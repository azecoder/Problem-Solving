#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
  double x1, y1, x2, y2, x3, y3, d1, d2, d3, h, r, s;
  cin >> x1 >> y1 >> r >> x2 >> y2 >> x3 >> y3;
  s = abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2))/2;
  d1 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
  d3 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
  d2 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
  h = 2*s/d1;
  if( d2 > r && d3 > r && h < r && min(d2,d3)*min(d2,d3) + d1*d1 < max(d2,d3)*max(d2,d3) )
      cout<<0<<endl;
  else if( d2 > r && d3 > r && h < r && min(d2,d3)*min(d2,d3) + d1*d1 > max(d2,d3)*max(d2,d3) )
      cout<<2<<endl;
  else if( d2 > r && d3 > r && h == r && min(d2,d3)*min(d2,d3) + d1*d1 > max(d2,d3)*max(d2,d3) )
      cout<<1<<endl;
  else if( h > r )
       cout<<0<<endl;
  else if ( d2 > r && d1 < r )
       cout<<1<<endl;
  else if( d2 < r && d1 > r )
       cout<<1<<endl;
  else if( d2 < r && d1 < r )
       cout<<0<<endl;
  else if( d2 == r && d3 == r )
       cout<<2<<endl;
  else
       cout<<1<<endl;

   return 0;
}
