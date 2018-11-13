#include<iostream>
#include<stack>
#include<queue>
#include<cstring>
#include<algorithm>

#define clr(a, b) memset(a, b, sizeof(a))
#define INF 10000
#define MAX 101

using namespace std;

queue <int> Q;
int way[MAX][MAX];
int cost[MAX][MAX];
int visited[MAX];
int Parent[MAX];
int V, E, MaxFlow = 0;

void bfs(int src)
{
   clr(Parent, -1);
   clr(visited, 0);

   Q.push(src);
   visited[src] = 1;

   while(!Q.empty())
   {
       int node = Q.front();
       Q.pop();
       for(int i = 1; i <= V; i++)
       {
           if(way[node][i] && !visited[i] && cost[node][i] > 0)
           {
               Q.push(i);
               Parent[i] = node;
               visited[i] = 1;
           }
       }
   }
}

int newFlow()
{
   int temp = V , ans = INF;
   while(Parent[temp] != -1)
   {
       ans = min(ans , cost[Parent[temp]][temp]);
       temp = Parent[temp];
   }
   MaxFlow += ans;
   return ans;
}

void ReFlow(int x)
{
   int temp = V;
   while(Parent[temp] != -1)
   {
       cost[Parent[temp]][temp] -= x;
       cost[temp][Parent[temp]] += x;
       temp = Parent[temp];
   }
}

int main()
{
   clr(visited, 0);
   clr(cost, 0);

   int vertices, edges;
   cin >> vertices >> edges;
   V = vertices;

   while(edges--)
   {
       int f, s, c;
       cin >> s >> f >> c;

       way[s][f] = way[f][s]=1;
       cost[s][f] += c;
       cost[f][s] += c;
   }
   while(true)
   {
       bfs(1);
       if(Parent[V] == -1)break;
       ReFlow(newFlow());
   }
   cout << MaxFlow << endl;

   return 0;
} 