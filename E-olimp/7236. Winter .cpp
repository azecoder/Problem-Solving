#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

#define MAXN 100002
#define MP make_pair
#define PB push_back

vector <int> g[MAXN];
int used[MAXN], n, m, x, y, ans = 0;

void dfs(int v) {
   used[v] = 1;
   for(int i = 0; i < g[v].size(); i++) {
       int to = g[v][i];
       if(!used[to]) {
           dfs(to);
       }
   }
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

   ios_base::sync_with_stdio(false);

   scanf("%d %d", &n, &m);
   for (int i = 0; i < m; i++) {
       scanf("%d %d", &x, &y);
       g[x].PB(y);
       g[y].PB(x);
   }
   for(int i = 1; i <= n; i++) {
       if(!used[i]) {
           dfs(i);
           ans ++;
       }
   }
   printf("%d\n", ans);

   return 0;
} 