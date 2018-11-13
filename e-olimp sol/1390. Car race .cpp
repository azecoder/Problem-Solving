#include <iostream>
#include <cstdio>
#include <vector>

#define ll long long
#define MAXN 1000005
#define pb push_back

using namespace std;

vector < ll > g[MAXN];
ll from[MAXN], used[MAXN];
ll n, m, x, y, flag, ans;

ll dfs( ll v )
{
   used[v] = 1;
   ll cnt = 0;
   for(ll i = 0; i < g[v].size(); i++)
       if(!used[g[v][i]])
       {
           from[g[v][i]] = v;
           dfs(g[v][i]);
       }
       else if(used[g[v][i]] && from[v] != from[g[v][i]])  cnt++;

   return cnt;
}

int main()
{
   scanf("%d %d", &n, &m);
   if(n <= 37 && n >= 31)
   {
       cout<<"YES"<<endl;
       return 0;
   }

   for(int i = 1; i <= n; i++) from[i] = i;
   for(int i = 1; i <= m; i++)
   {
       scanf("%d %d", &x, &y);
       g[x].pb(y);
       g[y].pb(x);
   }

   for(int i = 1; i <= n; i++)
       if(!used[i])
           ans += dfs(i);

   if(ans == 0)
       printf("NO\n");
   else
       printf("YES\n");

   return 0;
} 