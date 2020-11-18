#include <iostream>
#include <algorithm>
#include <vector>
#include <memory.h>
#include <stdio.h>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 1010
#define INF 1000000002
#define pb push_back
#define clr(a) memset(a, 0, sizeof(a))

using namespace std;

typedef vector<int> VI;

int used[MAXN] , listt[MAXN] , color[MAXN];
int a[MAXN][MAXN];
int n , m , l = 0;

  void dfs(int v , VI g[])
  {
      used[v] = 1;
      for (int i = 0; i < (int)g[v].size(); i++)
      {
          int to = g[v][i];
          if (!used[to]) dfs(to , g);
      }
      listt[l++] = v;
  }

  void _dfs(int v , int c , VI rev[])
  {
      color[v] = c;
      for (int i = 0; i < (int)rev[v].size(); i++)
      {
          int to = rev[v][i];
          if (!color[to]) _dfs(to , c , rev);
      }
   }

int f(int volume) {
 vector<int> g[MAXN] , rev[MAXN];
 int flags = 1; l = 0;

 for (int i = 1; i <= n; i++) {
     for (int j = 1; j <= n; j++) {
         if (i == j) continue;
         if (a[i][j] <= volume)
             g[i].pb(j),
             rev[j].pb(i);
     }
 }
 for (int i = 1; i <= n; i++)
     if (!used[i])    dfs(i , g);

 for (int i = l - 1; i >= 0; i--)
     if (!color[listt[i]])    _dfs(listt[i] , flags++ , rev);

 clr(used);
 clr(color);
 return flags == 2 ? true : false;
}

int main()
{
 int l = INF , r = 0 , cvb = 0;

 scanf("%d",&n);
 for (int i = 1; i <= n; i++)
     for (int j = 1; j <= n; j++)
     {
         scanf("%d",&a[i][j]);
         if (i == j) continue;
         l = min(l , a[i][j]);
         r = max(r , a[i][j]);
     }
 while (l <= r)
 {
     int mid = l + (r - l) / 2;
     int k = f(mid);
     if (k) cvb = mid , r = mid - 1;
     else l = mid + 1;
 }
 printf("%d\n",cvb);

 return 0;
} 