#include <cstdlib>
#include <iostream>
//#include<math.h>
long teref(long z1,long v1,long z2,long v2);
long gcd(long a,long b);
using namespace std;
long s,t,l1,l2,l3,x1,y1,x2,y2,x3,y3,In,k,l,m,n;
int main(int argc, char *argv[])
{while(1){
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  if(x1==0 && y1==0 && x2==0 && y2==0 && x3==0 && y3==0)
      break;
  l1=teref(x1,y1,x2,y2);
  l2=teref(x2,y2,x3,y3);
  l3=teref(x3,y3,x1,y1);
  t=l1+l2+l3+3;
  k=(x2*y1-x1*y2)+(x3*y2-x2*y3)+(x1*y3-y1*x3);

  s=abs(k)/2;
  //cout<<s<<endl;
  In=s-t/2+1;
  cout<<In<<endl;

}

  return EXIT_SUCCESS;
}
long teref(long z1,long v1,long z2,long v2){
   long dx,dy,z;
   dx=abs(z2-z1);
   dy=abs(v2-v1);
   if(dx==0)
      return dy-1;
   else if(dy==0)
      return dx-1;
    else{

          z=gcd(dx,dy);
          return z-1;
      }
}
long gcd(long a,long b){
  return (b) ? gcd(b,a%b):a;
}