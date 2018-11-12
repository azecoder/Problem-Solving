#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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

#define LL __int64

using namespace std;

LL n, k, MOD = 10000007;

LL ModPow(LL a, LL b) {
  if(b == 0)
      return 1;
  else if(b%2 == 0)
      return (ModPow(a, b/2) * ModPow(a, b/2)) % MOD;
  else
      return ((a%MOD) * ModPow(a, b-1)) % MOD;
}

int main()
{
   ios_base::sync_with_stdio(false);
   while(cin >> n >> k, n + k)
       cout << ( 2 * ModPow(n-1, k) + 2 * ModPow(n-1, n-1) + ModPow(n, n) + ModPow(n, k) ) % MOD << endl;

   return 0;
} 