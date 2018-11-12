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

#define ll long long
#define lli long long int

int main(int argc, char *argv[])
{
  int i, j, n, m, x;
  bool flag;
  char a[51],b[51];
  cin >> x;
  for(j = 1; j <= x; ++j)
  {
      cin >> a >> b;

      n = strlen(a);
      m = strlen(b);

      flag = false;

      if(n != m)
      {
          flag = true;
          cout << "No" << endl;    continue;
      }

      for(i = 0; i < n; ++i)
          if(a[i] >= 65 && a[i] <= 90)
              a[i] += 32;

      for(i = 0; i < m; ++i)
          if(b[i] >= 65 && b[i] <= 90)
              b[i] += 32;

      sort(a, a+n);
      sort(b, b+m);

      for(i = 0; i < n; ++i)
      {
          if(a[i] != b[i])
          {
              flag = true;
              break;
          }
      }

      if(flag == false)
          cout << "Yes" << endl;
      else
          cout << "No" << endl;
  }


   
   return EXIT_SUCCESS;
}