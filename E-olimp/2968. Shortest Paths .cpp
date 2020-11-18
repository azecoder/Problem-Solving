#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <math.h>
#include <bitset>
#include <utility>
#include <set>

#define LL __int64
#define MAXN 2001
#define clr(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define mp make_pair

using namespace std;

const LL inf = (2.e18 + 1) * 1LL;
struct edge
{
   LL to;
   LL w;
};

LL n, m, s;
LL dis[MAXN];
vector< edge > vec[MAXN];
LL used[MAXN];
void BelmanFord(LL src)
{
   for(LL i = 1 ; i <= n ; i ++)  dis[i] = inf;
   dis[src] = 0;
   LL to;
   LL w;
   for(LL t = 1 ; t <= n ; t ++)
       for(LL i = 1 ; i <= n ; i ++)
           for(LL j = 0 ; j < vec[i].size() ; j ++)
           {
               to = vec[i][j].to;
               w = vec[i][j].w;

               if(dis[i] < inf)
                   dis[to] = min(dis[to], dis[i]+w);
                   /*if(dis[i] + w < dis[to])
                       dis[to] = dis[i] + w;*/
           }
}

void dfs(LL node)
{
   used[node] = true;
   for(LL i = 0 ; i < vec[node].size() ; i ++)
   {
       LL go = vec[node][i].to;
       if(!used[go])   dfs(go);
   }
}
int main()
{
   ios_base::sync_with_stdio(false);

   cin >> n >> m >> s;

   for(LL i = 1 ; i <= m ; i ++)
   {
       LL x, y;
       LL w;
       cin >> x >> y >> w;
       vec[x].pb({y, w});
   }

   BelmanFord(s);
   for(LL i = 1 ; i <= n ; i ++)
       for(LL j = 0 ; j < vec[i].size() ; j ++)
       {
           LL to = vec[i][j].to;
           LL w = vec[i][j].w;
           if(dis[i] < inf)
               if(dis[i] + w < dis[to])
                   if(!used[to])
                   {
                       dfs(to);
                   }
       }

   for(LL i = 1 ; i <= n ; i ++)
   {
       if(used[i] == 1)        cout << '-';
       else if(dis[i] == inf)  cout << '*';
       else                    cout << dis[i];
       cout << endl;
   }
   return 0;
}