#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

#define MAX 12

int main(int argc, char *argv[])
{
  double a,b,x1,Y1,x2,y2,x3,y3,s1,s2,s3,s;
  cin >> x1 >> Y1 >> x2 >> y2 >> x3 >> y3 >> a >> b;

  if((a == x1 && b == Y1) || (a == x2 && b == y2) || (a == x3 && b == y3))
  {
      cout << "Vertex" << endl;
      return 0;
  }

  s = fabs(x1*y2 + x2*y3 + x3*Y1 - x2*Y1 - x3*y2 - x1*y3);
  s1 = fabs(x1*b + a*y2 + x2*Y1 - a*Y1 - b*x2 - x1*y2);
  s2 = fabs(a*y2 + x2*y3 + x3*b - x2*b - x3*y2 - a*y3);
  s3 = fabs(x1*b + a*y3 + x3*Y1 - a*Y1 - x3*b - y3*x1);

  if((s1 == 0 || s2 == 0 || s3 == 0) && s == s1+s2+s3)
     cout << "Edge\n";
  else if(s == s1+s2+s3)
     cout << "In\n";
  else
     cout << "Out\n";

  return EXIT_SUCCESS;
}