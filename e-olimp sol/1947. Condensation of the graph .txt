#include <iostream>
#include <algorithm>
#include <vector>
#include <memory.h>
#include <stdio.h>
#include <queue>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 10010
#define PB push_back
#define MP make_pair
#define clr(a) memset(a, 0, sizeof(a))

using namespace std;

typedef vector<int> vi;

vector <int> g[MAXN] , rev[MAXN];
vector <pair<int,int> > edges;
bool used2[10001][10001];
int used[MAXN] , list[MAXN] , color[MAXN];
int n , m , l = 0 , colors = 1;

   void dfs(int v)
   {
       used[v] = 1;
       for (int i = 0; i < (int)g[v].size(); i++)
       {
           int to = g[v][i];
           if (!used[to]) dfs(to);
       }
       list[l++] = v;
   }

   void DFS(int v , int c)
   {
       color[v] = c;
       for (int i = 0; i < (int)rev[v].size(); i++)
       {
           int to = rev[v][i];
           if (!color[to]) DFS(to , c);
       }
   }

int main()
{    
 
  scanf("%d %d",&n,&m);
  for (int i = 0; i < m; i++)
  {
      int p , q;
      scanf("%d %d",&p,&q);
      if (used2[p][q]) continue;
      used2[p][q] = 1;
      edges.PB(MP(p , q));
      g[p].PB(q);
      rev[q].PB(p);
  }
  for (int i = 1; i <= n; i++)
      if (!used[i])
          dfs(i);    
  for (int i = l - 1; i >= 0; i--)
      if (!color[list[i]])
          DFS(list[i] , colors++);
  int ans = 0;
  clr(used2);
  for (int i = 0; i < (int)edges.size(); i++) {
      int u = edges[i].first , v = edges[i].second;
      if (used2[color[u]][color[v]] || used2[color[v]][color[u]]) continue;
      used2[color[u]][color[v]] = true;
      if (color[u] != color[v])
          ans++;
         
  }
  printf("%d\n",ans);
     
     
  return 0;
} 