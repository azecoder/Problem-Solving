#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define MAX 10001

double mesafe(int a, int b, int c, int d)
{
  return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}

int main(int argc, char *argv[])
{
  int i,n,x1,Y1,x2,y2,x3,y3,x4,y4,say=1;
  double a,b,c,d,e,f;
  cin >> n;

  while(n != 0)
  {
      cin >> x1 >> Y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

      a = mesafe(x1,Y1,x2,y2);
      b = mesafe(x2,y2,x3,y3);
      c = mesafe(x3,y3,x4,y4);
      d = mesafe(x4,y4,x1,Y1);
      e = mesafe(x1,Y1,x3,y3);
      f = mesafe(x2,y2,x4,y4);

      if(a == b && b == c && c == d && e == f)
          cout<<"Case "<<say<<": Square"<<endl;
      else if(a==c && b==d && a!=d && e==f)
          cout<<"Case "<<say<<": Rectangle"<<endl;
      else if (a==b && b==c && c==d && e!=f)
          cout<<"Case "<<say<<": Rhombus"<<endl;
      else
          cout<<"Case "<<say<<": Other"<<endl;

      say++;
      n--;
  }


   return EXIT_SUCCESS;
}