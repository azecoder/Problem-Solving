#include <iostream>
#include <algorithm>
#include <memory.h>
#include <stdio.h>
#include <vector>
#include <queue>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 10010
#define PB push_back
#define clr(a) memset(a, 0, sizeof(a))

using namespace std;

vector<int> g[MAXN] , g2[MAXN];
int used[MAXN];
int Q[MAXN] , ql, qr;
int n , m , cvb;

void dfs(int v)
{
 used[v] = true;
 for (int i = 0; i < (int)g2[v].size(); i++) {
     int to = g2[v][i];
     if (!used[to]) {
         Q[qr++] = to;
         dfs(to);
     }
 }
}

void bfs(int v) {
  cvb += qr + 1;
  Q[qr++] = v;
  while (ql < qr - 1) {
      int cur = Q[++ql];
      for (int i = 0; i < (int)g[cur].size(); i++) {
          int to = g[cur][i];
          if (!used[to]) {
              Q[qr++] = to;
              used[to] = 1;
              cvb++;
          }
      }
      used[cur] = 1;
  }            
}

int main()
{
  scanf("%d %d",&n,&m);
  for (int i = 0; i < m; i++) {
      int u , v;
      scanf("%d %d",&u,&v);
      g[u].PB(v);
      g2[v].PB(u);
  }
  for (int i = 1; i <= n; i++) {
      ql = -1; qr = 0;
      dfs(i);
      bfs(i);
      clr(used);
  }
 
  printf("%d\n",cvb);
 
  return 0;    
} 