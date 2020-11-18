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

LL n, used[21][21], cnt, ind_i, ind_j;
char a[21][21];

void DFS(LL x, LL v)
{
   cnt++;
   used[x][v] = 1;
   if(a[x-1][v] == '.' && !used[x-1][v])   DFS(x-1, v);
   if(a[x+1][v] == '.' && !used[x+1][v])   DFS(x+1, v);
   if(a[x][v-1] == '.' && !used[x][v-1])   DFS(x, v-1);
   if(a[x][v+1] == '.' && !used[x][v+1])   DFS(x, v+1);
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin >> n;
   for(LL i = 1; i <= n; i++)
       for(LL j = 1; j <= n; j++)
           cin >> a[i][j];
//        cout << ind_i << " " << ind_j << endl;
   cnt = 0;
   cin >> ind_i >> ind_j;
   DFS(ind_i, ind_j);
   cout << cnt << endl;

   return 0;
}