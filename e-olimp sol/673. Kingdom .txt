#include <iostream>
#include <vector>

#define MAXN 1001

using namespace std;

vector<int> g[MAXN];
int d[MAXN] , comp[MAXN];
int used[MAXN];
int n , k , cmpt = 1, ans;

void dfs(int v , int c)
{
   used[v] = 1;
   if (d[v] % 2) comp[c]++;
   for (int i = 0; i < (int)g[v].size(); i++)
   {
       int to = g[v][i];
       if (!used[to])
           dfs(to , c);
   }
}

int main()
{
   cin >> n >> k;
   for (int i = 0; i < k; i++)
   {
       int u , v , w;
       cin >> u >> v >> w;
       d[u] += w;
       d[v] += w;
       g[u].push_back(v);
       g[v].push_back(u);
   }

   for (int i = 1; i <= n; i++)
       if (!used[i])
           dfs(i , cmpt++);
   cmpt--;
   for (int i = 1; i <= cmpt; i++)
   {
       ans += comp[i] == 0 ? (cmpt > 1 ? 2 : 0) : comp[i];
   }
   cout << ans / 2 << endl;

   return 0;
} 