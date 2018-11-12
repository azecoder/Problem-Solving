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

#define LL __int64
#define MAXN 50100
#define pb push_back
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

vector < vector <LL> > g;
LL used[MAXN];
LL ans = 0, n, k, MaskLen;
bitset <MAXN> mask[MAXN];

void dfs(LL v) {
   used[v] = 1;
   for(LL i = 0; i < g[v].size(); i++) {
       LL to = g[v][i];
       if(!used[to])   dfs(to);
       mask[v] |= mask[to];
       mask[v].set(to);
   }
}

void solve() {
   dfs(1);
}

int main()
{
   scanf("%I64d %I64d", &n, &k);
   g.resize(n+1);
   for(LL i = 1; i <= k; i++) {
       LL x, y;
       cin >> x >> y;
       g[x].pb(y);
   }
   solve();
   for(LL i = 1; i <= n;i++) {
       if(!used[i])    dfs(i);
       ans += mask[i].count();
   }
   printf("%I64d\n", ans);

   return 0;
} 
