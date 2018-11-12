#include <cstdlib>
#include <iostream>
#define pi acos(-1)
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  double x01,y01,y02,x02,v1,v2,a2,a1,x1,x2,av,bv,ax,by,t,s;
  cin>>x01>>y01>>x02>>y02>>a1>>v1>>a2>>v2;
  av=v1*cos((pi*a1)/180)-v2*cos((pi*a2)/180);
  bv=v1*sin((pi*a1)/180)-v2*sin((pi*a2)/180);
  ax=x01-x02;
  by=y01-y02;

  t=(-(av*ax+bv*by))/(av*av+bv*bv);
  if(t>0)
  {
     s=sqrt((ax+t*av)*(ax+t*av)+(by+t*bv)*(by+t*bv));
     cout.setf(ios::fixed);
     cout.precision(2);
     cout<<s<<endl;
  }
  else
  {
     s=sqrt(ax*ax+by*by);
     cout.setf(ios::fixed);
     cout.precision(2);
     cout<<s<<endl;
  }
  return EXIT_SUCCESS;
} 