#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <memory.h>
#include <vector>

#define MAXN 20001
#define pb push_back

using namespace std;

vector<int> g[MAXN] , _g[MAXN];
int list[MAXN] , l = 0;
bool used[MAXN];
int n , m , colors, color[MAXN];

void dfs(int v)
{
   used[v] = true;
   for (int i = 0; i < (int)g[v].size(); i++)
   {
       int to = g[v][i];
       if (!used[to])
           dfs(to);
   }
   list[l++] = v;
}

void _dfs(int v , int c)
{
   color[v] = c;
   for (int i = 0; i < (int)_g[v].size(); i++)
   {
       int to = _g[v][i];
       if (!color[to])
           _dfs(to , c);
   }
}

int main()
{
   ios_base::sync_with_stdio(false);

   cin >> n >> m;
   for (int i = 0; i < m; i++)
   {
       int u , v;
       cin >> u >> v;
       g[u].pb(v);
       _g[v].pb(u);
   }
   for (int i = 1; i <= n; i++)
       if (!used[i])
           dfs(i);
   colors = 1;
   for (int i = l - 1; i >= 0; i--)
       if (!color[list[i]])
           _dfs(list[i] , colors++);
   cout << --colors << endl;
   for (int i = 1; i < n; i++)
       cout << color[i] << " ";
   cout << color[n] << endl;


   return 0;
} 