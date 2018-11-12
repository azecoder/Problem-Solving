#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a, int b) {
      if(b==0)
           return a;
      else{
          if(a<b)
              return gcd(b,a);
          else
           return gcd(b,a%b);
          
      }
      }
int main(int argc, char *argv[])
{int x1,x2,x3,y1,y2,y3,k,k1,k2,k3,n;
  cin>>n;
  for(int l=0;l<n;l++){
      cin>>x1>>y1>>x2>>y2>>x3>>y3;
  
//   l1 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 // l2 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
 // l3 = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
  int s = abs((x2*y1-y2*x1)+(x3*y2-x2*y3)+(x1*y3-x3*y1));
  s = s/2;
  if(s==0)
      cout<<0<<endl;
  else{
  k1 = gcd(abs(x2-x1),abs(y2-y1));
  k2= gcd(abs(x3-x2),abs(y3-y2));
  k3 = gcd(abs(x1-x3),abs(y1-y3));
  
  k = k1+k2+k3;
  
  s = s+1-k/2;  
  
  cout<<s<<endl;
}
}
 
  return EXIT_SUCCESS;
}