#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>

#define MAX(a,b) (a<b?b:a)
#define size 1005

using namespace std;

int main(void){
   for(int ans, n, p; scanf("%d", &n) && n; ){
       scanf("%d", &p);
       ans = abs(p - n);
       while(scanf("%d", &p) && p) ans = __gcd(ans, abs(p - n));
       printf("%d\n", ans);
   }

   
   return 0;
}