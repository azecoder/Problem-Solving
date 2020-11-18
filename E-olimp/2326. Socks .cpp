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

#define MAX 100001

long  b[MAX];

int main(int argc, char *argv[])
{
long t, n, m;
  cin >> t >> n >> m;

long l,r;   
  for(long i = 1; i <= n; i++ )
  {
      cin >> l >> r;
      for(long j = l; j <= r; ++j)
      b[j] ++;
  }

long h;
  for(long j = 1; j < m; ++j)
  {
      cin >> h;
      cout << b[h] << " ";
  }

  cin >> h;
  cout << b[h] << endl;


   
   return EXIT_SUCCESS;
}