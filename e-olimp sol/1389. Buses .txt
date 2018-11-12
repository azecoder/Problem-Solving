#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>

#define MAXN 101
#define PB push_back
#define MP make_pair
#define f first
#define s second

using namespace std;

typedef pair<int,int> pr;
typedef pair<int , pr> prr;

priority_queue<pr , vector<pr > , greater<pr > > Q;
vector<prr> g[MAXN];
bool used[MAXN];
int dis[MAXN];
int n , m ,  s , f;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

   ios_base::sync_with_stdio(false);

   scanf("%d %d %d %d",&n,&s,&f,&m);
   for (int i = 0; i < m; i++)
   {
       int u , v , dt , aat;
       scanf("%d %d %d %d",&u,&dt,&v,&aat);
       g[u].PB(MP(dt , MP(v , aat)));
   }
   for (int i = 1; i <= n; i++) dis[i] = INT_MAX;
   Q.push(MP(0 , s));
   dis[s] = 0;
   while (!Q.empty())
   {
       int cur = Q.top().s;
       Q.pop();
       int sz = g[cur].size();
       for (int i = 0; i < sz; i++)
       {
           int to = g[cur][i].s.f;
           int aat = g[cur][i].s.s;
           int dt = g[cur][i].f;
           if (!used[to] && dis[cur] <= dt && aat <= dis[to])
           {
               dis[to] = aat;
               Q.push(MP(dis[to] , to));
           }
       }
   }
   printf("%d\n",(dis[f] == INT_MAX ? -1 : dis[f]));

   return 0;
} 