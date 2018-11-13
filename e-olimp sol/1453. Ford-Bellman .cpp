#include <iostream>
#include <cstdio>
#include <vector>

#define MAXN 101
#define MAXM 10001
#define INF 1<<30
#define pb push_back

using namespace std;

struct Edge
{
   int u , v , w;

   Edge() {}
   Edge(int a , int b , int c)
   {
       u = a;
       v = b;
       w = c;
   }
};

Edge edges[MAXM];
int dis[MAXN];
int n , m;

void bellman_ford()
{

   for (int i = 1; i <= n; i++) dis[i] = INF;
   dis[1] = 0;

   for (int i = 1; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           int from = edges[j].u;
           int to = edges[j].v;
           int weight = edges[j].w;
           if (dis[from] != INF && dis[from] + weight < dis[to])
           {
               dis[to] = dis[from] + weight;
           }
       }
   }
}

int main()
{
   ios_base::sync_with_stdio(false);

   scanf("%d %d", &n, &m);
   for (int i = 0; i < m; i++)
   {
       int u , v , w;
       scanf("%d %d %d", &u, &v, &w);
       edges[i] = Edge(u , v , w);
   }
   bellman_ford();
   for (int i = 1; i < n; i++)
       printf("%d ",(dis[i] == INF ? 30000 : dis[i]));
   printf("%d\n", (dis[n] == INF ? 30000 : dis[n]));

   return 0;
} 