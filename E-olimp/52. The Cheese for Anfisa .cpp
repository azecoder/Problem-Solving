#include <cstdlib>
#include <iostream>
#include<math.h>
#define p acos(-1)
using namespace std;

int main(int argc, char *argv[])
{int a,b,z;
double l,k,n,s;
cin>>a>>b>>z;
l=(z*p)/180;
if(z==90)
{
  s=a*sqrt(2)*b;
}
else if(z==0)
{
  s=a*a/2;
}
else
{
if(l<=atan(b*sqrt(2)/a))
s=(a*a)/(2*cos(l));
else
s=(a*sqrt(2)-b/tan(l))*b/sin(l);
}
printf("%.3lf\n",s);


      return EXIT_SUCCESS;
}