#include <iostream>
#include <memory.h>
#include <stdio.h>
#include <vector>
#include <queue>
#include <cmath>

#define MAXN 105
#define eps 10e-8
#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

typedef double db;
typedef pair<db,db> pr;
typedef pair<pr , db> prr;

int C[2 * MAXN][2 * MAXN];
vector<int> g[2 * MAXN];
int used[2 * MAXN];
int par[2 * MAXN];
pr a[MAXN];
prr p[MAXN];
int n , m , cx , cy , cv;

int bpm(int u)
{
  for (int v = m + 1; v <= m + n; v++)
  {
      if (C[u][v] && !used[v])
      {
          used[v] = 1;
          if (par[v] < 0 || bpm(par[v]))
          {
              par[v] = u;
              return 1;
          }
      }
  }
  return 0;
}

int maxBPM()
{
  memset(par, -1, sizeof(par));
  int result = 0;
  for (int u = 1; u <= m; u++)
  {
      memset(used, 0, sizeof(used));
      if (bpm(u))
          result++;
  }
  return result;
}

db find_dist(db x , db y , db _x , db _y) {
  return sqrt(pow(x-_x,2.0)+pow(y-_y,2.0));
}

int t;
int main()
{
  ios_base::sync_with_stdio(false);
 
  cin >> t;
  while (t--) {
      cin >> n >> m;
      cin >> p[0].f.f >> p[0].f.s >> p[0].s;
      for (int i = 1; i <= m; ++i) {
          cin >> p[i].f.f >> p[i].f.s >> p[i].s;
      }
      cin >> a[n].f >> a[n].s;
      for (int i = 0; i < n; ++i) {
          cin >> a[i].f >> a[i].s;
      }
     
      db l = 0 , r = 10000000 , ans = 0;
      while (fabs(r-l) >= eps) {
          db mid = (r + l) / 2;
          memset(C , 0 , sizeof(C));
          for (int i = 0; i <= n + m + 1; ++i) g[i].clear();
          for (int i = 1; i <= m; ++i) {
              for (int j = 0; j < n; ++j) {
                  if (p[i].s * mid >= find_dist(p[i].f.f,p[i].f.s,a[j].f,a[j].s)) {
                      C[i][m + j + 1] = 1;
                      g[i].pb(m + j + 1);
                  }
              }
          }
          int flow = maxBPM();
          if (flow >= n) {
              ans = mid;
              r = mid - eps;
          } else {
              l = mid + eps;
          }
      }
      cout.precision(6);
      cout << fixed << ans + find_dist(p[0].f.f,p[0].f.s,a[n].f,a[n].s)/p[0].s << endl;
  }
  return 0;
}
