#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n,i;
  double r,x,y,d,d1,d2;
  cin>>n;
  for(i=0;i<n;i++){
     cin>>r>>x>>y;
     if(x<0)     x=-x;

     d1=(double)x*r;
     d2=(double)2*r-y;
     d=(double)d1/d2;
     cout.precision(2);
     cout.setf(ios::fixed,ios::floatfield);
     cout<<d<<"\n";
  }
  
  return EXIT_SUCCESS;
}