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

#define MAX 101
#define ll long long

int a[MAX][MAX];
int i, j, k = 1;

int main()
{
int n, m;
  cin >> n >> m;
int x, y;
  for(i = 1; i <= m; i ++)
  {
      cin >> x >> y;
      a[x][y] ++;
  }
int sum;
  while(1)
  {
      if(k == n+1)    break;

      sum = 0;
      for(i = 1; i <= n; i ++)
          sum += a[i][k];

      for(j = 1; j <= n; j ++)
          sum += a[k][j];


      if(sum != (n-1))
      {
          cout << "NO" << endl;
          return 0;
      }

      k ++;
  }

  cout << "YES" << endl;

  return 0;
}