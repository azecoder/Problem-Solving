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

LL T, n, cnt, s;
int main()
{
   ios_base::sync_with_stdio(false);
   cin >> T;
   while(T--) {
       cin >> n;
       s = 1;
       for(int i = 2; i <= (int)(sqrt(1.0*n)); i++) {
           cnt = 0;
           while(n%i == 0) {
               cnt ++;
               n /= i;
           }
           s *= (cnt+1);
       }
       if(n > 1)   s *= 2;
       if(s%2)
           cout << "1" << endl;
       else
           cout << "0" << endl;
   }

   return 0;
} 