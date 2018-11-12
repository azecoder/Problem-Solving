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
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

#define ll long long

int main(int argc, char *argv[])
{
  ll i,j,x,y,n,m,k;
  char a[20],b[20];
  
  while(cin >> a >> b)
  {
      x = y = 0;
      k = 1;

      n = strlen(a);
      m = strlen(b);

      for(i = n - 1; i >= 0; i --)
          if(a[i] != ',' && a[i] != '-')
          {
              x += (a[i]-48)*k;
              k *= 10;
          }

      if(a[0] == '-')
          x = -x;

      k = 1;

      for(i = m - 1; i >= 0; i --)
          if(b[i] != ',' && b[i] != '-')
          {
              y += (b[i]-48)*k;
              k *= 10;
          }

      if(b[0] == '-')
      y = -y;

      cout << x + y << endl;
  }

   
   return EXIT_SUCCESS;
}