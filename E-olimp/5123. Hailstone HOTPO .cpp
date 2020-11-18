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

#define clr(a, b) memset(a, b, sizeof(a))
#define LL long long
#define pb push_back

using namespace std;

int T;
int main()
{
   cin >> T;
   while(T--) {
       int ind, n;
       cin >> ind >> n;
       int a = n;
       int maxn = 1;
       while(n > 1) {
           if(n%2) {
               n = 3 * n + 1;
           }
           else {
               n /= 2;
           }
           maxn = max(maxn, n);
       }
       cout << ind << " " << max(maxn, a) << endl;
   }
} 
