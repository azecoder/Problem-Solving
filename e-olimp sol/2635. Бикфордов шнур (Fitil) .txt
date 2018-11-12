#include <iostream>
#include <stdio.h>
#include <cstring>

#define clr(a, b) memset(a, b, sizeof(a))
#define INF 1000000009
#define MAXN 109

using namespace std;

int a[MAXN][MAXN];
int used[MAXN];
int d[MAXN];
int idx;
int minn , ans = INF , id;
int n,m,x,y,z,say;

void dij(int x)
{
   used[x] = 1;
   for(int i = 1; i <= n; i++)
   {
       if(a[x][i] > 0 && used[i] == 0 && d[i] > d[x] + a[x][i])
       {
           d[i] = d[x] + a[x][i];
       }
   }
}
int main()
{
   ios_base::sync_with_stdio(false);

   scanf("%d %d", &n, &m);
   for(int i = 1; i <= m; i++)
   {
       scanf("%d %d %d", &x, &y, &z);
       a[x][y] = z;
       a[y][x] = z;
   }

   for(int s = 1; s <= n; s ++)
   {
       clr(used, 0);
       clr(d, INF);

       d[s] = 0;
       while(1)
       {
           minn = INF;
           idx = -1;
           for(int i = 1; i <= n; i++)
           {
               if(!used[i] && minn > d[i])
               {
                   minn = d[i];
                   idx = i;
               }
           }
           if (idx == -1) break;
           dij(idx);
       }
       minn = 0;
       for(int i = 1; i <= n; i++)
           minn = max(minn , d[i]);
       if (minn < ans)
       {
           ans = minn;
           id = s;
       }

   }
   printf("%d %d\n", id, ans);

   return 0;
} 