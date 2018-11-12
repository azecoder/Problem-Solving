#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 500010
#define PB push_back
#define MP make_pair
#define f first
#define s second

using namespace std;

typedef pair<int,int> PR;

vector<PR > g[MAXN];
bool used[MAXN];
int dis[MAXN] , len[MAXN] , par[MAXN];
int parent[MAXN][21];
int n , m;

void dfs(int v) {
  if (used[v]) return;
  used[v] = true;
  for (int i = 0; i < (int)g[v].size(); i++) {
      int to = g[v][i].f;
      int w = g[v][i].s;
      if (!used[to]) {
          dis[to] = dis[v] + w;
          len[to] = len[v] + 1;
          par[to] = v;
          dfs(to);
      }
  }
}

void init(int n) {
  for (int i = 0; i < n; i++)
      for (int j = 0; (1 << j) < n; j++)
          parent[i][j] = -1;
  for (int i = 0; i < n; i++)
      parent[i][0] = par[i];
  for (int j = 1; (1 << j) < n; j++)
      for (int i = 0; i < n; i++)
          if (parent[i][j - 1] != -1)
              parent[i][j] = parent[parent[i][j - 1]][j - 1];
}

int query(int p , int q) {
  int log;
  if (len[p] < len[q]) swap(p , q);
 
  for (log = 0; (1 << log) <= len[p]; log++); log--;
  for (int i = log; i >= 0; i--) {
      if (len[p] - (1 << i) >= len[q])
          p = parent[p][i];
  }
  if (p == q)
      return p;
 
  for (int i = log; i >= 0; i--)
      if (parent[p][i] != -1 && parent[p][i] != parent[q][i])
          p = parent[p][i] , q = parent[q][i];
         
  return par[p];    
}

int main()
{
  scanf("%d",&n);
  for (int i = 0; i < n - 1; i++) {
      int u , v , w;
      scanf("%d %d %d",&u,&v,&w);
      g[u].PB(MP(v , w));
      g[v].PB(MP(u , w));
  }
  dfs(0);
  init(n);
  scanf("%d",&m);
  for (int i = 0; i < m; i++) {
      int p , q;
      scanf("%d %d",&p,&q);
      int lca = query(p , q);
      printf("%d\n",dis[p] + dis[q] - 2 * dis[lca]);
  }
 
  return 0;
} 