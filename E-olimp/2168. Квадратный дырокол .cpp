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
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

LL w, h, used[101][101], cnt, ans = 0;
char a[101][101];

void DFS(LL x, LL v)
{
   cnt++;
   used[x][v] = 1;
   if(a[x-1][v] == '0' && !used[x-1][v])   DFS(x-1, v);
   if(a[x+1][v] == '0' && !used[x+1][v])   DFS(x+1, v);
   if(a[x][v-1] == '0' && !used[x][v-1])   DFS(x, v-1);
   if(a[x][v+1] == '0' && !used[x][v+1])   DFS(x, v+1);
}

int main()
{
   ios_base::sync_with_stdio(false);

   cin >> h >> w;
   for(LL i = 1; i <= h; i++)
       for(LL j = 1; j <= w; j++)
           cin >> a[i][j];

   for(LL i = 1; i <= h; i++)
       for(LL j = 1; j <= w; j++)
           if(!used[i][j] && a[i][j] == '0') {
               DFS(i, j);
               ans ++;
           }
   cout << ans << endl;
   return 0;
}