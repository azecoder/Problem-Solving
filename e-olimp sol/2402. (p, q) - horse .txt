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
#define MAXN 1001
#define clr(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define mp make_pair

using namespace std;

int m, n, p, q, sx, sy, fx, fy;
int used[MAXN][MAXN], pathi[MAXN], pathj[MAXN], ParI[MAXN][MAXN], ParJ[MAXN][MAXN], goi[MAXN], goj[MAXN];
int ti, tj, j, cnt = 0;

int way_x[] {+1,+1,-1,-1};
int way_y[] {+1,-1,+1,-1};
queue<int> Qx;
queue<int> Qv;

void BFS(int x, int y)
{
   Qx.push(x);
   Qv.push(y);

   used[x][y] = 1;

   while(!Qx.empty() && !used[fx][fy])
   {
       ti = Qx.front();
       tj = Qv.front();

       Qx.pop();
       Qv.pop();

       for(int i = 0; i < 4; i++)
       {
           goi[i] = ti + p*way_x[i];
           goj[i] = tj + q*way_y[i];
           goi[4+i] = ti + q*way_x[i];
           goj[4+i] = tj + p*way_y[i];
       }

       for(int i = 0 ; i < 8 ; i ++)
           if(goi[i] >= 1 && goj[i] >= 1 && goi[i] <= m && goj[i] <= n)
               if(!used[ goi[i] ][ goj[i] ])
               {
                   Qx.push(goi[i]);
                   Qv.push(goj[i]);

                   ParI[goi[i]][goj[i]] = ti;
                   ParJ[goi[i]][goj[i]] = tj;
                   used[goi[i]][goj[i]] = 1;
               }

   }
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin>>m>>n>>p>>q>>sx>>sy>>fx>>fy;

   BFS(sx, sy);


   if(!used[fx][fy])
   {
       cout << "-1" << endl;
       return 0;
   }

   pathi[cnt] = fx;
   pathj[cnt] = fy;

   cnt ++;
   while(true)
   {
       if(fx == sx && fy == sy)
           break;

       ti = fx;
       tj = fy;

       fx = ParI[ti][tj];
       fy = ParJ[ti][tj];
       pathi[cnt] = fx;
       pathj[cnt] = fy;
       cnt ++;
   }

   cout<<--cnt<<endl;
   for(int i = cnt; i >= 0 ; i --)
       cout<<pathi[i]<<" "<<pathj[i]<<endl;

   return 0;
}