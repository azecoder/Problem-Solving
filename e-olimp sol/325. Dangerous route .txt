#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <memory.h>
#include <vector>
#include <queue>
#include <list>

#define MAXN 1000001
#define INF 1000000
#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

typedef pair<int,int> pr;

vector<pair<pr,int> > g;
int parent[MAXN];
int rnk[MAXN];
int n , m;

int par(int x)
{
   while (x != parent[x]) x = parent[x];
   return parent[x];
}

void Union(int x , int y)
{
   int _x = par(x) , _y = par(y);
   if (rnk[_x] < rnk[_y]) parent[_x] = _y;
   else parent[_y] = x;
   if (rnk[_x] == rnk[_y]) rnk[_x]++;
}

bool comp(pair<pr , int> a , pair<pr , int> b)
{
   return a.s < b.s;
}

int main()
{
   ios_base::sync_with_stdio(false);
   int ans;

   scanf("%d %d", &n, &m);
   for (int i = 0; i <= n; i++) parent[i] = i;
   for (int i = 0; i < m; i++)
   {
       int x , y , z;
       scanf("%d %d %d", &x, &y, &z);
       g.pb(mp(mp(x,y),z));
   }
   sort(g.begin() , g.end() , comp);
   for (int i = 0  ; i < (int)g.size() && (par(1) != par(n)); i++)
   {
       int u = g[i].f.f , v = g[i].f.s , w = g[i].s;
       if (par(u) != par(v))
       {
           Union(u , v);
           ans = w;
       }
   }
   printf("%d\n", ans);

   return 0;
} 