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

#define LL unsigned long long

using namespace std;

LL n, ans = 0;
int main()
{
   ios_base::sync_with_stdio(false);
   cin >> n;
   while(n%2 == 0) {
       ++ans;
       n/=2;
   }
   cout << ans << endl;

   return 0;
} 