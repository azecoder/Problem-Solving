#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <memory.h>
#include <vector>
#include <set>

#define MAXN 20001

using namespace std;

vector<int> g[MAXN];
set<int> ans;
int dis[MAXN], low[MAXN], used[MAXN], parent[MAXN];
int n , m , d_time = 1;

void dfs(int v)
{

   int children = 0;

   used[v] = 1;
   dis[v] = d_time++;
   low[v] = dis[v];
   for (int i = 0; i < (int)g[v].size(); i++)
   {
       int to = g[v][i];
       if (!used[to])
       {
           children++;
           parent[to] = v;
           dfs(to);
           low[v] = min(low[v] , low[to]);
           if (parent[v] == -1 && children > 1)
               ans.insert(v);
           if (parent[v] != -1 && low[to] >= dis[v])
               ans.insert(v);
       }
       else if (to != parent[v])
           low[v] = min(low[v] , dis[to]);
   }
}

int main()
{
   ios_base::sync_with_stdio(false);
   scanf("%d %d",&n,&m);
   for (int i = 0; i < m; i++)
   {
       int u , w;
       scanf("%d %d",&u,&w);
       g[u].push_back(w);
       g[w].push_back(u);
   }

   memset(parent , -1 , sizeof(parent));
   for (int i = 1; i <= n; i++)
       if (!used[i])
           dfs(i);

   printf("%d\n",(int)ans.size());
   for (set<int>::iterator iter = ans.begin(); iter != ans.end(); iter++)
       printf("%d\n",*iter);

   return 0;
} 