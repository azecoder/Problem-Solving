#include <iostream>
#include <algorithm>
#include <memory.h>
#include <vector>
#include <queue>

#define f first
#define s second
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

vector<int> g[51];
int parent[51] , used[51];
int c[51][51] , f[51][51];
int n;

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
       for (int i = 0; i < (int)g[cur].size(); i++)
       {
           int to = g[cur][i];
           if (!used[to] && f[cur][to] < c[cur][to])
           {
               used[to] = 1;
               parent[to] = cur;
               Q.push(to);
           }
       }
   }
   return used[dest];
}

int MaxFlow(int destination)
{
   int maxflow = 0;

   clr(f, 0);
   while (bfs(1 , destination))
   {
       int n = destination;
       int flow = 10000001;
       while (n != 1)
       {
           flow = min(flow , c[parent[n]][n] - f[parent[n]][n]);
           n = parent[n];
       }
       n = destination;
       while (n != 1)
       {
           f[parent[n]][n] += flow;
           f[n][parent[n]] -= flow;
           n = parent[n];
       }
       maxflow += flow;
   }

   return maxflow;
}

int main()
{
   ios_base::sync_with_stdio(false);

   while (cin >> n)
   {
       int ans = 1000001;
       clr(c, 0);
       for (int i = 1; i <= n; i++)
       {
           for (int j = 1; j <= n; j++)
           {
               char ch;
               int x;
               cin >> ch;
               x = ch - 48;
               if (x > 0)
               {
                   g[i].push_back(j);
                   c[i][j] = x;
               }
           }
       }
       for (int i = 2; i <= n; i++)
           ans = min(ans , MaxFlow(i));
       cout << ans << endl;
   }

   return 0;
}