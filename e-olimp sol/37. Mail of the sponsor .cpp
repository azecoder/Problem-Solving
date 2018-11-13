#include <iostream>
#include <vector>

#define MAXN 100001
#define pb push_back

using namespace std;

vector<int> g[MAXN];
int used[MAXN];
int n , m , s;

void dfs(int v) {
  used[v] = 1;
  for (int i = 0; i < (int)g[v].size(); i++) {
      int to = g[v][i];
      if (!used[to])
          dfs(to);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
 
  int ans = 0;
 
  cin >> n >> s >> m;
  for (int i = 0; i < m; i++) {
      int x , y;
      cin >> x >> y;
      g[x].pb(y);
      g[y].pb(x);
  }
  for (int i = 1; i <= n; i++)
      if (!used[i]) {
          dfs(i);
          ans += 1;
      }
  cout << ans - 1 << endl;
 
  return 0;
} 