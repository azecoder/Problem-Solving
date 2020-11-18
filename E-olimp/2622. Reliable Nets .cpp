#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <memory.h>
#include <vector>
#include <set>

#define MAXN 21
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

vector<int> gh[MAXN];
int dis[MAXN];
int low[MAXN];
int u[21] , v[21] , w[21];
int used[MAXN];
int parent[MAXN];
int n , m , d_time , b_no;

void dfs(int v , vector<int> g[]) {
 used[v] = 1;
 dis[v] = d_time++;
 low[v] = dis[v];
 for (int i = 0; i < (int)g[v].size(); i++) {
     int to = g[v][i];
     if (!used[to]) {
         parent[to] = v;
         dfs(to , g);
         low[v] = min(low[v] , low[to]);
         if (low[to] > dis[v])
             b_no++;
     }
     else if (to != parent[v])
         low[v] = min(low[v] , dis[to]);
 }
}
int find_bridges(int n , vector<int> g[]) {
 clr(parent, -1);
 clr(used, false);
 clr(low, 0);
 clr(dis, 0);
 d_time = 1;

 dfs(1 , g);

 for (int i = 1; i <= n; i++)
     if (!used[i])
         return 1;
 return b_no;
}

int main()
{
 int t = 1;

 while (scanf("%d %d",&n,&m) == 2) {

     if (n == 0 && m == 0) break;

     int sum = 0 , ans = -1;
     for (int i = 0; i < m; i++)
         scanf("%d %d %d",&u[i],&v[i],&w[i]);

     for (int i = 1; i < (1 << m) && m != 1; i++) {
         for (int j = 0; j < m; j++)
             if (i & (1 << j)) {
                 gh[u[j]].push_back(v[j]);
                 gh[v[j]].push_back(u[j]);
                 sum += w[j];
             }
         if (find_bridges(n , gh) == 0)
             ans = ans == -1 ? sum : min(ans , sum);
         for (int j = 1; j <= n; j++) gh[j].clear();
         sum = 0; b_no = 0;
     }
     if (ans != -1)
         printf("The minimal cost for test case %d is %d.\n",t,ans);
     else
         printf("There is no reliable net possible for test case %d.\n",t);
     t++;
 }


 return 0;
} 