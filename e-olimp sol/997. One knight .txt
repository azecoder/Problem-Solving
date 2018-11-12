#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <memory.h>

using namespace std;

struct Z{
     int x;
     int y;
};

string s1,s2;
int cost[20][20];
bool mark[20][20];
int Dx[]={-2,-1, 1, 2, 2,1,-1,-2};
int Dy[]={-1,-2,-2,-1, 1,2, 2, 1};

void bfs(int n, int sx,int sy,int dx,int dy)
{
   queue<Z>Q;
   Z z;
   z.x=sx;
   z.y=sy;
   
       Q.push(z);
       cost[sx][sy]=0;
       int X,Y;
       memset(mark,false,sizeof mark);
       Z r;
       while(!Q.empty())
       {
             z=Q.front();
             Q.pop();
             if(z.x==dx && z.y==dy)
             {
                     cout << cost[z.x][z.y] << endl;
                     return ;
             }
             for(int i=0;i<8;i++)
             {
                     X=z.x+Dx[i];
                     Y=z.y+Dy[i];
                     if(  X>=1 && X<=n && Y>=1 && Y<=n && !mark[X][Y])
                     {
                             mark[X][Y]=true;
                             cost[X][Y]=cost[z.x][z.y]+1;
                             r.x=X;
                             r.y=Y;
                             Q.push(r);
                     }
             }
       }         
   
}

int main()
{
 int n;
        cin >> n;
 int dx, dy, sx, sy;
     cin >> sx >> sy >> dx >> dy;
     
 bfs(n, sx, sy, dx, dy);
 
   
 return EXIT_SUCCESS;
}