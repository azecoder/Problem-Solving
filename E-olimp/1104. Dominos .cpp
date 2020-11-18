#include <cstdlib>  
#include <cctype>  
#include <cstring>  
#include <cstdio>  
#include <cmath>  
#include <algorithm>  
#include <vector>  
#include <string>  
#include <iostream>  
#include <sstream>  
#include <map>  
#include <set>  
#include <queue>  
#include <stack>  
#include <fstream>  
#include <numeric>  
#include <iomanip>  
#include <bitset>  
#include <list>  
#include <stdexcept>  
#include <functional>  
#include <utility>  
#include <ctime>

using namespace std;

/*      <   author: Tabriz Hajiev   >       */

#define clr(a) memset(a,0,sizeof(a))
#define PB push_back

// DFS

bool visit[110000];

vector < long > edge[110000];
vector < long > sortnode;

void dfs(int node)
{
   visit[node] = true;
   for(int j = 0; j < edge[node].size(); j++)
       if(!visit[edge[node][j]])    dfs(edge[node][j]);
   sortnode.PB(node);
}

// MAIN FUNCTION
int main()
{
   long n, m;    cin >> n >> m;
   
   for(long i = 1; i <= m; i++)
   {
       long x, y;  cin >> x >> y;
       edge[x].PB(y);
   }
   for(long i = 1; i <= n; i++)
       if(!visit[i])    dfs(i);
   
   clr(visit);
   long l = sortnode.size()-1;
   long cnt = 0;
   for(long i = l; i >= 0; i--)
       if(!visit[sortnode[i]])
       {
           cnt ++;
           dfs(sortnode[i]);
       }
   cout << cnt << endl;

   sortnode.clear();
   clr(visit);
   for(long i = 1; i <= n; i++)
   edge[i].clear();

   
   return 0;
} 