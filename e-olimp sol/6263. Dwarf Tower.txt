#include <stdio.h>
#include <set>
#include <map>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N = 20010;

int cost[N];
bool was[N];
vector < pair <int, int> > g[N];

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= n; i++) scanf("%d", cost + i);
  for (int i = 0; i < m; i++) {
    int foo, bar, who;
    scanf("%d %d %d", &who, &foo, &bar);
    g[foo].push_back(make_pair(bar, who));
    g[bar].push_back(make_pair(foo, who));
  }
  for (int i = 1; i <= n; i++) was[i] = false;
  for (int it = 0; it < n; it++) {
    int mn = (int)2e9, km = -1;
    for (int i = 1; i <= n; i++)
      if (!was[i] && cost[i] < mn) {
        mn = cost[i];
        km = i;
      }
    was[km] = true;
    int sz = g[km].size();
    for (int j = 0; j < sz; j++) {
      int tot = mn + cost[g[km][j].first];
      if (tot < cost[g[km][j].second]) {
        cost[g[km][j].second] = tot;
      }
    }
  }
  printf("%d\n", cost[1]);
  return 0;
}