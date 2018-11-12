#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
  int x1,y1,x2,y2,x3,y3,x4,y4;
  double a,b,c,d,a1,b1,c1,d1,a2,b2,c2,d2;
  cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

  a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  c=sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
  d=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));

  a1=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  b1=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  c1=sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
  d1=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));

  a2=sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
  b2=sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
  c2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  d2=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

  if((a==b && b==c && c==d) || (a1==b1 && b1==c1 && c1==d1) || (a2==b2 && b2==c2 && c2==d2))
     cout<<"YES"<<endl;
  else
     cout<<"NO"<<endl;

 
  return EXIT_SUCCESS;
}