#include <iostream>
#include <algorithm>
#include <memory.h>
#include <queue>
#include <vector>
#include <stdio.h>
#pragma comment(linker, "/STACK:100000000")

#define MAXN 1001
#define PB push_back
#define MP make_pair
#define f first
#define s second
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

typedef pair<int,int> pr;
typedef pair<int,pr > prr;

vector < pr > g[MAXN];
int used[MAXN];
int color[MAXN];
int n , check;

void dfs(int v , int len) {

 if (!check) return;
 used[v] = 1;
 for (int i = 0; i < (int)g[v].size(); i++) {
     int to = g[v][i].f;
     if (g[v][i].s <= len) continue;
     if (!used[to] && !color[to]) {
         color[to] = 3 - color[v];
         dfs(to , len);
     }
     if (color[to] != 3 - color[v]) {
         check = false;
         break;
     }
 }
}

int main()
{    
 int l = 0 , r = 0;

 cin >> n;
 for (int i = 1; i < n; i++) {
     for (int j = i + 1; j <= n; j++) {
         int w;
         cin >> w;
         r = max(r , w);
         g[i].PB(MP(j, w));
         g[j].PB(MP(i, w));
     }
 }    
 int cvb;
 while (l <= r) {
     int mid = l + (r - l) / 2;
     clr(used, false);
     clr(color, 0);
     check = 1; color[1] = 1; dfs(1,mid);
     if (!check) l = mid + 1;
     else cvb = mid , r = mid - 1;
 }
 cout << cvb << endl;

 return 0;
} 