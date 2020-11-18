#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <algorithm.>

using namespace std;

#define MAX 10001

int a[MAX][MAX],used[MAX];

int n,m,i,j,x,y;
void dfs(int p)
{
  used[p] = 1;

  for(int i = 1; i <= n; i++)
      if(a[p][i] == 1 && used[i] == 0)
          dfs(i);
}

int main()
{
  cin >> n >> m;
  for(i = 1; i <= m; i ++)
  {
      cin >> x >> y;
      a[x][y] = 1;
      a[y][x] = 1;
  }

  dfs(1);

  for(int i = 1; i <= n; i ++)
  if(used[i] == 0)
  {
      cout << "NO" << endl;
      return 0;
  }

  cout << "YES" << endl;

  return 0;
}