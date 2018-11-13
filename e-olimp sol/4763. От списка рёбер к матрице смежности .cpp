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

#define ull unsigned long long
#define MAX 1001

ull a[MAX][MAX],i,j,m,n,x,y;

int main(int argc, char *argv[])
{
  cin >> n >> m;

  for(i = 1; i <= m; i ++)
  {
      cin >> x >> y;

      a[x][y] = 1;
      a[y][x] = 1;

  }

  for(i = 1; i <= n; i ++)
  {
      for(j = 1; j < n; j ++)
               cout << a[i][j] << " ";
      cout << a[i][n] << endl;
  }


   
   return EXIT_SUCCESS;
}