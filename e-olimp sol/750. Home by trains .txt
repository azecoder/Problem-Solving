#include <iostream>
#include <cstdio>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
const ll inf = 1.e13;
const int MAX = 123;

struct train{
int node;
long long t;};

int n, e, m;
long long dis[MAX];
vector<train>a[MAX];
bool used[MAX];

void update(int T, int IN)
{
  for(int i = IN ; i < a[T].size() ; i ++)
      dis[ a[T][i].node] = min( dis[a[T][i].node], a[T][i].t);
}

void relax(int N)
{
  used[N] = true;

  for(int i = 1 ; i <= m ; i ++)
      for(int j = 0 ; j < a[i].size() ; j ++)
          if(a[i][j].node == N && dis[N] <= a[i][j].t)
          update(i, j + 1);
}

int main()
{
  cin >> n >> e;
  cin >> m;

  for(int i = 1 ; i <= m ; i ++)
  {
      int l;
      cin >> l;
      for(int j = 0 ; j < l ; j ++)
      {
          int x, y;
          cin >> x >> y;
          a[i].push_back({x, y});
      }
  }

  for(int i = 1 ; i <= n ; i ++)  dis[i] = inf;
  dis[1] = 0;
  relax(1);

  for(int w = 1 ; w < n ; w ++)
  {
      int small = -1;

      for(int i = 1 ; i <= n ; i ++)
          if(!used[i])
              if(small == -1 || dis[i] < dis[small])
              small = i;

      if(small == -1) break;
      relax(small);
  }
  if(dis[e] == inf) dis[e] = -1;
  cout << dis[e] << endl;


  return 0;
}