#include <iostream>
#include <cstdio>
#include <cstdlib>
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
#include <math.h>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define LL __int64
#define ULL unsigned long long
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

LL n;
int main()
{
   ios_base::sync_with_stdio(false);

   while(cin >> n, n) {
       LL ans = n;
       LL ind = 0;
       LL root = (LL)(sqrt(1.0*n));
       for(int i = 2; i <= root; i++) {
           if(n%i == 0) {
               while(n%i==0)   n /= i;
               //cout << i << " - " << ans << " " << ((1.0)*(i-1)/i) << endl;
               ans *= ((1.0)*(i-1)/i);
           }
       }
       if(n > 1)
           ans *= ((1.0)*(n-1)/n);
       cout << ans << endl;
   }

   return 0;
} 