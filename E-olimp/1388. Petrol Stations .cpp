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

#define INT_MAX 2147483647
#define INT_MIN -2147483648
#pragma comment(linker, "/STACK:100000000")
#define pi acos(-1.0)
#define LL __int64
#define ULL unsigned long long
#define MAXN 102
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

LL n, m;
LL val[MAXN], cost[MAXN], used[MAXN], dist[MAXN];
vector <LL> g[MAXN];
queue <LL> Q;

void dijk(int src)
{
   dist[src] = 0;
   used[src] = 1;
   Q.push(src);
   while(!Q.empty())
   {
       int from = Q.front();
       Q.pop();
       for(int ii = 0; ii < g[from].size(); ii++)
       {
           int to = g[from][ii];
           if(dist[to] > dist[from] + cost[from])
           {
               Q.push(to);
               dist[to] = dist[from] + cost[from];
           }
       }
   }
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin >> n;
   for(int i = 1; i <= n; i++)
       cin >> cost[i];
   cin >> m;
   for(int i = 1; i <= m; i++)
   {
       int x, y;
       cin >> x >> y;
       g[x].push_back(y);
       g[y].push_back(x);
   }
   for(int i = 1; i <= n; i++)  dist[i] = 100009;
   dijk(1);

   if(dist[n] == 100009)
       cout << -1 << endl;
   else
       cout << dist[n] << endl;

   return 0;
} 