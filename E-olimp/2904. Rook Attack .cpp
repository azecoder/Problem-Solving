#include <iostream>
#include <queue>
#include <memory.h>
#include <vector>

#define MAXN 709
#define clr(a, b) memset(a, b, sizeof(a));

using namespace std;

int cap[MAXN][MAXN];
int flow[MAXN][MAXN];
int used[MAXN] , parent[MAXN];
int n , m , k;

int bfs(int src , int dest)
{
   queue<int> Q;

   clr(used, false);
   clr(parent, -1);

   Q.push(src);
   used[src] = 1;
   while (!Q.empty())
   {
       int cur = Q.front();
       Q.pop();
       for (int i = 0; i <= n + m + 1; i++)
       {
           if (!used[i] && flow[cur][i] < cap[cur][i])
           {
               used[i] = 1;
               parent[i] = cur;
               Q.push(i);
           }
       }
   }
   return used[dest];
}

int MaxFlow(int src , int dest)
{
   int maxflow = 0;

   while (bfs(src , dest))
   {
       int p = dest;
       int _flow = 1000001;
       while (p != src)
       {
           _flow = min(_flow , cap[parent[p]][p] - flow[parent[p]][p]);
           p = parent[p];
       }
       p = dest;
       while (p != src)
       {
           flow[parent[p]][p] += _flow;
           flow[p][parent[p]] -= _flow;
           p = parent[p];
       }
       maxflow += _flow;
   }

   return maxflow;
}

int main()
{
   ios_base::sync_with_stdio(false);

   while (cin >> n >> m >> k)
   {
       clr(cap, 0);
       clr(flow, 0);
       for (int i = 1; i <= n; i++)
           for (int j = 1; j <= m; j++)
               cap[i][n + j] = 1;
       for (int i = 1; i <= n; i++)
           cap[0][i] = cap[i][0] = 1;
       for (int i = 1; i <= m; i++)
           cap[n + i][n + m + 1] = cap[n + m + 1][n + i] = 1;
       for (int i = 0; i < k; i++)
       {
           int u , v;
           cin >> u >> v;
           u++;
           v++;
           cap[u][n + v] = 0;
           cap[n + v][u] = 0;
       }
       cout << MaxFlow(0 , n + m + 1) << endl;
   }


   return 0;
} 