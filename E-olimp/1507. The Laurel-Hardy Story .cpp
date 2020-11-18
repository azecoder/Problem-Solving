#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
double n,r,d,h,a,EB,AB,b,c;
int i;
cin>>n;
for(i=1;i<=n;i++){
  cin>>r>>d>>h;
  EB=sqrt(r*r-(r-d)*(r-d));
  AB=EB*2;
  a=asin((r-d)/r);
  b=asin((r-h)/r);
  c=b-a;
  cout.precision(4);
  cout.setf(ios::fixed,ios::floatfield);
  cout<<"Case "<<i<<": "<<h+sin(c)*AB<<"\n";
}
  return EXIT_SUCCESS;
} 