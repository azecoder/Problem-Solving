#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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

#define MAXN 30004
#define clr(a, b) memset(a, b, sizeof(a))

using namespace std;

int n, used[MAXN], dist[MAXN];
vector <int> g[MAXN];
#define pb push_back

queue <int> Q;

void BFS (int src) {
  clr(used, 0);
  clr(dist, 0);
  Q.push(src);
  used[src] = 1;
  while(!Q.empty()) {
      int v = Q.front();
      Q.pop();
      for(int i = 0; i < g[v].size(); i++) {
          int to = g[v][i];
          if(!used[to]) {
              used[to] = 1;
              dist[to] = dist[v] + 1;
              Q.push(to);
          }
      }
  }
}

int maxd1 = 0, ind1, maxd2 = 0, ind2, dist_1[MAXN], dist_2[MAXN], ans[MAXN], k = 0;
int main()
{
  ios_base::sync_with_stdio(false);
  cin >> n;
  for(int i = 2; i <= n; i++) {
      int x;  cin >> x;
      g[i].pb(x);
      g[x].pb(i);
  }
  BFS(1);
  for(int i = 1; i <= n; i++) {
      if(maxd1 < dist[i]) {
          maxd1 = dist[i];
          ind1 = i;
      }
  }
  BFS(ind1);
  for(int i = 1; i <= n; i++) {
      if(maxd2 < dist[i]) {
          maxd2 = dist[i];
          ind2 = i;
      }
      dist_1[i] = dist[i];
  }
  BFS(ind2);
  for(int i = 1; i <= n; i++)
      dist_2[i] = dist[i];

  int l1 = maxd2 / 2;
  int l2 = maxd2 - l1;
  for(int i = 1; i <= n; i++) {
      if(l1 == l2) {
          if(dist_1[i] == l1 && dist_2[i] == l2) {
              ans[++k] = i;
          }
      }
      else {
          if(dist_1[i] == l1 && dist_2[i] == l2) {
              ans[++k] = i;
          }
          if(dist_1[i] == l2 && dist_2[i] == l1) {
              ans[++k] = i;
          }
      }
  }
  for(int i = 1; i < k; i++)
      cout << ans[i] << " ";
  cout << ans[k] << endl;

  return 0;
} 