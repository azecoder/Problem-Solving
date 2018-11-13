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
#define MAXN 105
#define MAXM 10005
#define INF 1LL << 60
#define pi acos(-1.0)
#define mod 100000000
#define clr(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

typedef pair<int, LL> pr;

LL g[MAXN][MAXN];
int used[MAXN];
LL mat[MAXN][MAXN];
int ar[MAXN][MAXN];
LL dis[MAXN];
int n , m , k , flag;

int can(int k , LL current_charge) {
 for (int i = 1; i <= n; ++i) {
     for (int j = 1; j <= n; ++j) {
         if (i == j) ar[i][j] = 0;
         else ar[i][j] = g[i][j] > 0 && g[i][j] <= current_charge ? 1 : k + 1;
     }
 }
 int _k = 0;
 for (int l = 1; l <= n; ++l) {
     for (int i = 1; i <= n; ++i) {
         for (int j = 1; j <= n; ++j) {
             if (ar[i][j] == 0 || ar[l][j] == 0) continue;
             ar[i][j] = min(ar[i][j] , ar[i][l] + ar[l][j]);
         }
     }
 }
 for (int i = 1; i <= n; ++i) {
     for (int j = 1; j <= n; ++j) {
         _k = max(_k , ar[i][j]);
     }
 }

 return _k <= k;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie();

 int t;
 cin >> t;
 while (t--) {
     cin >> n >> k >> m;
     for (int i = 1; i <= n; ++i)
         for (int j = 1; j <= n; ++j)
             g[i][j] = INF;
     for (int i = 0; i < m; ++i) {
         int u , v , w;
         cin >> u >> v >> w;
         ++u; ++v;
         g[u][v] = g[v][u] = w;
     }
     for (int l = 1; l <= n; ++l) {
         for (int i = 1; i <= n; ++i) {
             for (int j = 1; j <= n; ++j) {
                 if (g[i][l] == INF || g[l][j] == INF) continue;
                     g[i][j] = min(g[i][j] , g[i][l] + g[l][j]);
                 }
         }
     }
     LL l = 0LL , r = 1000000000000LL , ans;
     while (l <= r) {
         LL mid = (l + r) / 2;
         int tt = can(k , mid);
         //cout << mid << " " << tt << endl;
         if (tt) {
             ans = mid;
             r = mid - 1;
         } else {
             l = mid + 1;
         }
     }
     cout << ans << endl;
 }

 return 0;
}
