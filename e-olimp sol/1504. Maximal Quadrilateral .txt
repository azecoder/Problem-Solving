#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

  int i = 1, t;
  double p, a, b,  S, c, d, r;

int main(int argc, char *argv[])
{
  cout.setf(ios::fixed);
  cout.precision(6);
  
  cin>>t; 
  while(t --)
  {
    cin>>p>>a>>b;
    c = (p - 2*a)/2;
    d = (p - 2*b)/2;  
    if( a + b >= p || c <= 0 || d <= 0 ) cout<<"Case"<<" "<<i<<":"<<" "<<"Eta Shombhob Na."<<endl;
    else
    {
      S = sqrt(a*b*c*d);
      r = 2*S/p;
      cout<<"Case"<<" "<<i<<":"<<" "<<r<<endl;
    }
  i ++; 
  }

  return EXIT_SUCCESS;
}