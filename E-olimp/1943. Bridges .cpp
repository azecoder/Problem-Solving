#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <set>

#define MAXN 20001

using namespace std;

vector<pair<int,int> > g[MAXN];
int parent[MAXN];
int low[MAXN];
int dis[MAXN];
int used[MAXN];
set<int> ans;
int n , m , l , dis_t = 1;

void dfs(int v) {
  used[v] = 1;
  dis[v] = dis_t++;
  low[v] = dis[v];
  for (int i = 0; i < (int)g[v].size(); i++) {
      int to = g[v][i].first , b_no = g[v][i].second;
      if (!used[to]) {
          parent[to] = v;
          dfs(to);
          low[v] = min(low[v] , low[to]);
          if (low[to] > dis[v])
              ans.insert(b_no);
      }
      else if (to != parent[v])
          low[v] = min(low[v] , dis[to]);
  }
}

int main()
{
  scanf("%d %d",&n,&m);
  for (int i = 0; i < m; i++) {
      int u , v;
      scanf("%d %d",&u,&v);
      g[u].push_back(make_pair(v , i + 1));
      g[v].push_back(make_pair(u , i + 1));
  }

  for (int i = 1; i <= n; i++)
      if (!used[i])
          dfs(i);

  int ar[ans.size() + 1] , l = 0;
  printf("%d\n",(int)ans.size());
  if (ans.size() != 0) {
      for (set<int>::iterator iter = ans.begin(); iter != ans.end(); iter++)
          ar[l++] = *iter;
      for (int i = 0; i < l - 1; i++)
          printf("%d ",ar[i]);
      printf("%d\n",ar[l - 1]);
  }
  return 0;
} 