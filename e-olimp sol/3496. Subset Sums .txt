#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>

#define Set(a, s) memset(a, s, sizeof (a))

using namespace std;

long long dp [1600];

int main () {

  int n; scanf ("%d", &n);

  if ( ((n * (n + 1)) / 2) % 2 ) {
      printf ("0\n"); return 0;
  }

  Set (dp, 0);

  dp [0] = 1;
  for ( int i = 1; i <= n; i++ ) {
      for ( int j = 1599; j >= 0; j-- ) {
          if ( dp [j] && j + i < 1600 )
              dp [j + i] += dp [j];
      }
  }


  cout << dp [(n * (n + 1) / 2) / 2] / 2 << endl;

  return 0;
}